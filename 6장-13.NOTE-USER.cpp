// 6��-13.NOTE-USE.CPP
#include <iostream>
#include "6��-11.NOTE.h"
//�ڷᱸ������ Node, List�� ���� class�� ������ �Ͱ� �����Ͽ� �ݵ�� �ǽ��� �ʿ�
using namespace std;

int main() {
    Note n(5, 32);
 	cout<<"Press the button to play the sound"<<endl;
    n.Sound ();//NoteImpl::Sound() �������Ͽ��� �������
    n.Increase (5);
    n.Sound ();
    n.Modulate (50); //NoteImpl::Modulate() �������Ͽ��� ������� 
    cout<<"Press the button to end the program"<<endl;
	system("pause");
    return 1;
}