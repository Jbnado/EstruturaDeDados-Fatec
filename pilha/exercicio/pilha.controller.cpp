#include <iostream>
#include "pilha.class.h"

using namespace std;

Pilha::Pilha()
{
    contador = 0;
    capacidade = 10;
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

void Pilha::esvaziar()
{
    contador = 0;
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
    return true;
}

bool Pilha::retornaTopo(int &valor)
{
    if (vazia())
        return false;
    valor = conteudo[contador - 1];
    return true;
}

bool Pilha::invertePilha(Pilha &minhaPilha)
{
    if (minhaPilha.vazia())
        return false;

    int arrayAuxiliar[10];
    int contadorAuxiliar = contador;
    for (int i = 0; i < contadorAuxiliar; i++)
    {
        minhaPilha.desempilhar(arrayAuxiliar[i]);
    }
    for (int i = 0; i < contadorAuxiliar; i++)
    {
        minhaPilha.empilhar(arrayAuxiliar[i]);
    }
    return true;
}

int Pilha::maiorValorNaPilha(Pilha &minhaPilha)
{
    int maior = -999999;
    if (minhaPilha.vazia())
    {
        cout << "Metodo maior: Pilha vazia, nao ha valores para se comparar.";
        return -9999999;
    }

    int arrayAuxiliar[10];
    int contadorAuxiliar = contador;
    for (int i = 0; i < contadorAuxiliar; i++)
    {
        minhaPilha.desempilhar(arrayAuxiliar[i]);
    }
    for (int i = 0; i < contadorAuxiliar; i++)
    {
        if (arrayAuxiliar[i] > maior)
            maior = arrayAuxiliar[i];
        minhaPilha.empilhar(arrayAuxiliar[i]);
    }
    // COMO UTILIZEI A PILHA PARA EMPILHAR EU A INVERTO E FICA CERTINHA COMO ERA QND EMPILHEI NA MAIN :)
    invertePilha(minhaPilha);
    return maior;
}

int Pilha::menorValorNaPilha(Pilha &minhaPilha)
{
    int menor = 999999;
    if (minhaPilha.vazia())
    {
        cout << "Metodo menor: Pilha vazia, nao ha valores para se comparar.";
        return 9999999;
    }

    int arrayAuxiliar[10];
    int contadorAuxiliar = contador;
    for (int i = 0; i < contadorAuxiliar; i++)
    {
        minhaPilha.desempilhar(arrayAuxiliar[i]);
    }
    for (int i = 0; i < contadorAuxiliar; i++)
    {
        if (arrayAuxiliar[i] < menor)
            menor = arrayAuxiliar[i];
        minhaPilha.empilhar(arrayAuxiliar[i]);
    }
    // COMO UTILIZEI A PILHA PARA EMPILHAR EU A INVERTO E FICA CERTINHA COMO ERA QND EMPILHEI NA MAIN :)
    invertePilha(minhaPilha);
    return menor;
}

int Pilha::media(Pilha &minhaPilha)
{
    int media = 0;
    if (minhaPilha.vazia())
    {
        cout << "Metodo media: Pilha vazia, nao ha valores para se somar.";
        return -1;
    }

    int arrayAuxiliar[10];
    int contadorAuxiliar = contador;
    for (int i = 0; i < contadorAuxiliar; i++)
    {
        minhaPilha.desempilhar(arrayAuxiliar[i]);
    }
    for (int i = 0; i < contadorAuxiliar; i++)
    {
        media += arrayAuxiliar[i];
        minhaPilha.empilhar(arrayAuxiliar[i]);
    }
    // COMO UTILIZEI A PILHA PARA EMPILHAR EU A INVERTO E FICA CERTINHA COMO ERA QND EMPILHEI NA MAIN :)
    invertePilha(minhaPilha);
    return media / contadorAuxiliar;
}

bool Pilha::impares(Pilha &minhaPilha, Pilha &impares)
{
    if (minhaPilha.vazia())
    {
        cout << "Metodo impares: Pilha vazia, nao ha valores para se encontrar.";
        return false;
    }

    int arrayAuxiliar[10];
    int contadorAuxiliar = contador;
    for (int i = 0; i < contadorAuxiliar; i++)
    {
        minhaPilha.desempilhar(arrayAuxiliar[i]);
        if (arrayAuxiliar[i] % 2 != 0)
            impares.empilhar(arrayAuxiliar[i]);
    }
    for (int i = 0; i < contadorAuxiliar; i++)
    {
        minhaPilha.empilhar(arrayAuxiliar[i]);
    }
    // COMO UTILIZEI A PILHA PARA EMPILHAR EU A INVERTO E FICA CERTINHA COMO ERA QND EMPILHEI NA MAIN :)
    invertePilha(minhaPilha);
    return true;
}