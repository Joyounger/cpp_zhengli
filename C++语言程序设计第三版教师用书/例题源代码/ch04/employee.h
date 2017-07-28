//employee.h
class employee
{
protected:
	int individualEmpNo;	//个人编号
	int grade;	//级别
	float accumPay;	//月薪
public:
	employee();	//构造函数
	~employee();	//析构函数
	void IncreaseEmpNo (int);  	//增加编号函数
	void promote(int);	//升级函数
	void SetaccumPay (float);  	//设置月薪函数
	int GetindividualEmpNo();  	//提取编号函数
	int Getgrade();   	//提取级别函数
	float GetaccumPay();  	//提取月薪函数
};

employee::employee()
{	individualEmpNo=1000;  	//员工编号目前最大编号为1000
	grade=1;	//级别初值为1
	accumPay=0.0; }	//月薪总额初值为0

employee::~employee() {}	//析构函数为空

void employee::IncreaseEmpNo (int steps)
{	individualEmpNo+=steps;}	//增加编号，增加的步长由steps指定  

void employee::promote(int increment)
{	grade+=increment;}	//升级，提升的级数由increment指定

void employee::SetaccumPay (float pa)  	
{	accumPay=pa;}	//设置月薪

int employee::GetindividualEmpNo()
{	return individualEmpNo;}	//获取成员编号

int employee::Getgrade()
{	return grade;}	//获取级别

float employee::GetaccumPay()
{	return accumPay;}	//获取月薪
