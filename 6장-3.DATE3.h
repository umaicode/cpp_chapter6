// 6��-3.DATE3.H
using namespace std;

class Date{
    // private ������
    int month;
    int day;
    int year;

public:
    // day, month �� year�� date�� �����Ѵ�. 
	//*
    Date (int m, int d, int y);
    // default date�� �����Ѵ�. 
    Date ();
    // ��¥ d ���� nn�� ���� �� ��¥�� �����Ѵ�. 
    Date (class Date d, int nn);
    // �� ���� ��¥�� return�Ѵ�.
    int Day ();
    // �� ���� ���� return�Ѵ�.
    int Month ();
    // �� �ظ� return�Ѵ�.
    int  Year ();
    // �����̸� 1��, ������ �ƴϸ� 0�� return�Ѵ�.
    int LeapYear ();
    // �ش� ���� ��¥���� return�Ѵ�.
    int DaysInMonth ();
    // �Ϸ縦 ������Ų��. 
    void IncreaseDate ();
    // ���� ��¥�� ����Ѵ�. 
    void PrintDate ();
    // ������ ����Ѵ�. 
    void PrintLeap ();
    int operator > (Date d);
	// prefix ���� ������(prefix increment operator)
	//*
	Date& operator++() {
		// member �Լ� IncreaseDate�� ȣ���Ѵ�.
		IncreaseDate();
		return *this;
	}
	// postfix ���� ������( postfix increment operator)
	Date&  operator++(int) {
		Date theOldOne = *this;
		IncreaseDate();
		return theOldOne;;
	}
    //*/
};