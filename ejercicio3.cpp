#include <iostream>
#include<math.h>

using namespace std;
int main()
{
    int numero;
    cout << endl << "Programa para verificar si un numero es positivo, negativo o cero." << endl << endl;
    cout << "Por favor introduzca un numero: ";
    cin >> numero;
    if (numero > 0)
    {
        cout << "El numero " << numero << " es positivo" << endl << endl;
    }else if (numero < 0)
    {
        cout << "El numero " << numero << " es negativo" << endl << endl;
    }else 
    cout << "El numero es cero" << endl << endl;
}