// 6��-8.POINTCLS.CPP
#include <iostream>
#include "6��-6.POINTCLS.h"
using namespace std;
//*
//�ּ�ó���ÿ� LNK2019 ���� �߻�: PointerClass() �ܺ� ��ȣ���� Ȯ������ ���߽��ϴ�
PointerClass::PointerClass(const PointerClass& pc){
    // member���� ������
    number = pc.number;
    // ���ο� pointer�� �Ҵ��ϰ� pointer ���� ������
    pointer = new int;
    *pointer = *(pc.pointer);
    cout << "New pointer - address:" << pointer
          << ", value:" << *pointer << endl;
}
//*/
PointerClass::PointerClass (int a, int b){
        number = a;
        pointer = new int;
        *pointer = b;
        cout << "New pointer - address:" << pointer<< ", value:" << *pointer << endl;
}
    // �Ҹ���
PointerClass::~PointerClass (){
        cout << "Deleting pointer - address:" << pointer
              << ", value:" << *pointer << endl;
        delete pointer;
}
void PointerClass::Print (){
        cout << "The pointer value is " << *pointer
              << " and its address is " << pointer << endl;
}