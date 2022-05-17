#include <iostream>
using namespace std;

class Trabajador{
    private:
        string rpta;
        int codigo;
        string nombre;
        int horas;
        double tarifa;
    public:
        Trabajador();
        int getcod();
        string getnom();
        int gethoras();
        double gettarifa();
        
        float sueldobruto();
        float descuento();
        float sueldoneto();

        void info();
        void mostrar();
        void aumentar();
    
};

int Trabajador::getcod(){
    return codigo;
}
string Trabajador::getnom(){
    return nombre;
}
int Trabajador::gethoras(){
    return horas;
}
double Trabajador::gettarifa(){
    return tarifa;
}

float Trabajador::sueldobruto(){
    return (gethoras()*gettarifa());
}
float Trabajador::descuento(){
    return (sueldobruto()*0.15);
}
float Trabajador::sueldoneto(){
    return (sueldobruto()-descuento());
}

void Trabajador::aumentar(){
    cout << "Modificar edad? (SI/NO): ";
    cin >> rpta;

    if (rpta=="SI"||rpta=="si"){
      horas=horas+10;
      mostrar();
      cout << "Operacion Terminada";
    }else{
      cout << "Operacion Terminada";
    }
}
Trabajador::Trabajador(){
}

void Trabajador::info(){
    cout << "Ingrese codigo: ";
    cin >> codigo;
    cout << "Ingrese nombre: ";
    cin >> nombre;
    cout << "Ingrese horas trabajadas: ";
    cin >> horas;
    cout << "Ingrese tarifa por hora: ";
    cin >> tarifa;
}

void Trabajador::mostrar(){
  cout << "El codigo es: " << getcod()<<endl;
  cout << "El nombre es: " << getnom()<<endl;
  cout << "Las horas trabajadas es: " << gethoras()<<endl;
  cout << "El sueldo bruto es: " << sueldobruto()<<endl;
  cout << "El descuento es: " << descuento()<<endl;
  cout << "El sueldo neto es: " << sueldoneto()<<endl;

}

int main(){
  Trabajador trabajador;
  trabajador.info();
  trabajador.mostrar();
  trabajador.aumentar();
}