//employee.h
class employee
{
protected:
	int individualEmpNo;	//���˱��
	int grade;	//����
	float accumPay;	//��н
public:
	employee();	//���캯��
	~employee();	//��������
	void IncreaseEmpNo (int);  	//���ӱ�ź���
	void promote(int);	//��������
	void SetaccumPay (float);  	//������н����
	int GetindividualEmpNo();  	//��ȡ��ź���
	int Getgrade();   	//��ȡ������
	float GetaccumPay();  	//��ȡ��н����
};

employee::employee()
{	individualEmpNo=1000;  	//Ա�����Ŀǰ�����Ϊ1000
	grade=1;	//�����ֵΪ1
	accumPay=0.0; }	//��н�ܶ��ֵΪ0

employee::~employee() {}	//��������Ϊ��

void employee::IncreaseEmpNo (int steps)
{	individualEmpNo+=steps;}	//���ӱ�ţ����ӵĲ�����stepsָ��  

void employee::promote(int increment)
{	grade+=increment;}	//�����������ļ�����incrementָ��

void employee::SetaccumPay (float pa)  	
{	accumPay=pa;}	//������н

int employee::GetindividualEmpNo()
{	return individualEmpNo;}	//��ȡ��Ա���

int employee::Getgrade()
{	return grade;}	//��ȡ����

float employee::GetaccumPay()
{	return accumPay;}	//��ȡ��н
