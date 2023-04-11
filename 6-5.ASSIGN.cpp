// 6-5.ASSIGN.CPP
//operator =() �Լ� ȣ��� body�� �ڵ��� �� �ִ� �ɷ��� �ǽ�
#include <iostream>
using namespace std;

class FooWithPointer{
public:
    //data and functions
    int *pNumber; //main()�� ������ �ǵ��� �ǵ��� public ����, ���߽ÿ��� private���� ����Ǿ�� ��
    //default constructor
    FooWithPointer(){
        pNumber = new int;
        *pNumber=0;
    }
    //constructor with one parameter
    FooWithPointer(int i){
        pNumber = new int;
        *pNumber=i;
    }
    //destructor
    ~FooWithPointer(){
        cout<<"�Ҹ�"<<endl;
        delete pNumber;
    }
    //�ּ� 1 - �ּ��� �������ÿ��� compiler�� �����ϴ� assignment code�� ���� - �ּҸ� �����
    //overloaded assignment operator
    /*
    //compile error �߻�
    FooWithPointer operator = (const FooWithPointer& source){
        //copy the pointed value, not the pointer
        cout<<"����ڿ� ���� overloading�� ġȯ ������ ȣ��"<<endl;
        *pNumber = *(source.pNumber);
        //the other members should be copied, too
        return this;// ������ ���� ���� �ľ� �ʿ�
    }
    */

    //*
    // �߸��� ������ - runtime ����
    FooWithPointer operator = (const FooWithPointer& source){
        //copy the pointed value, not the pointer
        cout<<"����ڿ� ���� overloading�� ġȯ ������ ȣ��"<<endl;
        *pNumber=*(source.pNumber);
        //the other members should be copied, too
        return *this;
    }
    //*/

    /*
    //�ùٸ� source code
    FooWithPointer& operator = (const FooWithPointer& source){
        //copy the pointed value, not the pointer
        cout<<"����ڿ� ���� overloading�� ġȯ ������ ȣ��"<<endl;
        *pNumber=*(source.pNumber);
        //the other members should be copied, too
       // this�� �ڽ��� ���Ե� �Լ��� ȣ���� ��ü�� �ּҸ� ����Ų��.
        return *this; 
    }
    */

};
void main(){
    cout<<"assign ȣ�� ��"<<endl;
    FooWithPointer fp1(1);
    cout << "\tfp1�� pNumber��" << *fp1.pNumber << "�̴� "<<endl;
    FooWithPointer fp2(2);
    cout << "\tfp2�� pNumber��" << *fp2.pNumber << "�̴� "<<endl;
    FooWithPointer fp3(3);
    cout << "\tfp3�� pNumber��" << *fp3.pNumber << "�̴�" << endl << endl;

    fp1 = fp2;
    cout<<"assign(a=b�� ���) ȣ�� ��"<<endl;
    cout << "\tfp1�� pNumber��" << *fp1.pNumber << "�̴� "<<endl;
    cout << "\tfp2�� pNumber��" << *fp2.pNumber << "�̴� "<< endl << endl;

    cout<<"fp2�� pNumber�� ���� ���� ��"<<endl;
    *fp2.pNumber = 5;
    cout << "\tfp1�� pNumber��" << *fp1.pNumber << "�̴� "<<endl;
    cout << "\tfp2�� pNumber��" << *fp2.pNumber << "�̴� "<<endl<<endl;

    fp1 = fp2 = fp3;
    cout<<"assign(a=b=c�� ���) ȣ�� ��"<<endl;
    cout << "\tfp1�� pNumber��" << *fp1.pNumber << "�̴� "<<endl;
    cout << "\tfp2�� pNumber��" << *fp2.pNumber << "�̴� "<<endl;
    cout << "\tfp3�� pNumber��" << *fp3.pNumber << "�̴� " << endl << endl;
	system("pause");
}