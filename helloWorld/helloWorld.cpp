#include <iostream>
#include <math.h>

using namespace std;

// EXEMPLO DE FUNÇÃO
void olaMundo()
{
    cout << "Ola Mundo!";
}

// EXEMPLO DE FUNÇÃO COM PARAMETROS E DECLARADA ANTES DE SER IMPLEMENTADA
void funcaoComParametros(string nome, int idade);

// FUNÇÃO COM PASSAGEM DE REFERÊNCIA, CALCULAREMOS BHASKARA E RETORNAREMOS 3 VALORES :)
float funcaoComReferencia(float a, float b, float c, float &x1, float &x2);

// FUNÇÃO PRINCIPAL
int main()
{
    // HELLO WORLD EM C++
    cout << "Ola Mundo!";

    // EXEMPLOS DE VARIAVEIS
    //  char charVar = 't';
    //  int intVar = 298;
    //  float floatVar = 49.95;
    //  double doubleVar = 99.9999;
    //  bool boolvar = (2 > 3);
    //  cout << "charVar = " << charVar << endl;
    //  cout << "intVar = " << intVar << endl;
    //  cout << "floatVar = " << floatVar << endl;
    //  cout << "doubleVar = " << doubleVar << endl;
    //  cout << "boolvar = " << boolvar << endl;

    // EXEMPLO DE USO DE FUNÇÃO
    //  olaMundo();

    // EXEMPLO DE USO DA FUNCAO DECLARADA APOS O MAIN
    // string nome;
    // int idade;
    // cout << "Digite o nome: ";
    // cin >> nome;
    // cout << "Digite a idade: ";
    // cin >> idade;
    // funcaoComParametros(nome, idade);

    // //EXEMPLO DE TERNÁRIO
    // string resultado;
    // resultado = (2 > 3) ? ("maior") : ("menor");
    // cout << resultado;

    // EQUIVALENTE AO FOREACH
    // int a[7];
    // for (auto element : a)
    // {
    //     cout << element << endl;
    // }

    // LENGHT DO ARRAY
    //  int a[7];
    //  cout << "Length of array = " << (sizeof(a) / sizeof(*a)) << endl;

    // EXEMPLO DE PASSAGEM POR REFERENCIA PARA CALCURAR BHASKARA
    //  float x1 = 0, x2 = 0;
    //  float a, b, c;
    //  float delta;
    //  cout << "Digite o valor de a: ";
    //  cin >> a;
    //  cout << "Digite o valor de b: ";
    //  cin >> b;
    //  cout << "Digite o valor de c: ";
    //  cin >> c;
    //  delta = funcaoComReferencia(a, b, c, x1, x2);
    //  cout << "O valor do delta e: " << delta << endl;
    //  cout << "O valor de x1 e: " << x1 << endl;
    //  cout << "O valor de x2 e: " << x2 << endl;

    // EXEMPLO DE STRUCT SIMPLES
    //  struct Pessoa {
    //      string nome;
    //      int idade;
    //      float salario;
    //  };
    //  Pessoa bob;
    //  bob.nome = "Bob Boberson";
    //  bob.idade = 20;
    //  bob.salario = 1100.00;
    //  cout << "Nome: " << bob.nome << "\n";
    //  cout << "Idade: " << bob.idade << "\n";
    //  cout << "Salario: " << bob.salario << "\n";

    // EXEMPLO DE STRUCT COM ARRAYS
    //  struct Pessoa
    //  {
    //      string nome;
    //      int idade;
    //      float salario;
    //  };
    //  int j = 0;
    //  Pessoa pessoas[3];
    //  pessoas[0].nome = "Bob Wilson";
    //  pessoas[0].idade = 33;
    //  pessoas[0].salario = 890.50;
    //  j++;
    //  pessoas[1].nome = "Patrick Donald";
    //  pessoas[1].idade = 37;
    //  pessoas[1].salario = 900.70;
    //  j++;
    //  pessoas[2].nome = "Lula Mouse";
    //  pessoas[2].idade = 43;
    //  pessoas[2].salario = 1890.50;
    //  j++;
    //  //UTILIZANDO FOR NORMAL
    //  // for (int i = 0; i < j; i++)
    //  // {
    //  //     cout << "Nome: " << pessoas[i].nome << "\n";
    //  //     cout << "Idade: " << pessoas[i].idade << "\n";
    //  //     cout << "Salario: " << pessoas[i].salario << "\n\n";
    //  // }
    //  //UTILIZANDO FOR EACH
    //  for (auto element : pessoas)
    //  {
    //      cout << "Nome: " << element.nome << "\n";
    //      cout << "Idade: " << element.idade << "\n";
    //      cout << "Salario: " << element.salario << endl;
    //  }

    return 0;
}

void funcaoComParametros(string nome, int idade)
{
    cout << nome << " tem " << idade << "anos" << endl;
}

float funcaoComReferencia(float a, float b, float c, float &x1, float &x2)
{
    float delta = (pow(b, 2) - 4 * a * c);
    x1 = (-b + (sqrt(delta))) / (2 * a);
    x2 = (-b - (sqrt(delta))) / (2 * a);
    return delta;
}

// O & pega o endereço da variável, deve ser usado para receber o endereço e mudar o valor da variável ou
// simplesmente para mostra o endereço da variável.
// Usamos a passagem por referencia ^^^ quando uma função necessita retornar mais de 1 valor.

// ao utilizar um * criamos um ponteiro, ele aponta para o endereço da memória
//  int *p aponta ao endereço de memória de uma variável
// caso eu de um cout em p ele me mostra o endereço
// caso eu de um cout em *p ele me mostra o valor alocado na variavel
