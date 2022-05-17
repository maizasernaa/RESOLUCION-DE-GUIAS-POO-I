#include <iostream>
using namespace std;
//globales
string categoria;
int cantHoras;
float sueldoBruto,desc,sueldoNeto;
//funciones y procedimientos
void entradaDatos(){
  cout<<"Ingresar la categoria:";
  cin>>categoria;
  cout<<"Ingresar la cantidad de horas:";
  cin>>cantHoras;
}
void calcularSueldoBruto(){
  if(categoria=="C11"||categoria=="c11"){
    sueldoBruto=27.5*cantHoras;
  }
  else if(categoria=="C21"||categoria=="c21"){
    sueldoBruto=25*cantHoras;
  }
  else if(categoria=="C31"||categoria=="c31"){
    sueldoBruto=27.5*cantHoras;
  }
}
void calcularDesc(){
  if(sueldoBruto>3500){
    desc=sueldoBruto*0.15;
  }
  else{
    desc=sueldoBruto*0.11;
  }
}
void calcularSueldoNeto(){
  sueldoNeto=sueldoBruto-desc;
}
void imprimirResult(){
  cout<<"El sueldo bruto es:"<<sueldoBruto<<endl;
  cout<<"El descuento es:"<<desc<<endl;
  cout<<"El sueldo neto es:"<<sueldoNeto;
}

int main() {
  //entrada
  entradaDatos();
  //proceso
  calcularSueldoBruto();
  calcularDesc();
  calcularSueldoNeto();
  //salida
  imprimirResult();
}