#include <iostream>
using namespace std;

class Persona{
    private:
        string rpta;
        string nombre;
        string apellido;
        int edad;
        double talla;
        double peso;
    public:
        Persona();
        string getnom();
        string getape();
        int getedad();
        double gettalla();
        double getpeso();
        
        void tipoedad();

        void info();
        void mostrar();
        void modificar();
    
};

string Persona::getnom(){
    return nombre;
}
string Persona::getape(){
    return apellido;
}
int Persona::getedad(){
    return edad;
}
double Persona::gettalla(){
    return talla;
}
double Persona::getpeso(){
    return peso;
}



void Persona::tipoedad(){
    if(getedad()>17){
        cout << "Es mayor de edad"<<endl;
    }else{
        cout << "Es menor de edad"<<endl;
    }
}


void Persona::modificar(){
    cout << "Modificar edad? (SI/NO): ";
    cin >> rpta;

    if (rpta=="SI"||rpta=="si"){
      cout << "Escriba nueva edad: ";
      cin >> edad;
      mostrar();
      cout << "Operacion Terminada";
    }else{
      cout << "Operacion Terminada";
    }
}
Persona::Persona(){
}

void Persona::info(){
    cout << "Ingrese nombre: ";
    cin >> nombre;
    cout << "Ingrese apellido: ";
    cin >> apellido;
    cout << "Ingrese edad: ";
    cin >> edad;
    cout << "Ingrese talla: ";
    cin >> talla;
    cout << "Ingrese peso: ";
    cin >> peso;
}

void Persona::mostrar(){
  cout << "El nombre es: " << getnom()<<endl;
  cout << "El apellido es: " << getape()<<endl;
  cout << "La edad es: " << getedad()<<endl;
  cout << "La talla es: " << gettalla()<<endl;
  cout << "El peso es: " << getpeso()<<endl;
  tipoedad();

}

int main(){
  Persona persona;
  persona.info();
  persona.mostrar();
  persona.modificar();
}