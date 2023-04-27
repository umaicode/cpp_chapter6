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
		// 함수에 있는 파라미터는 포인터여서 this 안된다. ( char sname[] = char *sname )
		// // char *name 과 const char *name의 차이?
		//this->sname = sname;
		sname = new char[sizeof(sname)+1];	// +1의 이유 : null character 때문에
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