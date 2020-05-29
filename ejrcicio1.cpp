#include <iostream> 
#include <math.h>

using namespace std;

int divisor(int numerador,int denominador);
int main()

{
    int numerador;
    int denominador;
    cout << endl << "programa para verificar si un numero es divisible entre el otro" << endl << endl;
    cout << "digite el numerador: ";
    cin >> numerador;
    cout << "digite el denominador: ";
    cin >> denominador; 
    if (divisor(numerador,denominador)>0)
    {
        cout <<"el numero " << numerador << " no es divisibles estre " << denominador << endl << endl;
    }else
    {
        cout <<"el numero " << numerador << " si es divisibles estre " << denominador << endl << endl; 
    }

}

int divisor(int numerador,int denominador)
{
    if (numerador<denominador)
    {
        return numerador;
    }else
    {
        return divisor(numerador-denominador,denominador);
    }

}