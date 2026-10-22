// Adivina el numero secreto.cpp 


#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;


int main()
{
    srand(time(0));                     // inicializa el azar (una sola vez, al inicio)
    int numJugador = 0;
    int contador = 0;
    int record = 1000;
    
    bool intentarDeNuevo = true;
    cout << "Vamos a buscar un numero secreto" << endl;
    
    while (intentarDeNuevo != 0) {
        int secreto = rand() % 100 + 1;
        numJugador = 0;
        while (numJugador != secreto) {
            
            cout << "Ingresa un numero(1-100): " << endl;
            cin >> numJugador;
            contador += 1;
            
            if (numJugador < secreto) {
                cout << "Tu numero secreto es mayor" << endl;
                cout << "Intenta ingresando otro numero " << endl;
            }
            else if (numJugador > secreto) {
                cout << "Tu numero secreto es menor" << endl;
            }
            else {
                cout << "Felicidadees encontraste el numero secreto, lo encontraste en: " << contador << " intentos" << endl;
            }
            


            
        }
        if (contador < record) {
            record = contador;
        }
        
        contador = 0;
        cout << "quieres intentar de nuevo?(1/0), record anterior: " << record << endl;
        cin >> intentarDeNuevo;
    }
    
    }




