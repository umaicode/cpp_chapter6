#include <iostream>
using namespace std;

class Student {
	int sid;
	char* sname;
//	char sname[10];
public:
	//int operator>(Student&);
	Student() {

	}
	Student(int sid, char sname[]) : sid(sid) {
		// �Լ��� �ִ� �Ķ���ʹ� �����Ϳ��� this �ȵȴ�. ( char sname[] = char *sname )
		// // char *name �� const char *name�� ����?
		//this->sname = sname;
		sname = new char[sizeof(sname)+1];	// +1�� ���� : null character ������
		strcpy(this->sname, sname);
	}
	friend ostream& operator<<(ostream&, Student&);
};

//int Student::operator>(Student& other) {
//	if (sid > other.sid) return 1;
//	else return -1;
//}

ostream& operator<<(ostream& os, Student& s) {
	os << "sid = " << s.sid << ", sname  = " << s.sname << endl;
	return os;
}
int main() {
	Student s1, s2(10, "hong");
	cout << "s1 : " << s1 << "s2 : " << s2;
	s1 = s2;
	cout <<"s2 : " << s1;
//	if (s1 == s2) {}

//	if (s1 > s2) {
//		cout << "s1 > s2";
//	}
	system("pause");
	return 1;
}