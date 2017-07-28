//employee.h
class employee
{
protected:
	char name[20];	//����
	int individualEmpNo;	//���˱��
	int grade;	//����
	float accumPay;	//��н�ܶ�
	static int employeeNo;	//����˾ְԱ���Ŀǰ���ֵ
public:
	employee();	//���캯��
	~employee();	//��������
	void pay();	//������н����
	void promote(int);	//��������
	void SetName(char *); 	//������������
	char * GetName();  	//��ȡ��������
	int GetindividualEmpNo();  	//��ȡ��ź���
	int Getgrade();   	//��ȡ������
	float GetaccumPay();  	//��ȡ��н����
};

class technician:public employee	//��ְ������Ա��
{
private:
	float hourlyRate;	//ÿСʱ���
	int workHours;	//���¹���ʱ��
public:
	technician();	//���캯��
	void SetworkHours(int wh);  	//���ù���ʱ��
	void pay();	//������н����
};

class salesman:virtual public employee	//��ְ����Ա��
{
protected:
	float CommRate;	//�����۶���ȡ���İٷֱ�
	float sales;	//�������۶�
public:
	salesman();	//���캯��
	void Setsales(float sl);  	//�������۶�
	void pay();	//������н����
};

class manager:virtual public employee	//������
{
protected:
	float monthlyPay;	//�̶���н��
public:
	manager();	//���캯��
	void pay();	//������н����
};

class salesmanager:public manager,public salesman   //���۾�����
{
public:
	salesmanager();	//���캯��
	void pay();	//������н����
};

