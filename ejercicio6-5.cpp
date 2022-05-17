#include <iostream>

using namespace std;

class Obrero{
    private:
        string rpta;
        string nombre;
        int horas;
        int codigo;
        double tarifa;
    public:
        Obrero();
        int getcod();
        string getnom();
        int getho();
        double gettarifa();
        
        float sueldobruto();
        float afp();
        float eps();
        float sueldoneto();

        void info();
        void mostrar();
        void aumentar();
    
};

int Obrero::getcod(){
    return codigo;
}
string Obrero::getnom(){
    return nombre;
}
int Obrero::getho(){
    return horas;
}
double Obrero::gettarifa(){
    return tarifa;
}


float Obrero::sueldobruto(){
    return (getho()*gettarifa());
}
float Obrero::afp(){
    return (sueldobruto()*0.10);
}
float Obrero::eps(){
    return (sueldobruto()*0.05);
}
float Obrero::sueldoneto(){
    return (sueldobruto()-afp()-eps());
}

void Obrero::aumentar(){
    cout << "Aumentar 8 horas (SI/NO): ";
    cin >> rpta;

    if (rpta=="SI"||rpta=="si"){
      horas=(horas+8);
      mostrar();
      cout << "Operacion Terminada";
    }else{
      cout << "Operacion Terminada";
    }
}
Obrero::Obrero(){
}

void Obrero::info(){
    cout << "Ingrese codigo: ";
    cin >> codigo;
    cout << "Ingrese nombre: ";
    cin >> nombre;
    cout << "Ingrese horas trabajadas: ";
    cin >> horas;
    cout << "Ingrese tarifa por hora: ";
    cin >> tarifa;
}

void Obrero::mostrar(){
  cout << "El sueldo bruto es: " << sueldobruto()<<endl;
  cout << "El descuento por AFP es: " << afp()<<endl;
  cout << "El descuento por EPS es: " << eps()<<endl;
  cout << "El sueldo neto es de: " << sueldoneto()<<" soles."<<endl;
}

int main(){
  Obrero obrero;
  obrero.info();
  obrero.mostrar();
  obrero.aumentar();
}