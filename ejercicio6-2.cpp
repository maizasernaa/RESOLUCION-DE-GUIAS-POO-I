#include <iostream>

using namespace std;

class Pelota{
    private:
        string rpta;
        string marca;
        double peso;
        double presion;
        double diametro;
        double precio;
    public:
        Pelota();
        string getmar();
        double getpeso();
        double getpresion();
        double getdia();
        double getprecio();
        
        float radio();
        float volumen();
        float descuento();
        float pagar();

        void info();
        void mostrar();
        void disminuir();
    
};

string Pelota::getmar(){
    return marca;
}
double Pelota::getpeso(){
    return peso;
}
double Pelota::getpresion(){
    return presion;
}
double Pelota::getdia(){
    return diametro;
}
double Pelota::getprecio(){
    return precio;
}

float Pelota::radio(){
    return (getdia()/2);
}
float Pelota::volumen(){
    return (radio()*radio()*3.1416);
}
float Pelota::descuento(){
    return (getprecio()*0.10);
}
float Pelota::pagar(){
    return (getprecio()-descuento());
}

void Pelota::disminuir(){
    cout << "Disminuira 1 centimetro de diametro (SI/NO): ";
    cin >> rpta;

    if (rpta=="SI"||rpta=="si"){
      diametro=(diametro-1);
      precio=precio+(precio*0.02);
      mostrar();
      cout << "Operacion Terminada";
    }else{
      cout << "Operacion Terminada";
    }
}
Pelota::Pelota(){
}

void Pelota::info(){
    cout << "Ingrese marca: ";
    cin >> marca;
    cout << "Ingrese peso en gramos: ";
    cin >> peso;
    cout << "Ingrese presion en libras: ";
    cin >> presion;
    cout << "Ingrese diametro en centimetros: ";
    cin >> diametro;
    cout << "Ingrese precio: ";
    cin >> precio;
}

void Pelota::mostrar(){
  cout << "El radio es: " << radio()<<endl;
  cout << "El volumen es: " << volumen()<<endl;
  cout << "El descuento es de : " << descuento()<<endl;
  cout << "El total es de: " << pagar()<<" soles."<<endl;
}

int main(){
  Pelota procesar;
  procesar.info();
  procesar.mostrar();
  procesar.disminuir();
}