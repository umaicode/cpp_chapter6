// 6��-2.CONSTFN.CPP
#include <iostream>

using namespace std;

// ��� �Լ��� ��
class A {
    int n;
public:
    A (int m) : n (m) { } //������
    int Read () const {//��� �Լ� // �Լ� ��ü�� ������ �ȵ�
		cout<<"Read()::n = "<<n<<endl;
		return n;
    }

    void Change (int m) {
		cout <<"Change()::n= "<<n<<endl;
        n = m;
    }

//    void Change(const int m) const {
//        cout << "Change()::n= " << n << endl;
//        n = m;
//    }
};

void main (){
	A a1 (5);
    // argument ��4��
    a1.Change (4);
    a1.Read ();

    const A a2(8);
    
	// ��� �޽��� �߻�
    //a2.Change (6);
    a2.Read ();
	system("Pause");
}