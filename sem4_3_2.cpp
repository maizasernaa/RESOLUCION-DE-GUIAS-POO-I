#include <iostream>
using namespace std;

int cantidadGO, cantidadLA, cantidadPU;
float totalGO, totalLA, totalPU;

float importePagar (int cantidad, string marca)
{
    if (marca == "gloria")
    {
        return cantidad * 4.9;
    }
    else if (marca == "laive")
    {
        return cantidad * 5.2;
    }
    else if (marca == "puravida")
    {
        return cantidad * 4.5;
    }
}

void getMarca (string marca)
{
    if (marca == "laive")
    {
        cout << "Marca: " << marca << " ";
    }
    else if (marca == "gloria")
    {
        cout << "Marca: " << marca << " ";
    }
    else if (marca == "puravida")
    {
        cout << "Marca: " << marca << " ";
    }
}

void getCantidad (int cantidad, string marca)
{
    if (marca == "laive")
    {
        cout << "\n";
        cout << "Cantidad: " << cantidad << " ";
    }
    else if (marca == "gloria")
    {
        cout << "\n";
        cout << "Cantidad: " << cantidad << " ";
    }
    else if (marca == "puravida")
    {
        cout << "\n";
        cout << "Cantidad: " << cantidad << " ";
    }
}

void efectuarIncrementos (string marca, int cantidad, float importe_pagar)
{
    if (marca == "gloria")
    {
        cantidadGO += cantidad;
        totalGO += importe_pagar;
    }

    else if (marca == "laive")
    {
        cantidadLA += cantidad;
        totalLA += importe_pagar;
    }

    else if (marca == "puravida")
    {
        cantidadPU += cantidad;
        totalPU += importe_pagar;
    }
}

void imprimirResultados (float importe_pagar)
{
    cout << "\nEl importe a pagar es: "<< importe_pagar;
    cout << "\n";
}

void mostrarResultados ()
{
    cout << "La cantidad total de productos GLORIA comprados es: " << cantidadGO << "\n";
    cout << "La cantidad total de productos LAIVE comprados es: " << cantidadLA << "\n";
    cout << "La cantidad total de productos PURA VIDA comprados es: " << cantidadPU << "\n";
    cout << "El importe total a pagar de productos GLORIA es: "<< totalGO << "\n";
    cout << "El importe total a pagar de productos LAIVE es: "<< totalLA << "\n";
    cout << "El importe total a pagar de productos PURA VIDA es: "<< totalPU << "\n";
}

int main ()
{
    string marca,
           rpta;
    int cantidad;
    float importe_pagar;
    bool bandera = false;

    do
    {
        cout << "Ingresar marca del producto: ";
        cin >> marca;
        cout << "Cantidad de botellas adquiridas: ";
        cin >> cantidad;

        //Proceso
        //Get Marca
        getMarca (marca);

        //Get cantidad
        getCantidad (cantidad, marca);

        //Importe a pagar
        importe_pagar = importePagar (cantidad, marca);

        //Efectuar incrmeentos
        efectuarIncrementos (marca, cantidad, importe_pagar);

        //Imprimir Resulatdos
        imprimirResultados (importe_pagar);

        cout << "-------------------------------\n";
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

    } while (bandera== true);

    mostrarResultados ();

    cout << "\n-----------------------------------------------\n";
    cout << "$$$$$$$$$$ GRACIAS POR SU COMPRA $$$$$$$$$$\n";
    cout << "-----------------------------------------------\n";
    
}