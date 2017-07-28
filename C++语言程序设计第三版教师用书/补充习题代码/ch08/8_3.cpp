//8_3.cpp
#include <iostream>  
#include <cassert>  
class zrf_Ratio
{ 
    friend std::ostream& operator<<(std::ostream&, const zrf_Ratio&);
    friend std::istream& operator>>(std::istream&, zrf_Ratio&);
  public:
    zrf_Ratio(int=0,int=1);
    zrf_Ratio(const zrf_Ratio&);
    zrf_Ratio& operator=(const zrf_Ratio&);
    zrf_Ratio& operator*=(const zrf_Ratio&);
    zrf_Ratio operator++();     
    zrf_Ratio operator++(int);  
    int& operator[](int);
    int numerator() const;
    int denominator() const;
    zrf_Ratio reciprocal() const;
    void invert();
    operator double() const;
    void print() const;
  private:
    int num;
    int den;
    void reduce();
};
std::ostream& operator<<(std::ostream& ostr, const zrf_Ratio& r)
{ return ostr << r.num << "/" << r.den;}

std::istream& operator>>(std::istream& istr, zrf_Ratio& r)
{ istr >> r.num;  istr.ignore(1);  istr >> r.den;  r.reduce();  return istr;}

//���г�Ա����:
zrf_Ratio::zrf_Ratio(int num, int den) : num(num), den(den){ reduce();}

zrf_Ratio::zrf_Ratio(const zrf_Ratio& r) : num(r.num), den(r.den){ }

zrf_Ratio& zrf_Ratio::operator=(const zrf_Ratio& r)
{ num = r.num;  den = r.den;  return *this;}

zrf_Ratio& zrf_Ratio::operator*=(const zrf_Ratio& r)
{ num = num*r.num;  den = den*r.den;  reduce();  return *this;}

zrf_Ratio zrf_Ratio::operator++(){ num += den;  reduce();  return *this;}

zrf_Ratio zrf_Ratio::operator++(int)
{ zrf_Ratio temp = *this;  num += den;  reduce();  return temp;}

int& zrf_Ratio::operator[](int i)
{ if (i == 1) return num;
  if (i == 2) return den;
  std::cerr << "ERROR: index out of range\n";
  exit(0);
}

int zrf_Ratio::numerator() const{ return num;}

int zrf_Ratio::denominator() const{ return den;}

zrf_Ratio zrf_Ratio::reciprocal() const{ zrf_Ratio r(den,num);  r.reduce();  return r;}

void zrf_Ratio::invert(){ int temp = num;  num = den;  den = temp;  reduce();}

zrf_Ratio::operator double() const{ return double(num)/den;}

void zrf_Ratio::print() const{ std::cout << num << '/' << den;}

//˽�г�Ա����:
void swap(int &m, int &n){	int t;		t=m; 	m=n; 	n=t;}

int zrf_Gcd(int m, int n)
{ if (m<n) swap(m,n);
  assert(n>=0);
  while (n>0)  { int r=m%n;    m = n;    n = r;  }
  return m;
}

void zrf_Ratio::reduce()
{ if (num == 0 || den == 0)  { num = 0;    den = 1;    return;  }
  if (den < 0)  { den *= -1;    num *= -1;  }
  if (num == 1) return;
  int sgn = (num<0?-1:1);
  int g = zrf_Gcd(sgn*num,den);
  num /= g;  den /= g;
}

int main()
{
	zrf_Ratio zrf(1,7),ssh(26,65),zl;
	zl=zrf;
	std::cout<<"zrf is:"<<zrf<<"; ssh is:"<<ssh<<'\n' ;
	std::cout<<"zl is:"<<zl;
	std::cout<<"\nAfter zrf*=ssh, zrf is:"<<zrf;
	std::cout<<"\nAfter zrf++ is:"<<zrf++ ;
	std::cout<<"\nAfter ++zrf is:"<<++zrf ;
	std::cout<<"\nzrf[1] is:"<<zrf[1]<<"; zrf[2] is:"<<zrf[2] ;
	return 0;
}

/*
���н����
zrf is:1/7; ssh is:2/5
zl is:1/7
After zrf*=ssh, zrf is:1/7
After zrf++ is:1/7
After ++zrf is:15/7
zrf[1] is:15; zrf[2] is:7
*/