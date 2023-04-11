// 6-6.CALL.CPP
#include <iostream>
using namespace std;
/*
�ǽ� 6
1)����
 Number class�� ���� �� �ʱ�ȭ�� ���� ���� ������� �� �� �ִ�. ���� �� �ʱ�ȭ ����� ���̿� ���� � �Լ��� ȣ��Ǵ����� ����� ���� �˾ƺ���.
2)���
 ��. �ּ� 1�� ���� Ȥ�� �״�� �ΰ� �����Ͽ� ��� ���� Ȯ���غ��� ���̸� Ȯ���غ���.
*/
class Number{
public:
    //default ������
    Number();
    //���� ������
    Number(const Number&);
    //������ overloading
    Number(int );
    operator int() {
        cout << " operator int() :: *n =  " << *n << endl;
        return *n;
    }
    //ġȯ ������
    Number & operator = (const Number &); 
    //�Ҹ���
    ~Number(); 
    int *n; //������ ���� �Ϻη� public���� ����
};
Number::Number(){
    cout<<"[default ������ ȣ��]"<<endl;
    n=0;
}
Number::~Number(){
    //cout<<"[�Ҹ��� ȣ��]"<<endl;
}
Number::Number(const Number& num){
    cout<<"[���� ������ ȣ��]"<<endl;
    n = new int(sizeof(n)+1);
    n = num.n;
}
Number::Number(int _num){
    cout<<"[��ȯ ������ ȣ��]"<<endl;
    n = new int(sizeof(n)+1);
    *n = _num;
}
//�ּ� 1 - class ���ǿ��� ġȯ ������ ���� ���� �ּ� ���� �ʿ�
//*
Number & Number:: operator = (const Number & num){
    //code for assignment operator
    cout<<"[�������� assign �Լ� ȣ��]"<<endl;
    n = new int(sizeof(num)+1);
    *n = *num.n;
    return *this;
}
//*/
void main(){
    cout<<"Number n1(1)"<<endl;
    Number n1(1);
    cout<<"n1�ǰ���: "<<*n1.n<<endl<<endl;
    cout<<"Number n2(2)"<<endl;
    Number n2(2);
    cout<<"n2�ǰ���: "<<*n2.n<<endl<<endl;
    cout<<"Number n3(n1)"<<endl;
    Number n3(n1);
    cout<<"n3�ǰ���: "<<*n3.n<<endl<<endl;
    cout<<"Number n4 = 3"<<endl;
    Number n4 = 3;
    cout<<"n4�ǰ���: "<<*n4.n<<endl<<endl;
    cout<<"*n4.n = *n2.n"<<endl;
    *n4.n = *n2.n;
    cout<<"n4�ǰ���: "<<*n4.n<<endl<<endl;
    cout<<"*n4.n = 4"<<endl;
    *n4.n = 4;
    cout<<"n4�ǰ���: "<<*n4.n<<endl<<endl;
    cout<<"Number n5 = n3"<<endl;
    Number n5 = n3;
    cout<<"n5�ǰ���: "<<*n5.n<<endl<<endl;
    cout<<"Number n6(3)"<<endl;
    Number n6(3);
    cout<<"n6�ǰ���: "<<*n6.n<<endl<<endl;
    cout<<"n6 = n3"<<endl;
    n6 = n3;
    cout<<"n6�ǰ���: "<<*n6.n<<endl<<endl;
    cout<<"n6 = 4"<<endl;
    //compiler�� ��ü������ 4�� ������ Number��ü�� ���Ƿ� �����Ͽ� ġȯ�� �����ϵ��� ����
    n6 = 4; 
    cout<<"n6�ǰ���: "<<*n6.n<<endl<<endl;
    int n = 7;
    n = abs(n6);
    n4 = 3.14 + n5;
	system("pause");
}