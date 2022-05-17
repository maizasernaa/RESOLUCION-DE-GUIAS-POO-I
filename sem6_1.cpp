#include <iostream>
using namespace std;

int main() {
int num[30];
  int suma=0, par=2;
  float prom;
  for(int i=0;i<30;i++){
    num[i]=par;
    suma+=num[i];
    par+=2;
  }
  prom=suma/30;
  for(int i=0;i<30;i++){
    cout<<num[i]<<endl;
  }
  cout<<"Suma:"<<suma<<endl;
  cout<<"promedio:"<<prom<<endl;
}