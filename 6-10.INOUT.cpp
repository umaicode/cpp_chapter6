// 6-10.INOUT.CPP
// operator overloading
#include <iostream>
using namespace std;
/*
�ǽ� 10
 1)����
  ����� ������ >>�� <<�� overloading �����̴�.
 2)���
  ��. �����Ͽ� ��� ���� ���� ��ü�� ���� � class�� �����ڰ� ȣ��Ǵ��� Ȯ���غ���.
*/
class Complex{
    float real;
    float imag;
public:
    Complex ()
    {}
    Complex (float re, float im){
         real = re;
         imag = im;
    }
    float Re (){
         return real;
    }
    float Im (){
        return imag;
    }
	//Complex & operator + (const Complex &);
    friend istream& operator >> (istream& s, Complex& c);//friend�� �����ϴ� ������?
    friend ostream& operator << (ostream& s, Complex c);//non-member function���� ���� �� �ۿ� ���� ������?
} ;

istream& operator >> (istream& s, Complex& c){//return by reference �� �ڵ��ؾ� �ϴ� ������?
    s >> c.real >> c.imag;
    return s;
}
ostream& operator << (ostream& s, Complex c){
    s << c.real << " + " << c.imag << "i";
    return s; 
}
/*
Complex & Complex::operator + (const Complex &a) {
	//
	return a;
}
*/
class Triplet{
	Complex one;
	Complex two;
	Complex three;
public:
	Triplet ()
	{}
	//Triplet & operator + (const Triplet &);
	friend istream& operator >> (istream& s, Triplet& t);
	friend ostream& operator << (ostream& s, Triplet t);
};
/*
Triplet & Triplet::operator + (const Triplet &) {
	//

}
*/
istream& operator >> (istream& s, Triplet& t){
	cout << "First element(real, imag):" << endl;
	// istream& operator >> (istream& s, Complex& c)�� ȣ���Ѵ�.
	s >> t.one;
	cout << "Second element(real, imag):" << endl;
	s >> t.two;
	cout << "Third element(real, imag):" << endl;
	s >> t.three;
	return s;
}
ostream& operator << (ostream& s, Triplet t){
	// ostream& operator << (ostream& s, Complex c)�� ȣ���Ѵ� 
	s << t.one << ", " << t.two << ", " << t.three;
	return s;
}
void main (){
    Triplet t;
    cout << "Input a ""triplet"" of complex numbers..." << endl;
    cin >> t;
    cout << endl << endl;
    cout << "You have input the ""triplet"": " << t;
	/* ���� �ڵ��� �����ϵ��� �ڵ� ����
	Triplet a, b, c;
	c = a + b;
	*/
	system("pause");
}