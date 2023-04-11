//6��-5.overloading.cpp
#include <iostream>
using namespace std;

class Point {
    int x,y;
public:
	Point(int i = 0, int j = 0) :x(i), y(j) {}
	void print() const {cout<<"x = "<<x<<", y = "<<y<<endl;}
};
class indirectPoint {
    Point *p;
public:
    indirectPoint(Point *x) : p(x) {}
    Point *operator->() const {
		cout<<"smart pointer->: ";
       return p;
    }
    Point &operator*() const {
		cout<<"smart pointer*: ";
       return *p;

    }
};
void main() {
   indirectPoint ip1 = new Point(1,1);
   ip1->print();

  Point *p1 = new Point(2,2);//���� pointer
  indirectPoint ip2 = new Point(3,3);//smart pointer
  //p1, ip2�� ���Ͽ� ȣ��Ǵ� pointer(0 �Լ��� �޶���
  p1->print();
  //ip2->print();
  ip2.operator->()->print();

  (*p1).print();
  (*ip2).print();
  //ip2.operator*().print(); //�ּ��� Ǯ�� �ǽ�
  system("pause");
}