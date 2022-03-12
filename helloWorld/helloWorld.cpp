#include <iostream>
#include <math.h>

using namespace std;

// EXEMPLO DE FUNÇÃO
void olaMundo()
{
    cout << "Ola Mundo dentro de uma funcao!\n\n";
}

// EXEMPLO DE FUNÇÃO COM PARAMETROS E DECLARADA ANTES DE SER IMPLEMENTADA A MAIN
void funcaoComParametros(string nome, int idade);

// FUNÇÃO COM PASSAGEM DE REFERÊNCIA, CALCULAREMOS BHASKARA E RETORNAREMOS 3 VALORES :)
float calculaBhaskara(float a, float b, float c, float &x1, float &x2);

// FUNÇÃO PRINCIPAL
void alterarValorPorReferencia(int &a)
{
    a = 5;
}

int main()
{
    // HELLO WORLD EM C++
    cout << "Ola Mundo!\n\n";

    // EXEMPLOS DE VARIAVEIS
    char charVar = 't';
    string stringVar = "String";
    int intVar = 298;
    float floatVar = 49.95;
    double doubleVar = 99.9999;
    bool boolvar = true;     // Ou igual a false
    bool boolvar2 = (2 > 3); // Também podemos utilizar de lógicas para recermos um bool
    cout << "charVar = " << charVar << "\n";
    cout << "stringVar = " << stringVar << "\n";
    cout << "intVar = " << intVar << "\n";
    cout << "floatVar = " << floatVar << "\n";
    cout << "doubleVar = " << doubleVar << "\n";
    cout << "boolvar = " << boolvar << "\n";
    cout << "boolvar2 = " << boolvar2 << "\n\n";

    // EXEMPLO DE USO DE FUNÇÃO
    olaMundo();

    // EXEMPLO DE USO DA FUNCAO DECLARADA APOS O MAIN
    string nome;
    int idade;
    cout << "Digite o nome: ";
    cin >> nome;
    cout << "Digite a idade: ";
    cin >> idade;
    funcaoComParametros(nome, idade);

    string resultado;
    // EXEMPLO DE IF
    if (2 > 3)
    {
        resultado = "maior";
    }
    else
    {
        resultado = "menor";
    }
    // EXEMPLO DE TERNÁRIO
    resultado = (2 > 3) ? ("maior") : ("menor");
    cout << resultado << "\n\n";

    int a[5] = {1, 2, 3, 4, 5};
    // FOR LOOP
    for (int i = 0; i < 5; i++)
    {
        cout << a[i] << "\n";
    }
    // EQUIVALENTE AO FOREACH
    for (auto element : a)
    {
        cout << element << "\n";
    }
    cout << "\n\n";

    // ENDEREÇOS
    char charEndereco = 't';
    string stringEndereco = "String";
    int intEndereco = 298;
    float floatEndereco = 49.95;
    double doubleEndereco = 99.9999;
    bool boolEndereco = true;
    bool boolEndereco2 = (2 > 3);
    cout << "charEndereco = " << &charEndereco << "\n";
    cout << "stringEndereco = " << &stringEndereco << "\n";
    cout << "intEndereco = " << &intEndereco << "\n";
    cout << "floatEndereco = " << &floatEndereco << "\n";
    cout << "doubleEndereco = " << &doubleEndereco << "\n";
    cout << "boolEndereco = " << &boolEndereco << "\n";
    cout << "boolEndereco2 = " << &boolEndereco2 << "\n\n";
    // SIZE OF
    cout << "charEndereco = " << sizeof(charEndereco) << "\n";
    cout << "stringEndereco = " << sizeof(stringEndereco) << "\n";
    cout << "intEndereco = " << sizeof(intEndereco) << "\n";
    cout << "floatEndereco = " << sizeof(floatEndereco) << "\n";
    cout << "doubleEndereco = " << sizeof(doubleEndereco) << "\n";
    cout << "boolEndereco = " << sizeof(boolEndereco) << "\n";
    cout << "boolEndereco2 = " << sizeof(boolEndereco2) << "\n\n";

    // Ponteiros
    int *p;
    int v = 3;
    p = &v;
    cout << "Endereco de v = " << &v << "\n";
    cout << "Endereco guardado em p = " << p << "\n";

    // LENGHT DO ARRAY
    int b[7];
    cout << sizeof(b) << "\n";
    cout << sizeof(*b) << "\n";
    cout << "Length of array = " << (sizeof(b) / sizeof(*b)) << "\n";

    // EXEMPLO DE PASSAGEM POR REFERENCIA
    int exemplo = 1;
    cout << "exemplo:" << exemplo << "\n";
    alterarValorPorReferencia(exemplo);
    cout << "exemplo:" << exemplo << "\n";

    // EXEMPLO DE PASSAGEM POR REFERENCIA PARA CALCURAR BHASKARA
    float x1 = 0, x2 = 0;
    float coeficienteA, coeficienteB, coeficienteC;
    float delta;
    cout << "Digite o valor de coeficienteA: ";
    cin >> coeficienteA;
    cout << "Digite o valor de coeficienteB: ";
    cin >> coeficienteB;
    cout << "Digite o valor de coeficienteC: ";
    cin >> coeficienteC;
    delta = calculaBhaskara(coeficienteA, coeficienteB, coeficienteC, x1, x2);
    cout << "O valor do delta e: " << delta << endl;
    cout << "O valor de x1 e: " << x1 << endl;
    cout << "O valor de x2 e: " << x2 << endl;

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
    cout << nome << " tem " << idade << " anos"
         << "\n\n";
}

float calculaBhaskara(float a, float b, float c, float &x1, float &x2)
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
