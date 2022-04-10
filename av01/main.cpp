#include <iostream>
#include <cstdlib>
#include "Fila.cpp"

using namespace std;

int main()
{
    system("cls");

    Fila minhaFila;
    int x, y;
    string z, listando;

    cout << "\nInserindo 18 folhas...\n";
    minhaFila.inserirFolhas(18);

    cout << "Total de folhas:\n";
    cout << minhaFila.listarFolhas();

    cout << "\n\nInserindo 5 elementos na fila...\n";
    minhaFila.inserir("arquivos1", 10);
    minhaFila.inserir("arquivos2", 5);
    minhaFila.inserir("arquivos3", 300);
    minhaFila.inserir("arquivos4", 3);
    minhaFila.inserir("arquivos5", 1000);

    listando = minhaFila.listar();
    cout << "\nFila de impressao:\n"
         << listando << "\n";

    cout << "Total de folhas:\n";
    cout << minhaFila.listarFolhas();

    cout << "\n\nImprimindo um elemento...\n";
    minhaFila.remover(y, z, x);

    listando = minhaFila.listar();
    cout << "\nFila de impressao:\n"
         << listando << "\n";

    cout << "Total de folhas:\n";
    cout << minhaFila.listarFolhas();
}