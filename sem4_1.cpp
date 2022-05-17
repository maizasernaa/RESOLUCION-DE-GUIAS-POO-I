#include <iostream>
using namespace std;
//globales
string producto;
int cant;
float imp_compra,imp_desc,imp_pagar;
//funciones y procedimientos
void entradaDatos(){
  cout<<"Ingresar codigo de producto:";
  cin>> producto;
  cout<<"Ingresar la cantidad de unidades:";
  cin>>cant;
}
void calcularImpCompra(){
  if(producto=="p1"||producto=="P1"){
    imp_compra=15.0*cant;
  }
  else if(producto=="p2"||producto=="P2"){
    imp_compra=17.50*cant;
  }
else if(producto=="p3"||producto=="P3"){
  imp_compra=20.0*cant;
}
}
void importeDesc(){
  if(cant>10){
    imp_desc=0.15*imp_compra;
  }
  else{
    imp_desc=0.07*imp_compra;
  }
}
void calcularImpPagar(){
  imp_pagar=imp_compra-imp_desc;
}
void imprimirResultados(){
  cout<<"El importe de compra es:"<<imp_compra<<endl;
  cout<<"El descuento es:"<<imp_desc<<endl;
  cout<<"El importe a pagar es:"<<imp_pagar;
}


int main() {
  //entrada
  entradaDatos();
  //proceso
  calcularImpCompra();
  importeDesc();
  calcularImpPagar();
  //salida
  imprimirResultados();
}