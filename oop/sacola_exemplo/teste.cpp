#include <iostream>
#include "Sacola_controller.cpp"

using namespace std;

int main()
{
    Sacola minhaSacola;

    if (minhaSacola.vazia())
        cout << "Esta vazia!" << endl;

    if (minhaSacola.inserir(1))
        cout << "Insercao ok!" << endl;
    else
        cout << "Nao iseriu!" << endl;

    if (minhaSacola.vazia())
        cout << "Esta vazia!"
             << endl;
    else
        cout << "Nao esta vazia!"
             << endl;

    if (minhaSacola.inserir(2))
        cout << "Insercao ok!" << endl;
    else
        cout << "Nao iseriu!" << endl;

    if (minhaSacola.inserir(3))
        cout << "Insercao ok!" << endl;
    else
        cout << "Nao iseriu!" << endl;

    if (minhaSacola.inserir(4))
        cout << "Insercao ok!" << endl;
    else
        cout << "Nao iseriu!" << endl;

    if (minhaSacola.inserir(5))
        cout << "Insercao ok!" << endl;
    else
        cout << "Nao iseriu!" << endl;

    if (minhaSacola.vazia())
        cout << "Esta vazia!"
             << endl;
    else
        cout << "Nao esta vazia!"
             << endl;

    if (minhaSacola.inserir(6))
        cout << "Insercao ok!" << endl;
    else
        cout << "Nao iseriu!" << endl;

    if (minhaSacola.ocorrencia(6))
        cout << "Existe!" << endl;
    else
        cout << "Nao existe!" << endl;

    if (minhaSacola.ocorrencia(3))
        cout << "Existe!" << endl;
    else
        cout << "Nao existe!" << endl;

    for (int i = 0; i < 7; i++)
    {
        if (minhaSacola.ocorrencia(i))
            cout << i << ": Existe!" << endl;
        else
            cout << i << ": Nao existe!" << endl;
    }

    if (minhaSacola.remover(4))
        cout << "Remocao ok" << endl;
    else
        cout << "Nao removeu" << endl;

    for (int i = 0; i < 7; i++)
    {
        if (minhaSacola.ocorrencia(i))
            cout << i << ": Existe!" << endl;
        else
            cout << i << ": Nao existe!" << endl;
    }

    minhaSacola.mostrar();
}