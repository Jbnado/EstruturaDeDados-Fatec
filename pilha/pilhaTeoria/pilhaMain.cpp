#include <iostream>
#include "pilha_controller.cpp"

using namespace std;

int main()
{
    Pilha minhaPilha;
    int x;

    (minhaPilha.vazia()) ? cout << "Esta vazia\n" : cout << "Nao esta vazia\n";

    for (int i = 0; i < 5; i++)
    {
        (minhaPilha.empilhar(i)) ? cout << "Empilhei " << i << "\n" : cout << "Erro ao empilhar\n";
    }

    (minhaPilha.cheia()) ? cout << "Esta cheia\n" : cout << "Nao esta cheia\n";

    for (int i = 5; i > 0; i--)
    {
        (minhaPilha.desempilhar(x)) ? cout << "Desempilhei " << x << "\n" : cout << "Erro ao desempilhar\n";
    }

    return 1;
}