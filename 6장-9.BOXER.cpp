// 6��-9.BOXER.CPP
#include <iostream>
#include <string.h>
using namespace std;
class Boxer{
    char * name;

public:
    // �ϳ��� parameter�� ���� �Ϲ� ������
    Boxer (char * n){
        name = new char [20];
        strcpy (name, n);
        cout<<"*** Usual constructor called ***" <<endl;
    }
    // ���� ������
    Boxer (const Boxer& b){
        name = new char [20];
        strcpy (name, b.name);
        cout << "*** Copy constructor called ***" << endl;
    }
    // �Ҹ���
    ~Boxer (){
        delete name;
    }
    char *GetName (){
        return name;
    }
    void SetName (char * n){
        strcpy (name, n);
    }
};

void main(){
    // class Boxer�� �� ���� ��ü�� �����Ѵ�.
    Boxer ChampionOfTheSixties ("Cassius Clay");
    //Boxer TheBestEver = ChampionOfTheSixties; //copy constructor
    //*
    Boxer TheBestEver("Bobby"); 
    TheBestEver = ChampionOfTheSixties;
    //*/
    // ù ��° boxer �̸��� �����Ѵ�.
    ChampionOfTheSixties.SetName ("Mohammed Ali");
    // �� ��° boxer �̸��� ����Ѵ�.
    cout << "The best boxer is " << TheBestEver.GetName () << endl;
	system("pause");
}