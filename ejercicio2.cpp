#include <iostream>
#include <math.h>

using namespace std;
int main()
{
    int numero;
    cout << '\n' <<"programa para verificar si un numero es par o impar" << '\n' << '\n';
    cout << "ingrese un numero porfavor: ";
    cin >> numero;
    if (numero % 2 == 0)
    cout << "el numero " << numero << " es par" << endl << endl;
    else 
    cout << "el numero " << numero << " es impar" << endl << endl;
}