//point.h
class Point	//Point�������
{
public:	//�ⲿ�ӿ�
	Point(float xx=0, float yy=0) {X=xx;Y=yy;}
	float GetX() {return X;}
	float GetY() {return Y;}
	friend float linefit(Point l_point[], int n_point);	//��Ԫ����
	//int�ͱ���Ϊ����
private:	//˽�����ݳ�Ա
	float X,Y;
};
//End of point.h
