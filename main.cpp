#include <iostream>
using namespace std;

int main()
{
  int num, cont = 0;

  //Entrada
  cout<<"Informe valor da Tabuada: ";
  cin>>num;
  cout<<endl;

  //Processamento
  while(cont <= 10){
    cout<<num<<" x "<<cont<<" = "<<num*cont;
    cout<<endl;
    cont++;
  }
 return 0;
}