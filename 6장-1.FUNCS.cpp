// 6��-1.FUNCS.CPP
// ���� ����(���ڸ� 3���ϴ� ����)�� �����ϴ� �ٸ� ������ �Լ� ��
#include <iostream>
using namespace std;
// non-member("ordinary") �Լ� ����
int Triple1 (int number){
    return number * 3;
}

class Number {
    int n;
public:
    //������
    Number (int num) :
    n (num)
    { }
    // member �Լ� ����
    void Triple2 (){
        n *= 3;
    }
    int Value (){
        return n;
    }
    // class member �Լ� ����
    static int Triple3 (int num){
        return num * 3;
    }
} ;

void main (){
    int intNum = 5;
    Number objNum (5);
    int triple;
    // ���� �Լ� ȣ���� ���� ����� ��´�.
    cout << "Show the result of three corresponding functions:" << endl;
    // non-member �Լ� ȣ��
    triple = Triple1 (intNum);
    cout <<"non-member �Լ� ȣ��: Triple1()::"<< triple << endl;
    // class(static) member �Լ� ȣ��
    triple = Number :: Triple3 (intNum);
    cout <<"static member �Լ� ȣ��: Number::Triple3()::"<< triple << endl;
    // member �Լ� ȣ��� �� �˻�
    objNum.Triple2 ();
    objNum.Triple3(intNum);
    triple = objNum.Value ();
    cout <<"member �Լ� ȣ��: objNum.Triple2():"<< triple << endl;
	system("pause");
}