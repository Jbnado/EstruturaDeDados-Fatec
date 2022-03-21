class Pilha
{
private:
    int contador;
    int capacidade;
    int conteudo[10];

public:
    Pilha();
    bool vazia();
    void esvaziar();
    bool cheia();
    bool empilhar(int valor);
    bool desempilhar(int &valor);
    bool retornaTopo(int &valor);
    bool invertePilha(Pilha &minhaPilha);
    int maiorValorNaPilha(Pilha &minhaPilha);
    int menorValorNaPilha(Pilha &minhaPilha);
    int media(Pilha &minhaPilha);
    bool impares(Pilha &minhaPilha, Pilha &array);
};