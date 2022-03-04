#include <iostream>
#include "carro.h"
using namespace std;
// Em um arquivo cpp criamos os metódos do carro.
void Carro::acelera(int velocidade)
{
    cout << "Vrum 3.0! - " << modelo << " - " << marca << endl;
    cout << "velocidade: " << velocidade << "KM/H" << endl;
}