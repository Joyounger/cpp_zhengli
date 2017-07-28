//8_8.cpp
#include <iostream>
#include <string>
using namespace std;
class Med
{public:
  virtual void print() =0;
  virtual string id() =0;
protected:
  string title;
};

class Book : Med
{public:
  Book(string a="", string t="", string p="", string i="") : author(a), pub(p), isbn(i)   { title = t; }
  void print()  { cout << title << " , Author: " << author << ", Publisher: " << pub << ".\n";  }
  string id()   { return isbn; }
private:
  string author, pub, isbn;
};

class CD : public Med
{public:
  CD(string t="", string c="", string m="", string n="") : composer(c), make(m), number(n) 
  { title = t; }
  void print()  { cout << title << ", CD composer:" << composer << endl; }
  string id()   { return make + "" + number; }
  private:
  string composer, make, number;
};

class Mag : Med
{public:
  Mag(string t="", string i="", int v=0,  int n=0) : issn(i), volume(v), number(n)   { title = t; }
  void print()  {cout << title << " , Magzine: Vol. " << volume << ", No. " << number << endl; }
  string id()   { return issn; }
private:
  string issn, pub;
  int volume, number;
};

int main()
{
  Book book("����", "C++ ���Գ������", "�廪��ѧ������", "0-000-00000-1");
  Mag mag("����C/C++���ģʽ", "0000-000X", 020, 01);
  CD cd("C++Դ����", "�廪��ѧ��������", "ARCHIV", "000001");
  book.print();
  cout << "\tid: " << book.id() << endl;
  mag.print();
  cout << "\tid: " << mag.id() << endl;
  cd.print();
  cout << "\tid: " << cd.id() << endl;
  return 0;
}

/*
C++ ���Գ������ , Author: ����, Publisher: �廪��ѧ������.
        id: 0-000-00000-1
����C/C++���ģʽ , Magzine: Vol. 16, No. 1
        id: 0000-000X
C++Դ����, CD composer:�廪��ѧ��������
        id: ARCHIV000001
*/