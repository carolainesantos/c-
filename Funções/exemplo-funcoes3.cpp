#include<iostream>
using namespace std;

int somar3(int num1, int num2, int num3, int num4); 

int resp,num1, num2, num3,num4; //variaveis globais

main()
{     
	system("chcp 65001");
	cout<<"\n Informe um número: \n";
	cin>>num1;
	cout<<"\n Informe outro número: \n";
	cin>>num2;
	cout<<"\n Informe outro número: \n";
	cin>>num3;
	cout<<"\n Informe outro número: \n";
	cin>>num4;
	cout<<"\n A soma dos números é: "<<somar3(num1, num2, num3, num4);
	cout<<"\n\n\n\n\n";
}

//Funçao somar3
int somar3(int num1, int num2, int num3, int num4)
{
	return(num1+num2+num3+num4);
}