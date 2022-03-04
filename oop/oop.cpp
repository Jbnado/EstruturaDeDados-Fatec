#include <iostream>

using namespace std;
// Assim como uma struct criamos uma classe com esta sintaxe:
// Classe de um carro que tem três propriedades: marca, modelo e seu ano.
// E um metódo: acelera.
class Carro
{
    // Aqui colocamos estas propriedades como pública.
public:
    string marca;
    string modelo;
    int ano;
    // Função acelera dentro da classe.
    void acelera()
    {
        cout << "Vrum 2.0! - " << marca;
    }
};

int main()
{
    // Uma nova instância da classe Carro - um objeto chamado carro1.
    Carro carro1;
    // Atribuindo as propriedades do objeto carro1.
    carro1.marca = "Volkswagen";
    carro1.modelo = "Fusca";
    carro1.ano = 1985;
    // Utilizando a função acelera do carro1.
    carro1.acelera();

    return 1;
}