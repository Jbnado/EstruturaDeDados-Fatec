#include <iostream>
#include "Fila.h"

using namespace std;

Fila::Fila()
{
    inicio = NULL;
    fim = NULL;
    folhasDisponiveis = 0;
    contador = 0;
}

bool Fila::vazia()
{
    return (inicio == NULL);
}

bool Fila::cheia()
{
    return false;
}

bool Fila::inserir(string auxNome, int auxFolhas)
{
    // Inserir um arquivo na fila de impressão;
    // Altere o método inserir:

    if (listarFolhas() < auxFolhas)
        return false;

    PonteiroElemento p;
    p = new elemento;
    p->id = ++contador;
    // contador++;
    folhasDisponiveis -= auxFolhas;
    p->nome = auxNome;
    p->folhas = auxFolhas;

    if (vazia())
    {
        inicio = p;
        fim = p;
    }
    else
    {
        fim->proximoElemento = p;
        fim = p;
    }
    p->proximoElemento = NULL;

    return true;
}

bool Fila::remover(int &auxId, string &auxNome, int &auxFolhas)
{
    // Remover um arquivo da fila da impressão (imprimir);
    // Altere o método remover:
    PonteiroElemento p;
    if (vazia())
        return false;

    auxId = inicio->id;
    auxNome = inicio->nome;
    auxFolhas = inicio->folhas;

    p = inicio;
    inicio = inicio->proximoElemento;
    delete p;
    if (inicio == NULL)
        fim = NULL;
    return true;
}

string Fila::listar()
{
    // Implementar listagem da fila de impressão;
    // Retornar string no formato:
    // <idImpressao1> - <nomeArquivo1> - <folhas1>\n
    // <idImpressao2> - <nomeArquivo2> - <folhas2>\n
    //
    // Seu código aqui

    if (vazia())
        return "";

    int auxId, auxFolhas;
    string auxNome;
    Fila auxFila;
    string retorno = "";

    while (remover(auxId, auxNome, auxFolhas))
    {
        retorno += to_string(auxId) + " - ";
        retorno += auxNome + " - ";
        retorno += to_string(auxFolhas) + "\n";

        contador--;
        auxFila.inserirFolhas(auxFolhas);
        auxFila.inserir(auxNome, auxFolhas);
    }

    while (auxFila.remover(auxId, auxNome, auxFolhas))
    {
        inserirFolhas(auxFolhas);
        inserir(auxNome, auxFolhas);
    }

    return retorno;
}

bool Fila::inserirFolhas(int auxFolhas)
{
    // Inserir mais folhas na impressora;
    // Seu código aqui
    folhasDisponiveis += auxFolhas;

    return true;
}

int Fila::listarFolhas()
{
    // Retorna o total de folhas disponíveis na impressora;
    // Seu código aqui

    return folhasDisponiveis;
}
