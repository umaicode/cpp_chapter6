//6-8. CHARACTERSTRING.CPP
//6-9 String Class�� �����ϱ� ���Ͽ� ���� �ڵ���
#include <iostream>
using namespace std;
#define STRING "Show anything."
#define N 4
#define LEN 10
/*
�ǽ� 8
1)����
 C++���� ���ڿ� ����� ���� ������ �����Ǵ� type�� ���� ������ char type���� ���ڿ��� �ٷ�� ���� ����� ���ؼ� ����� Ȯ���ϵ��� ����.
2)���
 ��. ����� ������ ����Ű�� ���� ������� �����غ���.
*/
int main(){
	int i;
    char a[] = STRING;//a�� local variable�μ� stack ������ ����
	char *b = STRING; //b�� local variable�̳� STRING�� data ������ data segment�μ� b++�ÿ� �ڵ� ������ ħ���� �� �־� ���� �ʿ�
	char *c;

	char *d[N] = {"trout", "salmon", "saury", "eel"};
	char e[N][LEN] = {"carp", "mackerel", "cod", "squid"};


	printf("a = %p\n", a);
	printf("b = %p\n", b);
	printf("address of STRING = %p\n", STRING);

	cout<<" a[] = ";
	for (i = 0; i < 14; i++)
		putchar(*(a+i));
	putchar('\n');
	cout<<"*b = ";
	for (i = 0; i < 14; i++)
		putchar(*(b+i));
	putchar('\n');
	c = b;
	cout << "*(b++) = ";
	while (*(b) != '\0')
		putchar(*(b++));
	putchar('\n');
	cout<<"After executing *(b++):: ";
	printf("b = %p\n", b);
	printf("*b = %s\n", b);
	
	printf("c = %p\n", c);
	for (i =0; i < N; i++) {
		printf("d[%d] = %s\n", i, d[i]);
		printf("e[%d] = %s\n", i, e[i]);
	}
	system("pause");
}