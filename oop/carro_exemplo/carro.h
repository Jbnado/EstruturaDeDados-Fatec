#include <iostream>
using namespace std;

// // MODELO 1
// //  Esta é uma biblioteca onde iremos criar uma classe de um carro.
// //  Temos as suas 3 propriedades e um metódo.
//  class Carro
//  {
//  public:
//      string marca;
//      string modelo;
//      int ano;
// //  void acelera();
// //  Por ser aqui que criamos a classe, é aqui que passamos as propriedades das funções também!
//  void acelera(int velocidade);
// };

// //MODELO 2 - USANDO CONSTRUTORES
// class Carro
// {
// public:
//     string marca;
//     string modelo;
//     int ano;
//     void acelera(int velocidade);
//     Carro(string marca, string modelo)
//     {
//         cout << "Executando construtor!" << endl;
//         this->marca = marca;
//         this->modelo = modelo;
//         ano = 2001;
//         acelera(0);
//     }
// };

// UTILIZANDO PRIVATE, GETTERS E SETTERS.
class Carro
{
private:
    string marca;
    string modelo;
    int ano;

public:
    // Constructor
    Carro(string marca, string modelo, int ano)
    {
        cout << "Executando construtor!" << endl;
        this->marca = marca;
        this->modelo = modelo;
        this->ano = ano;
        acelera(0);
    }
    void acelera(int velocidade);
    // Setter
    void setMarca(string x)
    {
        if (x == "Volsksvagem" || x == "Fiat")
            marca = x;
        else
            cout << "Marca invalida";
    }
    // Getter
    string getMarca()
    {
        return marca;
    }
    // Setter
    void setModelo(string x)
    {
        modelo = x;
    }
    // Getter
    string getModelo()
    {
        return modelo;
    }
    // Setter
    void setAno(int x)
    {
        if (x > 1990)
            ano = x;
        else
            cout << "Ano inválido!";
    }
    // Getter
    int getAno()
    {
        return ano;
    }
};