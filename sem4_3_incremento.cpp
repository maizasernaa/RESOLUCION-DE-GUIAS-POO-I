#include <iostream>
using namespace std;

int cantidadP1, cantidadP2, cantidadP3;
float descuentoP1, descuentoP2, descuentoP3;
float totalP1, totalP2, totalP3;
// ¿Las variables que tengo dentro del metodo son GLOBALES?
// si es No - hay que declarar las variables como un parametro
// Las variables de salida reemplazar por RETURN

void efectuarIncrementos (string codigo, int cantidad, float importe_pagar, float importe_descuento)
{
    if (codigo == "P1" || codigo == "p1")
    {
        cantidadP1 += cantidad;
        totalP1 += importe_pagar;
        descuentoP1 += importe_descuento;
      
    }

    else if (codigo == "P2" || codigo == "p2")
    {
        cantidadP2 += cantidad;
        totalP2 += importe_pagar;
        descuentoP2 += importe_descuento;        
    }

    else if (codigo == "P3" || codigo == "p3")
    {
        cantidadP3 += cantidad;
        totalP3 += importe_pagar;
        descuentoP3 += importe_descuento;
    }
}

float importeCompra (string codigo, int cantidad)
{
    if (codigo == "P1" || codigo == "p1")
    {
        return cantidad * 15.0;
    }

    if (codigo == "P2" || codigo == "p2")
    {
        return cantidad * 17.5;
    }

    if (codigo == "P3" || codigo == "p3")
    {
        return cantidad * 20.0;
    }
}

float importePagar (float importe_compra, float importe_descuento)
{
    return importe_compra - importe_descuento;
}

float importeDescuento (int cantidad, float importe_compra)
{
    if (cantidad > 10 )
    {
        return importe_compra * 0.15;
    }
    else 
    {
        return importe_compra * 0.07;
    }
}

void imprimirResultados(float importe_compra, float importe_descuento, float importe_pagar)
{
    cout << "Importe de compra es: " << importe_compra;
    cout << "\n";
    cout << "Importe de descuento es: " << importe_descuento;
    cout << "\n";
    cout << "Importe a pagar es: " << importe_pagar;
}


void mostrarResultados ()
{
    cout << "La cantidad total de productos P1 es: " << cantidadP1 << "\n";
    cout << "La cantidad total de productos P2 es: " << cantidadP2 << "\n";
    cout << "La cantidad total de productos P3 es: " << cantidadP3 << "\n";
    cout << "La cantidad de descuento total para P1 es: " << descuentoP1 << "\n";
    cout << "La cantidad de descuento total para P2 es: " << descuentoP2 << "\n";
    cout << "La cantidad de descuento total para P3 es: " << descuentoP3 << "\n";
    cout << "La cantidad total a pagar de P1 es: "<< totalP1 << "\n";
    cout << "La cantidad total a pagar de P2 es: "<< totalP2 << "\n";
    cout << "La cantidad total a pagar de P3 es: "<< totalP3 << "\n";
   
}

int main ()
{
    int cantidad;
    string codigo,
           rpta;
    float importe_pagar;
    float importe_compra,
          importe_descuento;
    bool bandera= false;

    do
    {
        cout << "Ingresar codigo del producto: ";
        cin >> codigo;

        cout << "Ingresar cantidad adquirida: ";
        cin >> cantidad;

        //Proceso

        //Imprimir importe de compra
        importe_compra = importeCompra (codigo, cantidad);

        //Imprimir importe descuento
        importe_descuento = importeDescuento (cantidad, importe_compra);

        //Imprimir importe a pagar
        importe_pagar = importePagar (importe_compra, importe_descuento);
        
        //Efectuar incrementos
        efectuarIncrementos (codigo, cantidad, importe_pagar, importe_descuento);
        
        //Salida
        imprimirResultados (importe_compra, importe_descuento, importe_pagar);      

        //Continuar el programa
        cout << "\n";
        cout << "*********************************\n";
        cout << "Desea continuar el programa (SI)..";
        cin >> rpta;
        cout << "*********************************\n";

        if (rpta == "si" || rpta == "SI")
        {
            bandera = true;
        }
        else 
        {
            bandera = false;
        }   

    } while (bandera == true);
    
        mostrarResultados ();

        cout << "\n-----------------------------------------------\n";
        cout << "$$$$$$$$$$ GRACIAS POR SU COMPRA $$$$$$$$$$\n";
        cout << "-----------------------------------------------\n";

}