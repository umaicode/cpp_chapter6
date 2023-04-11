//6-9. STRINGCLASS.CPP
//string.h�� �����Ϸ��� �����ϴ� �ڵ���
#include <iostream>
#include <string>
using namespace std;
/*
�ǽ� 9
1)����
 Character pointer�� return�� ���� ������ overloading���� member ������ �����Ͽ��� ���� String class���� ����(=), ��(==)�� ���� ������ overloading ��뿡 ���� ����� ����� ���ؼ� �˾ƺ����� ����.

2)���
 ��. String Ÿ�� class�� ��� �����Ͽ�����, ��� ����ϴ� ���� ����� ���ؼ� �˾ƺ����� ����.
 ��. �ּ� 1�� �����Ͽ� = ������ overloading�� �̿����� �� 6-8.CHARACTERSTRING���� string1 = string2���� ���̰� �������� Ȯ���غ���.
*/
class String{
public:
    //default constructor
    String ( );
    //copy constructor
    String (String&);
    // create from C string 
    String (char *); 
    //destructor
    ~ String ( );
    //conversion to char *
    operator const char * () 
    //inline body of method
    {return string;} 
    //assignment
    String & operator = (const String *); 
    //equality
    int operator == (const String *) const; 
    //represent value as C string
    char * string; 
};

String & String:: operator = (const String * str){
    //code for assignment operator
    string = new char[strlen(str->string)+1];
    strcpy_s(string, strlen(str->string)+1,str->string);
	cout<<"operator =():: "<< string<<endl;
    return *this;
}

int String:: operator == (const String * str) const{
    //code for equality operator
    return strcmp(string, str->string);
}
String::String(){
	string = new char[10];}
String::String(String& str){
	string = new char[strlen(str.string)+1];
    strcpy_s(string,strlen(str.string)+1, str.string);
}
String::String(char * _string){
    string = new char[strlen(_string)+1];
    strcpy_s(string, strlen(_string)+1, _string);
}
String::~String(){
}

void main(){
    cout<<"string class"<<endl<<endl;
    //�����ڸ� ���� class member������ �����ϰ� Ȯ��
    //use String::String (const char*)
    String *s1 = new String("Good Night!"); 
    cout << "s1�� string�� " << s1->string << " �̴�."<<endl<<endl;
    //Character pointer return operator overloading�� �̿��Ͽ� member������ string copy �ϰ� copy ���Ȯ��
    char str[15];
    //uses String::operator char *()
    strcpy_s(str, strlen(s1->operator const char *())+1, s1 -> operator const char *()); 
    cout << "str������ copy �� ���ڿ��� " << str << " �̴�."<< endl<<endl;
	//strcpy(str, s1);//String * ������ parameter�� const char*�� ȣȯ���� �ʴ´�
    // strcpy(str,s1)������ �ʴ� ������ char * strcpy(char *dest, const char *str)
    // �����̱� ������ conversion constructor�� const�� ������� ������ �ʴ´�.
    strcpy(str,s1->operator const char *()); 
    //�ּ� 1
    
    //Class =operator overloading�� �̿��Ͽ� String class ������ �ϰ� ���Ȯ��
    String *s2 = new String();
    // = ������ overloading�� �̿��Ͽ� s2�� ����Ű�� ���� s1�� ������ ġȯ�Ѵ�.
    s2 -> operator = (s1);    
    cout << "s2�� string�� " << s2->string << " �̴�."<<endl<<endl;
    //Class �� operator overloading�� �̿��Ͽ� �ΰ��� class�� ��ġ ���θ� Ȯ��
    cout << "s1�� s2�� ==�����ڸ� �̿��Ͽ� ��" << endl;
    cout << "s1->operator ==(s2) : ";
    //uses String::operator == (const String *) const
    cout << s1->operator ==(s2) << endl; 
    cout << "((*s1)==(*s2)) : ";
    //s1->operator==(s2)�� ���� ����
    cout << ((*s1)==(*s2)) <<endl<< endl; 
    //0�̸� equal, -1�̸� nonequal
	String s3;
	s3 = s2;
    system("pause");
}