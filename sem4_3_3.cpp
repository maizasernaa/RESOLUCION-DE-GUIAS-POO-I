#include <iostream>
using namespace std;

int contadorSO=0, contadorDO=0, contadorMA=0;
int dineroSO, dineroDO, dineroMA;

void getMoneda(string moneda)
{
    if (moneda == "soles" || moneda == "SOLES")
    {
        cout << "Tipo de Moneda: " << moneda << " ";
    }
    
    else if (moneda == "dolares" || moneda == "DOLARES")
    {
        cout << "Tipo de Moneda: " << moneda << " ";
    }
    
    else if (moneda == "marcos" || moneda == "MARCOS")
    {
        cout << "Tipo de Moneda: " << moneda << " ";
    }
}

void getDonacion(string moneda, int cantidad)
{
    if (moneda == "soles" || moneda == "SOLES")
    {
        cout << "\n";
        cout << "Cantidad: " << cantidad << " ";
    }

    else if (moneda == "dolares" || moneda == "DOLARES")
    {
        cout << "\n";
        cout << "Cantidad: " << cantidad << " ";
    }

    else if (moneda == "marcos" || moneda == "MARCOS")
    {
        cout << "\n";
        cout << "Cantidad: " << cantidad << " ";
    }
}

void efectuarIncrementos (string moneda, int contador, string donador, int cantidad)
{
    if (moneda == "soles" || moneda == "SOLES")
    {
        dineroSO =+ cantidad;
        contadorSO++; 
    }

    else if (moneda == "dolares" || moneda == "DOLARES")
    {
        dineroDO =+ cantidad;
        contadorDO++;
    }

    else if (moneda == "marcos" || moneda == "MARCOS")
    {
        dineroMA =+ cantidad;
        contadorMA++;
    }
}

void mostrarResultados ()
{
    cout << "El importe total de dinero acumulado en soles es: " << dineroSO << "\n";
    cout << "El importe total de dinero acumulado en dolares es: " << dineroDO << "\n";
    cout << "El importe total de dinero acumulado en marcos es: " << dineroMA << "\n";
    cout << "La cantidad total de donantes en soles es: "<< contadorSO << "\n";
    cout << "La cantidad total de donantes en dolares es: "<< contadorDO << "\n";
    cout << "La cantidad total de donantes en marcos es: "<< contadorMA << "\n";
}

int main ()
{
    string moneda,
           donador,
           rpta;
    int cantidad;
    bool bandera=false;
    int contador=0;

    do
    {
        cout << "Ingresar nombre del donante: ";
        cin >> donador;
        cout << "Tipo de moneda: ";
        cin >> moneda;
        cout << "Ingresar importe de dinero a donar: ";
        cin >> cantidad;

        //Proceso
        // Get moneda
            getMoneda (moneda);

        //Get donacion
            getDonacion (moneda, cantidad);

        //efectuar Incrementos
            efectuarIncrementos (moneda, contador, donador, cantidad);

        cout << "\n-------------------------------\n";
        cout << "Desea continuar ? ... ";
        cin >> rpta;
        cout << "-------------------------------\n";
        
        if (rpta == "si" || rpta == "SI")
        {
            bandera = true;
        }
        else
        {
            bandera = false;
        }
    } while (bandera == true);
    
    //Mostra resultados
        mostrarResultados ();

    cout << "\n-----------------------------------------------\n";
    cout << "$$$$$$$$$$ GRACIAS POR SU DONACION $$$$$$$$$$\n";
    cout << "-----------------------------------------------\n";
}