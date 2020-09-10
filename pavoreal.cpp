#include<iostream>
using namespace std;



int main()
{
    int pavos_reales[6];
    char nombre[20];
    char Genero;
    int years,pesoenlb;
    
    for(int i=6;i>0;i++)
{
    cout<<"ingrese nombre del pavo"<<endl;
    cin>>nombre;
    cout<<"ingrese  sexo del pavo"<<endl<<"M-Masculino"<<endl<<"H-Hembra"<<endl;
   cin>>Genero;
    cout<<"ingrese edad"<<endl;
    cin>>years;
    cout<<"ingrese peso en libras"<<endl;
    cin>>pesoenlb;
    if(pesoenlb>0){
    cout<<"el peso es"<<pesoenlb<<endl;
    
    }else {
        cout<<"el peso no puede se cero"<<endl;}
    if(years>=2){
        cout<<"los pavos estan en edad reproductiva"<<endl;
        
        
    }else if (years>=30){
        
    cout<<"   esta es la edad media de vida de un pavo, por favor ingrese otra edad"<<endl;
        
    }
    else{
        cout<<"los pavos no estan en edad reproductiva"<<endl;
    }
    }
    
  
  return 0;
}