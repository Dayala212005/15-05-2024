
#include <iostream>

using namespace std;

int main(){

 float angulo=0.00;

 cout<<"Bienvenido al programa para ver el tipo del angulo\n";
 cout<<"Favor ingresar un angulo en grados\n";
 cin>>angulo;

 if(angulo<0||angulo>180){
 cout<<"El angulo ingresado no es valido\n";
 }else if(angulo<90){
    cout<<"El angulo ingresado es agudo\n";
 }else if(angulo==90){
    cout<<"El angulo es recto\n";
 }else if(angulo>90){
    cout<<"El angulo es obtuso\n";
 }



    return 0;
}