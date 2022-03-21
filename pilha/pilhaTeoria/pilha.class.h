class Pilha
{
private:
    int contador;
    int capacidade;
    int conteudo[3];

public:
    Pilha();
    bool vazia();
    bool cheia();
    bool empilhar(int valor);
    bool desempilhar(int &valor);
    bool retornaTopo(int &valor);
};