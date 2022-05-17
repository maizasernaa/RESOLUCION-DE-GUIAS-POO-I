#include <iostream>
using namespace std;

float importeCompra(string producto, int cant){
  if(producto=="P1"||producto=="p1"){
    return 15*cant;
  }
  else if(producto=="P2"||producto=="p2"){
    return 17.5*cant;
  }
  else if(producto=="P3"||producto=="p3"){
    return 20*cant;
  }
}
float importeDesc(int cant,float imp_compra){
  if(cant>10){
    return 0.15*imp_compra;
  }
  else{
    return 0.07*imp_compra;
  }
}
float importePagar(float imp_desc,float imp_compra){
  return imp_compra-imp_desc;
}
void imprimirResultados(float imp_compra, float imp_desc,float imp_pagar){
  cout<<"El importe de compra es:"<<imp_compra<<endl;
  cout<<"El descuento es:"<<imp_desc<<endl;
  cout<<"El importe a pagar es:"<<imp_pagar;
}





int main() {
  string producto,rpta;
  int cant;
  float imp_compra,imp_desc,imp_pagar;
bool bandera=true;

  do{
    //entrada
    cout<<"Ingresar el nombre del producto:";
    cin>>producto;
    cout<<"Ingresar la cantidad de unidades:";
    cin>>cant;
    //procesos
    imp_compra=importeCompra(producto, cant);
    imp_desc=importeDesc(cant,imp_compra);
    imp_pagar=importePagar(imp_desc,imp_compra);
    //salida
    imprimirResultados(imp_compra,imp_desc,imp_pagar);
    cout<<"\n";
    cout<<"Deseas comprar otro producto (SI):";
    cin>>rpta;
    if (rpta=="si"||rpta=="SI"){
      bandera= true;
    }
    else{
      break;
    }
  } while(bandera==true);
  cout<<"----------------\n";
  cout<<"Gracias por confiar en nosotros"<<endl;
  cout<<"----------------\n";

  
}