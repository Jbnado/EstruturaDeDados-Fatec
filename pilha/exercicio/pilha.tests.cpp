#include <iostream>
#include "pilha.controller.cpp"

using namespace std;

int main()
{
    Pilha minhaPilha;
    int x;
    Pilha impares;
    // Teste para inverter a pilha.
    for (int i = 1; i <= 10; i++)
    {
        minhaPilha.empilhar(i);
        cout << "Empilhei " << i << "\n";
    }
    cout << "\n";
    if (minhaPilha.invertePilha(minhaPilha))
        cout << "Pilha invertida com sucesso!\n\n";
    for (int i = 0; i < 10; i++)
    {
        minhaPilha.desempilhar(x);
        cout << "Desempilhei " << x << "\n";
    }
    cout << "\n";
    // Teste para maior valor.
    minhaPilha.empilhar(5);
    cout << "Empilhei 5"
         << "\n";
    minhaPilha.empilhar(10);
    cout << "Empilhei 10"
         << "\n";
    minhaPilha.empilhar(9);
    cout << "Empilhei 9"
         << "\n";
    minhaPilha.empilhar(40);
    cout << "Empilhei 40"
         << "\n";
    minhaPilha.empilhar(1);
    cout << "Empilhei 1"
         << "\n";
    x = minhaPilha.maiorValorNaPilha(minhaPilha);
    cout << "maior valor: " << x << "\n";
    if (x == 40)
        cout << "Metodo maior valor funcionou.\n";
    else
        cout << "Metodo maior valor falhou.\n";

    x = minhaPilha.menorValorNaPilha(minhaPilha);
    cout << "menor valor: " << x << "\n";
    if (x == 1)
        cout << "Metodo menor valor funcionou.\n";
    else
        cout << "Metodo menor valor falhou.\n";

    minhaPilha.esvaziar();
    minhaPilha.empilhar(5);
    cout << "Empilhei 5"
         << "\n";
    minhaPilha.empilhar(5);
    cout << "Empilhei 5"
         << "\n";
    minhaPilha.empilhar(5);
    cout << "Empilhei 5"
         << "\n";
    minhaPilha.empilhar(5);
    cout << "Empilhei 5"
         << "\n";
    minhaPilha.empilhar(5);
    cout << "Media deve ser 5\n";
    x = minhaPilha.media(minhaPilha);
    cout << "Media x = " << x << "\n";

    minhaPilha.esvaziar();
    for (int i = 1; i <= 10; i++)
    {
        minhaPilha.empilhar(i);
        cout << "Empilhei " << i << "\n";
    }
    cout << "\n";
    if (minhaPilha.impares(minhaPilha, impares))
    {
        cout << "Metodo impares funcionou! Mostrando agora os impares:\n\n";
        for (int i = 0; i < 10; i++)
        {
            if (!impares.vazia())
            {
                impares.desempilhar(x);
                cout << "Desempilhei " << x << "\n";
            }
        }
    }
    else
    {
        cout << "Metodo impares nao funcionou!";
    }
    return 1;
}