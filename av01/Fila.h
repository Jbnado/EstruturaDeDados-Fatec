#include <iostream>
using namespace std;

class Fila
{
private:
    struct elemento
    {
        int id;
        string nome;
        int folhas;
        elemento *proximoElemento;
    };
    typedef elemento *PonteiroElemento;
    PonteiroElemento inicio;
    PonteiroElemento fim;
    int folhasDisponiveis;
    int contador;

public:
    Fila();
    bool vazia();
    bool cheia();
    // alterar
    bool inserir(string auxNome, int auxFolhas);
    bool remover(int &auxId, string &auxNome, int &auxFolhas);
    // implementar
    string listar();
    int listarFolhas();
    bool inserirFolhas(int auxFolhas);
    bool imprimir();
};