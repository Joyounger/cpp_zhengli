//Point.h
#if !defined(_POINT_H)
#define _POINT_H
class Point
{
   public:
       Point(); 
       Point(int xx,int yy);
       ~Point();
       void Move(int x,int y);
       int GetX() {return X;}
       int GetY() {return Y;}
  private:
       int  X,Y;
};
#endif
