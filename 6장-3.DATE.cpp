#include "6��-3.DATE3.h"
#include <iostream>
using namespace std;
void main() {
	Date d;
	Date e(4, 30, 2020);
	/*
	if (d > e)cout << "d > e" << endl;
	else cout << "d <= e" << endl;
	*/
	d.PrintDate();
	// prefix ������
	++d;
	d.PrintDate();
	// postfix ������
	d++;
	d.PrintDate();
	// prefix version�� ���� �Լ��� ǥ��
	d.operator++();
	d.PrintDate();
	// postfix version�� ���� �Լ��� ǥ��
	d.operator++(0);
	d.PrintDate();
	system("pause");
}