#include <iostream>
using namespace std;

class Computadora{
    private:
        string rpta;
        int codigo;
        string marca;
        string color;
        double precio;
    public:
        Computadora();
        int getcod();
        string getmar();
        string getco();
        double getpre();
        
        float soles();
        float euros();

        void info();
        void mostrar();
        void disminuir();
    
};

int Computadora::getcod(){
    return codigo;
}
string Computadora::getmar(){
    return marca;
}
string Computadora::getco(){
    return color;
}
double Computadora::getpre(){
    return precio;
}

float Computadora::soles(){
    return (getpre()*2.58);
}
float Computadora::euros(){
    return (getpre()*1.25);
}


void Computadora::disminuir(){
    cout << "Disminuir precio de la computadora en dolares? (SI/NO): ";
    cin >> rpta;

    if (rpta=="SI"||rpta=="si"){
      precio=precio-(precio*0.10);
      mostrar();
      cout << "Operacion Terminada";
    }else{
      cout << "Operacion Terminada";
    }
}
Computadora::Computadora(){
}

void Computadora::info(){
    cout << "Ingrese codigo: ";
    cin >> codigo;
    cout << "Ingrese marca: ";
    cin >> marca;
    cout << "Ingrese color: ";
    cin >> color;
    cout << "Ingrese precio en dolares: ";
    cin >> precio;
}

void Computadora::mostrar(){
  cout << "El codigo es: " << getcod()<<endl;
  cout << "El marca es: " << getmar()<<endl;
  cout << "El color es: " << getco()<<endl;
  cout << "El precio en dolares es: " << getpre()<<endl;
  cout << "El precio en soles es: " << soles()<<endl;
  cout << "El precio en euro es: " << euros()<<endl;

}

int main(){
  Computadora computadora;
  computadora.info();
  computadora.mostrar();
  computadora.disminuir();
}