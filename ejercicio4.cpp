#include <iostream>
#include <string.h>

using namespace std;
int main()
{
    char palabra[70]; 
    int longitud;
    
    cout << endl << "Programa para calcular la longitud de una palabra que tenga 10 o mas letras y si la longitud es par o impar" << endl << endl;
    cout << "Escriba una palabra: ";
    cin.getline(palabra,70,'\n');
    longitud = strlen(palabra);
    cout << endl << "La longitud de la palabra es de: " << longitud << " caracteres ";

    if (longitud > 10)
    {
        cout << "y significa que tiene mas de 10 letras";
    }else
    {
        cout << "y significa que tiene menos de 10 letras";
    }

    if (longitud % 2 == 0)
    {
        cout << ", la palabra " << palabra << " es par" << endl << endl;
    }else
    {
        cout << ", la plabra " << palabra << " es impar" << endl << endl;
    }
}