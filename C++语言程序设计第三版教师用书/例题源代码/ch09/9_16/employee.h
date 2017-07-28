//employee.h
class employee
{
protected:
	char name[20];	//姓名
	int individualEmpNo;	//个人编号
	int grade;	//级别
	float accumPay;	//月薪总额
	static int employeeNo;	//本公司职员编号目前最大值
public:
	employee();	//构造函数
	~employee();	//析构函数
	virtual void pay()=0;	//计算月薪函数（纯虚函数）
	virtual void promote(int increment=0);	//升级函数（虚函数）
	void SetName(char *);  	//设置姓名函数
	char * GetName(); 	//提取姓名函数
	int GetindividualEmpNo();  	//提取编号函数
	int Getgrade();  	//提取级别函数
	float GetaccumPay();  	//提取月薪函数
};

class technician:public employee	//兼职技术人员类
{
private:
	float hourlyRate;	//每小时酬金
	int workHours;	//当月工作时数
public:
	technician();	//构造函数
	void SetworkHours(int wh);  	//设置工作时数函数
	void pay();	//计算月薪函数
	void promote(int);	//升级函数
};

class salesman:virtual public employee	//兼职推销员类
{
protected:
	float CommRate;	//按销售额提取酬金的百分比
	float sales;	//当月销售额
public:
	salesman();	//构造函数
	void Setsales(float sl); 	//设置销售额函数
	void pay();	//计算月薪函数
	void promote(int);	//升级函数
};

class manager:virtual public employee	//经理类
{
protected:
	float monthlyPay;	//固定月薪数
public:
	manager();	//构造函数
	void pay();	//计算月薪函数
	void promote(int);	//升级函数
};

class salesmanager:public manager,public salesman   //销售经理类
{
public:
	salesmanager();	//构造函数
	void pay();	//计算月薪函数
	void promote(int);	//升级函数
};
