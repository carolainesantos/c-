#include<iostream>
#include<iomanip>
using namespace std;
int i,j;

main()
{
cout<< "\n QUADRADO CHEIO \n\n";
for(i=1;i<=3;i++) //controla a linha 
  { for(j=1;j<=5;j++) //controla a coluna
cout<<"*";
cout<<"\n";
}
}