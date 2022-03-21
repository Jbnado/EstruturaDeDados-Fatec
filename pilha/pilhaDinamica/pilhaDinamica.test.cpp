#include <iostream>
#include "pilhaDinamica.controller.cpp"

using namespace std;

int main()
{
    Pilha minhaPilha;
    int x;

    (minhaPilha.estaVazia()) ? cout << "Esta vazia!\n" : cout << "Nao esta vazia\n";

    for (int i = 0; i < 5; i++)
    {
        (minhaPilha.empilhar(i)) ? cout << "Empilhei " << minhaPilha.retornarTopo() << " proximoNo: "
                                        << minhaPilha.retornarTopoProximoNo() << "\n"
                                 : cout << "Erro ao empilhar!\n";
    }

    for (int i = 5; i >= 0; i--)
    {
        (minhaPilha.desempilhar(x)) ? cout << "Desempilhei " << x << "\n"
                                    : cout << "Erro ao desempilhar!\n";
    }

    (minhaPilha.estaVazia()) ? cout << "Esta vazia!\n" : cout << "Nao esta vazia\n";

    return 1;
}