// 6-3.DANGLE.CPP
#include <iostream>
using namespace std;
/*
�ǽ� 3
1)����
 aliasing���� �߻��Ǵ� dangling reference�� ���� �����غ���.

2)���
 ��. ��ü a�� �������� ��� ���� b�� ����Ű�� ���� ������� ���� �������� ���ؼ� Ȯ���غ���.
*/
void main (){
	// ������ ���� pointer ����
    int *a;
    int *b;
	  // new ������ ���� ������ ���� memory�� �Ҵ��Ѵ�.
	a = new(int);
    b = new(int);
        // pointer ������ ���� ������ �����Ѵ�.
	*a = 10;
	    // b�� a�� ���� ��ġ aliasing�� ����Ų��.
    b = a;
    cout<<"Before delete(): a = "<<a<<", b = "<<b<<endl;
	cout << endl << "The original value of b is " << *b << endl;
	    // ���� ����(a�� ����)�� a�� �Ҵ�� memory�� return�ǹǷ� b�� ���� ���� ��ġ�� ����Ų��.
 	delete (a);
	    cout<<"After delete(): a = "<<a<<", b = "<<b<<endl;
    cout << "After the deallocation of a, the value of b becomes"<<*b<< endl;
	  // b�� ���� ���� ������ Ʋ�� ���� �ƴ����� �ǹ̰� ����.
 	*b *= 2;
    cout << "Multiplying b for 2 yields a value of " << *b << endl;
	system("pause");
}