// 6��-6.POINTCLS.h
using namespace std;//default copy constructor ����
//copy constructor�� ���ÿ��� std�� �̻���ϴ� ���� �ʿ� => ���ʿ���/version ������
class PointerClass {
    int number;
    int * pointer;
public:
    // ������
	//*
	PointerClass(const PointerClass& pc);
    //*/
	PointerClass (int a, int b);
    // �Ҹ���
    ~PointerClass ();
    void Print ();
};