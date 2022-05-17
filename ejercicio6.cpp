#include <iostream>

using namespace std;

class Celular{
    private:
        int numero;
        string usuario;
        int segundos;
        double precio;
        string rpta;
    public:
        Celular();
        int getnum();
        string getusu();
        int getseg();
        double getpre();
        
        float costoco();
        float impuesto();
        float total();
        void info();
        void mostrar();
        void aumento();
    
};

int Celular::getnum(){
    return numero;
}
string Celular::getusu(){
    return usuario;
}
int Celular::getseg(){
    return segundos;
}
double Celular::getpre(){
    return precio;
}

float Celular::costoco(){
    return getseg()*getpre();
}
float Celular::impuesto(){
    return costoco()*0.18;
}
float Celular::total(){
    return costoco()+impuesto();
}

void Celular::aumento(){
    cout << "Aumentara el servicio en 20 segundos mas (SI/NO): ";
    cin >> rpta;

    if (rpta=="SI"||rpta=="si"){
      segundos=(segundos+20);
      precio=precio-(precio*0.05);
      mostrar();
      cout << "Operacion Terminada";
    }else{
      cout << "Operacion Terminada";
    }
}
Celular::Celular(){
}

void Celular::info(){
    cout << "Ingrese numero celular: ";
    cin >> numero;
    cout << "Ingrese usuario: ";
    cin >> usuario;
    cout << "Ingrese segundos consumidos: ";
    cin >> segundos;
    cout << "Ingrese precio por segundo: ";
    cin >> precio;
}

void Celular::mostrar(){
  cout << "El costo del consumo es: " << costoco()<<endl;
  cout << "El impuesto es de : " << impuesto()<<endl;
  cout << "El total es de: " << total()<<endl;
}

int main(){
  Celular cel;
  cel.info();
  cel.mostrar();
  cel.aumento();
}