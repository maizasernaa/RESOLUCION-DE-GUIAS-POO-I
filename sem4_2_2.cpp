#include <iostream>
using namespace std;
float sueldoBruto(string cate,float cant){
  if(cate=="C11"||cate=="c11"){
    return 27.5*cant;
  }
  else if(cate=="C21"||cate=="c21"){
    return 25*cant;
  }
  else if(cate=="C31"||cate=="c31"){
    return 23.5*cant;
  }
}
float importeDesc(float s_bruto,int cant){
  if(s_bruto>3500){
    return 0.15*s_bruto;
  }
  else{
    return 0.10*s_bruto;
  }
}
float sueldoNeto(float s_bruto,float desc){
  return s_bruto-desc;
}
void imprimirResult(float s_bruto,float desc, float s_neto){
  cout<<"El sueldo bruto es:"<<s_bruto<<endl;
  cout<<"El descuento es:"<<desc<<endl;
  cout<<"El sueldo neto es:"<<s_neto;
}

int main() {
string cate,rpta;
  int cant;
  float s_bruto,desc,s_neto;
  bool bandera=true;
  //entrada
  do{
    cout<<"Ingrese la categoria:";
    cin>>cate;
    cout<<"Ingrese la cantidad de horas:";
    cin>>cant;
    //procesos
    s_bruto=sueldoBruto(cate,cant);
    desc=importeDesc(s_bruto,cant);
    s_neto=sueldoNeto(s_bruto,desc);
    //salida
    imprimirResult(s_bruto,desc,s_neto);
    cout<<"\n";
    cout<<"Deseas comprar otro producto (SI):";
    cin>>rpta;
    if(rpta=="si"||rpta=="SI"){
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