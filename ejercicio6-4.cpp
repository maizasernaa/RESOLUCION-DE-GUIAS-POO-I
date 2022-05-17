#include <iostream>
using namespace std;

class Edificio{
    private:
        string rpta;
        int codigo;
        int cantidad;
        double precio;
        string direccion;
    public:
        Edificio();
        int getcod();
        int getcan();
        double getpre();
        string getdir();
        
        float precioedificio();

        void info();
        void mostrar();
        void aumentar();
    
};

int Edificio::getcod(){
    return codigo;
}
int Edificio::getcan(){
    return cantidad;
}
double Edificio::getpre(){
    return precio;
}
string Edificio::getdir(){
    return direccion;
}

float Edificio::precioedificio(){
    return getcan()*getpre();
}

void Edificio::aumentar(){
    cout << "Aumentar precio del departamento en 20%? (SI/NO): ";
    cin >> rpta;

    if (rpta=="SI"||rpta=="si"){
      precio=precio+(precio*0.20);
      mostrar();
      cout << "Operacion Terminada";
    }else{
      cout << "Operacion Terminada";
    }
}
Edificio::Edificio(){
}

void Edificio::info(){
    cout << "Ingrese codigo: ";
    cin >> codigo;
    cout << "Ingrese cantidad de departamentos: ";
    cin >> cantidad;
    cout << "Ingrese precio de un departamento en dolares: ";
    cin >> precio;
    cout << "Ingrese direccion del edificio: ";
    cin >> direccion;
}

void Edificio::mostrar(){
  cout << "---------------------------------\n";
  cout << "El codigo es: " << getcod()<<endl;
  cout << "La cantidad es: " << getcan()<<endl;
  cout << "El precio de un departamento en dolares es es: " << getpre()<<endl;
  cout << "La direccion del edificio es: " << getdir()<<endl;
  cout << "El precio del edificio es: " << precioedificio()<<endl;
  cout << "---------------------------------\n";

}

int main(){
  Edificio edificio;
  edificio.info();
  edificio.mostrar();
  edificio.aumentar();
}