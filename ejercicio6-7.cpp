#include <iostream>
#include <time.h>
using namespace std;

class Empleado{
    private:
        string rpta;
        int codigo;
        string nombre;
        double sueldo;
        int numero;
    public:
        Empleado();
        int getcod();
        string getnom();
        double getsueldo();
        int getnum();
        
        void tiposueldo();

        void info();
        void mostrar();
        void aumentar();
    
};

int Empleado::getcod(){
    return codigo;
}
string Empleado::getnom(){
    return nombre;
}
double Empleado::getsueldo(){
    return sueldo;
}
int Empleado::getnum(){
    return numero;
}



void Empleado::tiposueldo(){
    if(getsueldo()>3500){
        cout << "Su sueldo es mayor a 3500"<<endl;
    }else if(getsueldo()<3500){
        cout << "Su sueldo es menor a 3500"<<endl;
    }else{
        cout << "Su sueldo es igual a 3500"<<endl;
    }
}


void Empleado::aumentar(){
    srand(time(NULL));
    int num2;
    cout << "Aumentar y cambiar numero? (SI/NO): ";
    cin >> rpta;

    if (rpta=="SI"||rpta=="si"){
      num2=1+rand()%(1000000000);
      sueldo=sueldo+2000;
      mostrar();
      cout << "Operacion Terminada";
    }else{
      cout << "Operacion Terminada";
    }
}
Empleado::Empleado(){
}

void Empleado::info(){
    cout << "Ingrese codigo: ";
    cin >> codigo;
    cout << "Ingrese nombre: ";
    cin >> nombre;
    cout << "Ingrese sueldo: ";
    cin >> sueldo;
    cout << "Ingrese numero: ";
    cin >> numero;
}

void Empleado::mostrar(){
  cout << "El codigo es: " << getcod()<<endl;
  cout << "El nombre es: " << getnom()<<endl;
  cout << "El sueldo es: " << getsueldo()<<endl;
  cout << "El numero es: " << getnum()<<endl;
  tiposueldo();
}

int main(){
  Empleado empleado;
  empleado.info();
  empleado.mostrar();
  empleado.aumentar();
}