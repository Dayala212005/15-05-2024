#include <iostream>

using namespace std;

int main(){

    float ang1=0.00,ang2=0.00,resultado=0.00;

    cout<<"Bienvenido a el programa que saca el angulo desconocido de un triangulo\n";
    cout<<"Ingrese los dos angulos conocidos del trangulo\n";
    cout<<"Ingrese el primer angulo\n";
    cin>>ang1;
    cout<<"ingrese el segundo angulo\n";
    cin>>ang2;
if((ang1<0||ang2<0)||(ang1>180||ang2>180)){
    cout<<"Uno de los valores no esta permitido\n";
}else{
    resultado=180-ang1-ang2;
}
    cout<<"El tercer angulo del triangulo que posee un angulo de "<<ang1<<" y un angulo de "<<ang2<<" es de "<<resultado<<"\n";

    return 0;
}