//employee.h
class employee
{
protected:
	char name[20];	//����
	int individualEmpNo;	//���˱��
	int grade;	//����
	float accumPay;	//��н
	static int employeeNo;	//����˾ְԱ���Ŀǰ���ֵ
public:
	employee();	//���캯��
	~employee();	//��������
	void SetName(char *);  	//������������
	char * GetName(); 	//��ȡ��������
	void promote(int);	//��������
	void SetaccumPay (float pa);  	//������н����
	int GetindividualEmpNo();  	//��ȡ��ź���
	int Getgrade();   	//��ȡ������
	float GetaccumPay();  	//��ȡ��н����
};
