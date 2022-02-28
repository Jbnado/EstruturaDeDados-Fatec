
using namespace std;
// Defina abaixo uma struct de nome calculo que armazenará:
// - uma variavel inteira de nome a
// - uma varável caractere de nome operacao
// - uma variavel inteira de nome b
// - uma variavel inteira de nome resultado
struct Calculo
{
    int a;
    char operacao;
    int b;
    int resultado;
};

// Defina um vetor com 5 elementos a partir dessa struct para armazenamento do histórico
Calculo historico[5];
// Tamanho da fila atualmente. Sendo -1 uma fila vazia.
int frente_fila = -1;

// Implemente a função soma:
int soma(int a, int b)
{
    return a + b;
}

// Implemente a função subtracao:
int subtracao(int a, int b)
{
    return a - b;
}

// Implemente a função multiplicacao:
int multiplicacao(int a, int b)
{
    return a * b;
}

// Implemente a função divisao:
int divisao(int a, int b)
{
    if (b == 0)
    {
        cout << "Divisão por 0, encerrando função divisão!" << endl;
        return 0;
    }
    else
    {
        return a / b;
    }
}

// Função remover da fila.
void remover(Calculo copiaDoHistorico[])
{
    if (frente_fila == -1)
    {
        cout << "A fila está vazia, não há o que remover!" << endl;
    }
    else
    {
        for (int i = 0; i <= frente_fila; i++)
        {
            historico[i] = copiaDoHistorico[i + 1];
        }
        frente_fila--;
    }
}

// Função inserir na fila.
void inserir(Calculo proximoDaFila)
{
    if (frente_fila == 4)
    {
        cout << "Historico lotado, apagando o calculo mais antigo..." << endl;
        remover(historico);
        inserir(proximoDaFila);
    }
    else
    {
        frente_fila++;
        historico[frente_fila] = proximoDaFila;
    }
}

// Implemente a função calculadora:
int calculadora(int a, int b, char operacao)
{
    Calculo auxiliar;
    auxiliar.a = a;
    auxiliar.b = b;
    auxiliar.operacao = operacao;

    switch (auxiliar.operacao)
    {
    case '+':
        auxiliar.resultado = soma(auxiliar.a, auxiliar.b);
        break;
    case '-':
        auxiliar.resultado = subtracao(auxiliar.a, auxiliar.b);
        break;
    case '*':
        auxiliar.resultado = multiplicacao(auxiliar.a, auxiliar.b);
        break;
    case '/':
        auxiliar.resultado = divisao(auxiliar.a, auxiliar.b);
        if (auxiliar.resultado == 0)
        {
            return 0;
        }
        else
        {
            break;
        }
    }
    inserir(auxiliar);
    return auxiliar.resultado;
}

// Implemente a função limpaHistorico:
int limpaHistorico()
{
    frente_fila = -1;
    return 1;
}

// Implemente a função listaHistorico:
string listaHistorico()
{
    if (frente_fila == -1)
    {
        cout << "Fila vazia!" << endl;
    }
    else
    {
        for (int i = 0; i <= frente_fila; i++)
        {
            cout << historico[i].a << " ";
            cout << historico[i].operacao << " ";
            cout << historico[i].b << " = ";
            cout << historico[i].resultado << endl;
        }
    }
    return "";
}
