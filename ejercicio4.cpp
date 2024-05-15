#include <iostream>

using namespace std;

int main(){

    string nombre;
    float corto1=0.00,corto2=0.00,parcial1=0.00,parcial2=0.00,labo=0.00,proyecto=0.00,notafinal=0.00;

    cout<<"Bienveido al prorama que le da su promedio de notas\n";
    cout<<"Favor ingrese su nombre\n";
    cin>>nombre;
    
    cout<<"Favor ingresar las notas\n";
    cout<<"Favor ingresar la nota del corto 1\n";
    cin>>corto1;
    cout<<"Favor ingresar la nota del corto 2\n";
    cin>>corto2;
    cout<<"Favor ingresar la nota del parcial 1\n";
    cin>>parcial1;
    cout<<"Favor ingresar la nota del parcial 2\n";
    cin>>parcial2;
    cout<<"Favor ingresar la nota del laboratorio\n";
    cin>>labo;
    cout<<"Favor ingresar la nota del proyecto\n";
    cin>>proyecto;
     
     if(corto1<0||corto2<0||parcial1<0||parcial2<0||labo<0||proyecto<0||corto1>10||corto2>10||parcial1>10||parcial2>10||labo>10||proyecto>10){
        cout<<"Algun valor no es valido para las notas\n";
     }else{
      notafinal = corto1*0.1 + corto2*0.1 + parcial1*0.15 + parcial2*0.20 + labo*0.20 + proyecto*0.25;
      cout<<nombre<<" su nota final es de: "<<notafinal<<"\n";
     }


    

    


    return 0;
}