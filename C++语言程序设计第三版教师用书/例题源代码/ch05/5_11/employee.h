//employee.h
class employee
{
protected:
	int individualEmpNo;	//���˱��
	int grade;	//����
	float accumPay;	//��н
	static int employeeNo;	//����˾ְԱ���Ŀǰ���ֵ
public:
	employee();	//���캯��
	~employee();	//��������
	void promote(int);	//��������
	void SetaccumPay (float pa);  	//������н����
	int GetindividualEmpNo();  	//��ȡ��ź���
	int Getgrade();   	//��ȡ������
	float GetaccumPay();  	//��ȡ��н����
};
