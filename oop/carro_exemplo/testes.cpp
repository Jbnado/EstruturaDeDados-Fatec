#include <iostream>
// Iremos importar apenas o cpp de carro, que é onde os metódos serão construídos.
#include "carro.cpp"

using namespace std;
// Aqui criaremos um main apenas para testes.
int main()
{
    // MODELO SEM CONSTRUTOR
    // Instacio um novo objeto com a classe Carro.
    // Defino seus atributos.
    // E acelero!!
    //  Carro carro1;
    //  carro1.marca = "Volkswagen";
    //  carro1.modelo = "Fusca";
    //  carro1.ano = 1985;
    //  carro1.acelera(100);

    // MODELO 2 - USANDO CONSTRUTORES
    // Carro carro1("Volkswagen", "Fusca");

    // MODELO 3 - GETTERS E SETTERS
    Carro carro1("Wolksvagen", "Gol", 2011);
    carro1.setMarca("Fiat");
    carro1.setModelo("Uno");
    carro1.setAno(2005);
    cout << carro1.getModelo() << endl;
    carro1.acelera(100);

    return 1;
}