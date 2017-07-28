//3_3.cpp
#include <iostream>  
using namespace std;

int isTriangular(int n)
{ int x=0, y=0, dy=1;
  while (y < n)
    y += dy++;
  if (y == n) return true;
  else return false;
}

int main()
{ const int MAX=25;
  for (int i=0; i<MAX; i++)
    if (isTriangular(i)) cout << i << " 是三角形.\n";
    else cout << i << " 不是三角形.\n";
	return 0;
}
/*
程序运行结果为：
0 是三角形.
1 是三角形.
2 不是三角形.
3 是三角形.
4 不是三角形.
5 不是三角形.
6 是三角形.
7 不是三角形.
8 不是三角形.
9 不是三角形.
10 是三角形.
11 不是三角形.
12 不是三角形.
13 不是三角形.
14 不是三角形.
15 是三角形.
16 不是三角形.
17 不是三角形.
18 不是三角形.
19 不是三角形.
20 不是三角形.
21 是三角形.
22 不是三角形.
23 不是三角形.
24 不是三角形.
*/