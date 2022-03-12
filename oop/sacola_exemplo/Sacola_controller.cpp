#include <iostream>
#include "Sacola_model.h"

using namespace std;

Sacola::Sacola()
{
    contador = 0;
    capacidade = MAX;
}

bool Sacola::vazia()
{
    if (contador == 0)
        return true;
    else
        return false;
}

bool Sacola::cheia()
{
    if (contador == capacidade)
        return true;
    else
        return false;
}

// x sendo o valor que será inserido.
bool Sacola::inserir(int x)
{
    if (cheia())
        return false;
    dados[contador] = x;
    contador++;
    return true;
}

// x sendo o valor que você deseja saber se tem na sacola.
bool Sacola::ocorrencia(int x)
{
    for (int i = 0; i < contador; i++)
        if (dados[i] == x)
            return true;
    return false;
}

// x sendo o valor que deseja remover.
bool Sacola::remover(int x)
{
    if (vazia())
        return false;
    for (int i = 0; i < contador; i++)
    {
        if (dados[i] == x)
        {
            contador--;
            for (int j = i; j < contador; j++)
            {
                dados[j] = dados[j + 1];
            }
            return true;
        }
    }
    return false;
}

void Sacola::mostrar()
{
    for (int i = 0; i < contador; i++)
        cout << this->dados[i] << " - ";
}