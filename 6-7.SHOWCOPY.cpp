// 6.7.SHOWCOPY.CPP
#include <iostream>
using namespace std;
/*
�ǽ� 7
1)����
 ���� �����ڿ� ġȯ �����ڰ� ��� ���Ǵ����� Ȯ���غ���.
2)���
 ��. �ּ� 1�� ���� Ȥ�� �״�� �ΰ� �����Ͽ� ��� ���� ���̸� Ȯ���غ���.
*/
class Test{
	// ��ü�� ��
	int value;
	// ��ü�� ��ȣ
	int obj_number;
	// ������ ��ü�� ��ȣ
	static int last_obj;

public:
	// �ϳ��� parameter�� ���� ǥ�� ������
	Test(int n){
		value = n;
		obj_number = ++last_obj;
		cout << "Standard constructor(object no." << obj_number << ") : value = " << value << endl;
	}
	// ���� ������
	Test(const Test& t){
		// ���� �����ڸ� �����ϸ� default copy�� ������� �����Ƿ� ���� ������ �ʿ䰡 �ִ�.
		value = t.value;
		// ���� ���� ���� ������ �װ��� �� �ٸ� ��ü�̴�
		obj_number = ++last_obj;
		cout << "Copy constructor(object no." << obj_number  << ") : value = " << value << endl;
	}
	// �Ҹ���
	~Test( ){
		cout << "Destructor (object no." << obj_number << ")" << endl;
	}
	// ġȯ ������
	Test& operator=(const Test& t){
		// ġȯ �����ڸ� �����ϸ� default copy�� �������� �ʱ� ������ ���� ������ �ʿ䰡 �ִ�.
		value = t.value;
		cout << "Assignment operator (from object no." << t.obj_number << " to object no." << obj_number << ") : value = "<< value << endl;
		return (*this);
	}
	// ���� ������
	int operator++( ){
		return ++value;
	}
};
// static ������ member�� �ܺ� ����
int Test::last_obj = 0;
// ������ ���� ����ϴ� global �Լ�
// parameter�� return ���� ���翡 ���� ���޵ȴ�.
/*
Test PrintNext(Test t){ //���� �����ڰ� ȣ��Ǵ� ���� Ȯ��
cout<<"printNext():: ";
// ++�Լ� ȣ�� 
cout << "New increased value = " << ++t << endl; 
//cout << "New increased value = " << ++(++t) << endl;
return t;
}
*/
//�ּ� 1

//������ ���� ������ �ϰ� �Ǹ� �ӽ� ��ü�� �������� �ʴ´�.
//*
Test& PrintNext(Test& t){ 
	cout << "New increased value = " << ++t << endl;
	return t;
}
//*/
void main( ){
	cout << "1. New object" << endl;
	{
		Test t1(25);
		cout << endl;
		cout << "2. New object��copied" << endl;
		Test t2 = t1;
		cout << endl;
		cout << "3. New object��increased" << endl;
		Test t3 = PrintNext(t1);
		cout << endl;
		cout << "4. Assignment of increased object" << endl;
		t2 = PrintNext(t3);
	}
	cout << endl;
	system("pause");
}