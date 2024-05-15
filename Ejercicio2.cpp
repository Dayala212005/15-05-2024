#include <iostream>

using namespace std;

int main(){
  

  int edad=0;

  cout<<"Bienveido al programa que te dice si eres mayor de edad o no\n";
  cout<<"Favor ingresar su edad\n";

  cin>>edad;

  if(edad<=0){
    cout<<"El valor de edad no es valido\n";
  }else if(edad<18){
    cout<<"Usted es menor de edad\n";
  }else{
    cout<<"Usted es mayor de edad\n";
  }





    return 0;
}