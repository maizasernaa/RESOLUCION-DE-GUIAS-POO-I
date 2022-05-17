#include <iostream>
using namespace std;
int main() {
  int num[10];
  int i,sum=0;
  float prom;
  int mayor=0,menor=0,igual=0;
  //entrada
  for(i=0;i<10;i++){
    cout<<"Ingresar numeros("<<i<<"):";
    cin>>num[i];
    sum+=num[i];
  }
  prom=sum/10;
  for(i=0;i<10;i++){
    if(num[i]<prom){
      mayor++;
    }
    else if(num[i]>prom){
      menor++;
    }
    else if(num[i]==prom){
      igual++;
    }
  }
  cout<<"El promedio es:"<<prom<<endl;
  cout<<"Mayor al promedio:"<<mayor<<endl;
  cout<<"Menor al promedio:"<<menor<<endl;
  cout<<"Igual al promedio:"<<igual<<endl;
}