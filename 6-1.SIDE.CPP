// 6-1.SIDE.CPP
#include <iostream>
using namespace std;
/*
�ǽ� 1
1)����
 �Լ� Ȱ���� ���ؼ� side effect�� ���� �˾ƺ���.

2)���
 ��. ������ ���Ͽ� multiply �Լ��� main�� a�� ���� �����ϴ� ���� Ȯ���غ���.
*/
// ���� �Լ��� ��Ȯ�ϴ�. �׷��� reference parameter�� ���� �����ϰ� �Ǿ� non-local �����͸� �����ϰ� �ȴ�.
int multiply (int &x, int &y){
    x *= y;
	cout<<"multiply(): x = "<<x<<", y = "<<y<<endl;
    return x;
}

void main (){ 
	
    // �� ġȯ�� ���� �ʱ�ȭ
    int a = 5, b = 3, c = 0;
	// ���� ǥ������ side effect ������ �߸��� ����� �ش�.
    c = a + multiply (a, b);
	cout<<"after multiply(): a = "<<a<<", b = "<<b<<endl;
    cout << "5 + 3 * 5 = "<< c << endl << endl;
	system("pause");
}