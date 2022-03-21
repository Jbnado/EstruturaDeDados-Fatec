#include <iostream>
#include "pilha.class.h"

using namespace std;

Pilha::Pilha()
{
    contador = 0;
    capacidade = 3;
}

bool Pilha::vazia()
{
    if (contador == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool Pilha::cheia()
{
    if (contador == capacidade)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool Pilha::empilhar(int valor)
{
    if (cheia())
        return false;
    conteudo[contador] = valor;
    contador++;
    return true;
}

bool Pilha::desempilhar(int &valor)
{
    if (vazia())
        return false;
    contador--;
    valor = conteudo[contador];
    return conteudo[contador];
}

bool Pilha::retornaTopo(int &valor)
{
    if (vazia())
        return false;
    valor = conteudo[contador - 1];
    return true;
}