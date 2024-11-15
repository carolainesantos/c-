#include<iostream>
using namespace std;

//Protótipo da Função
int somar3(int num1, int num2); 

int resp,num1, num2; //variaveis globais

main()
{     
	system("chcp 65001");
	cout<<"\n Informe um número: \n";
	cin>>num1;
	cout<<"\n Informe outro número: \n";
	cin>>num2;
	resp= somar3(num1,num2);
	cout<<"\n A soma dos números é: "<<resp;
	cout<<"\n\n\n\n\n";
}

//Funçao somar
int somar3(int num1, int num2)
{
	int resp;
	resp= num1 + num2;
	return (resp);
}