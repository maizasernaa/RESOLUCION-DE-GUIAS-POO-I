#include <iostream>

using namespace std;

class Video{
    private:
        string rpta;
        int codigo;
        string nombre;
        double duracion;
        double precio;
        double cambio;
    public:
        Video();
        int getcod();
        string getnom();
        double getdur();
        double getprecio();
        double getcambio();
        
        float dolares();

        void info();
        void mostrar();
        void aumentar();
    
};

int Video::getcod(){
    return codigo;
}
string Video::getnom(){
    return nombre;
}
double Video::getdur(){
    return duracion;
}
double Video::getprecio(){
    return (precio);
}
double Video::getcambio(){
    return cambio;
}


float Video::dolares(){
    return (getprecio()/getcambio());
}


void Video::aumentar(){
    cout << "Aumentar precio? (SI/NO): ";
    cin >> rpta;

    if (rpta=="SI"||rpta=="si"){
      precio=(precio+5.50);
      mostrar();
      cout << "Operacion Terminada";
    }else{
      cout << "Operacion Terminada";
    }
}
Video::Video(){
}

void Video::info(){
    cout << "Ingrese codigo: ";
    cin >> codigo;
    cout << "Ingrese nombre: ";
    cin >> nombre;
    cout << "Ingrese duracion del video: ";
    cin >> duracion;
    cout << "Ingrese precio: ";
    cin >> precio;
    cout << "Ingrese tipo de cambio: ";
    cin >> cambio;
}

void Video::mostrar(){
  cout << "El codigo es: " << getcod()<<endl;
  cout << "El nombre es: " << getnom()<<endl;
  cout << "La duracion del video es: " << getdur()<<endl;
  cout << "El precio es: " << getprecio()<<" soles."<<endl;
  cout << "El precio en dolares es: " << dolares() << endl;
}

int main(){
  Video video;
  video.info();
  video.mostrar();
  video.aumentar();
}