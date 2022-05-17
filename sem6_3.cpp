#include <iostream>

using namespace std;
int main() {
  int i,num[100];
for(i=1;i<=100;i++){
  num[i]=i;
}
  for(i=100;i>=1;i--){
    cout<<num[i]<<endl;
  }
}