# Estrutura de Dados em C++
<p xmlns:cc="http://creativecommons.org/ns#" xmlns:dct="http://purl.org/dc/terms/">
  <a property="dct:title" rel="cc:attributionURL" href="https://github.com/Jbnado/EstruturaDeDados-Fatec/">
    Estrutura de Dados - FATEC</a> by <a rel="cc:attributionURL dct:creator" property="cc:attributionName" href="https://github.com/Jbnado/">
  João Bernardo
  </a> is marked with 
  <a href="http://creativecommons.org/publicdomain/zero/1.0?ref=chooser-v1" target="_blank" rel="license noopener noreferrer" style="display:inline-block;">
    CC0 1.0 Universal<img style="height:22px!important;margin-left:3px;vertical-align:text-bottom;" src="https://mirrors.creativecommons.org/presskit/icons/cc.svg?ref=chooser-v1">
    <img style="height:22px!important;margin-left:3px;vertical-align:text-bottom;" src="https://mirrors.creativecommons.org/presskit/icons/zero.svg?ref=chooser-v1">
  </a>
</p>

<img alt="GitHub" src="https://img.shields.io/github/license/Jbnado/EstruturaDeDados-Fatec">

## Sobre o Projeto
Este repositório foi criado para acompanhar as aulas de estruturas de dados na FATEC (Faculdade de Tecnologia de Ribeirão Preto), o intuito dele é ter comentários para que qualquer um que venha a ler entenda o que está acontecendo. Para ficar mais claro decidi criar este README, é o primeiro que crio para um projeto e espero que ele lhe ajude a conhecer e entender a linguagem proposta assim como as estruturas de dados utilizadas.

## Hello World
A pasta [Hello World](https://github.com/Jbnado/EstruturaDeDados-Fatec/tree/main/helloWorld) é onde se inicia nosso entendimento na linguagem, na linguagem c é comum o uso de includes, os includes é o comando para incluir bibliotecas prontas para facilitar nossa escrita e entendimento do código, cada biblioteca assim como na realidade tem diversos livros, porém no caso das bibliotecas em c estes livros seriam funções e metódos para serem reutilizados.
### Bibliotecas
As bibliotecas que utilizo em [Hello World](https://github.com/Jbnado/EstruturaDeDados-Fatec/tree/main/helloWorld) são:
- iostream <br>
 Neste [link](https://docs.microsoft.com/pt-br/cpp/standard-library/iostream?view=msvc-170) oficial da microsoft você terá a explicação da biblioteca, repare que a mesma utiliza de algumas outras bibliotecas para seu funcionamento. A utilização dela em nosso [Hello World](https://github.com/Jbnado/EstruturaDeDados-Fatec/tree/main/helloWorld) é para utilizar dos comandos com namespace std que são o std::cout e std::cin, repare que na linha 4 de [HelloWorld](https://github.com/Jbnado/EstruturaDeDados-Fatec/tree/main/helloWorld) eu utilizo do comando "using namespace std;", que não é recomendado a ser utilizado desta forma, e sim especificando quais comandos do std você deseja utilizar no seu arquivo, porém para a didática de um simples [Hello World](https://github.com/Jbnado/EstruturaDeDados-Fatec/tree/main/helloWorld) eu decidi utilizá-lo.
- math.h <br>
  Esta biblioteca contém diversas operações matemáticas prontas para uso de forma simplificada, para um exemplo por favor imagine que você em seu arquivo você necessita várias vezes calcular expoentes, caso seja um iniciante você diversas vezes teria que fazer um for implementando seu expoente e ele seria copiado e colado pelo seu código, daí você com certeza aprenderia funções e criaria sua função de expoente assim reutilizando código da forma correta. Parabéns você aprendeu a implementar sua própria função de expoente, agora por quê não utilizar de uma biblioteca que já temos na linguagem c que implementa uma função similar a qual você necessita? Espero que este exemplo tenha alcançado seu objetivo de entender o uso da math.h em nosso arquivo. Para saber mais sobre outras funções na math.h recomendo este [link](https://www.cplusplus.com/reference/cmath/).

Agora que você entendeu sobre os includes em c, podemos então fazer nossa função principal e assim escrever nosso primeiro Hello World em c++.
```cpp
#include <iostream>

using namespace std;
int main() {
  cout << "Olá Mundo!"
}
```

### Variáveis
Agora podemos dar inicío aos entendimentos das variáveis em c++ e aproveitando do namespace std temos muitos tipos que podemos utilizar em nosso arquivo:
```cpp
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
```

Repare que uma variável bool nada mais é do que um binário, sendo 1 true e 0 false.
Mas afinal o que é uma variável? 
Uma variável é um espaço na memória do computador destinado a um dado que é alterado durante a execução do algoritmo. Para funcionar corretamente, as variáveis precisam ser definidas por nomes e tipos (PEOPLE, 2019).

### Funções
Já falei sobre funções acima porém não expliquei sobre, uma função é um trecho de algoritmo muito bem definido e que será reutilizado uma ou mais vezes na escrita de seu código, por isso nós o encapsulamos e o intulamos função se nos retorne algo, caso não podemos o nomear de um procedimento. o Código se torna mais legível e muito mais organizado utilizando funções, caso queira aprender mais sobre o que é uma função na programação recomendo este [site](https://www.ime.usp.br/~leo/mac2166/2017-1/introducao_funcoes.html#:~:text=A%20ideia%20b%C3%A1sica%20de%20uma,e%20posterior%20invoca%C3%A7%C3%A3o%20%C3%A0%20fun%C3%A7%C3%A3o.).

Para começarmos nosso entendimento sobre funções criaremos um procedimento que escreve no terminal sempre que invocado. Como ele não nos retornará nada seu tipo será void.
Para escrever uma função ela deve sempre vir antes da main para que o computador a localize e a crie e assim possa utilizá-la.
```cpp
// EXEMPLO DE FUNÇÃO
void olaMundo()
{
    cout << "Ola Mundo dentro de uma funcao!\n\n";
}
```

Agora é só utilizar nossa função na main que nada mais é que nossa função principal.
```cpp
// EXEMPLO DE USO DE FUNÇÃO
    olaMundo();
```

Para uma melhor organização podemos também escrever funções após a main, mas para isso devemos inicializá-las antes da main assim mostrando que criamos uma função, porém seu conteúdo virá após a main, para não perdermos tempo irei ensinar a colocar paramêtros em nossa função, os paramêtros nada mais são do que valores que podem ser passados nas chamadas de nossa função e que assim podem alterar o rumo ou preencher espaços predestinados a eles. Para definirmos paramêtros necessitamos o tipo que ele será, tendo esta informação é só o escrever entre os parenteses de uma função:

```cpp
// EXEMPLO DE FUNÇÃO COM PARAMETROS E DECLARADA ANTES DE SER IMPLEMENTADA A MAIN
void funcaoComParametros(string nome, int idade);
```

Após a main então devemos escrever o conteúdo para esta função que será escrever no terminal os paramêtros apresentados em sua chamada:
```cpp
void funcaoComParametros(string nome, int idade)
{
    cout << nome << " tem " << idade << " anos"
         << "\n\n";
}
```

Agora é só testar: 

```cpp
 // EXEMPLO DE USO DA FUNCAO DECLARADA APOS O MAIN
    string nome;
    int idade;
    cout << "Digite o nome: ";
    cin >> nome;
    cout << "Digite a idade: ";
    cin >> idade;
    funcaoComParametros(nome, idade);
```

o trecho "cin >>" é para entrada de valores pelo terminal, o usuário escreverá o nome e a idade, podemos então utilizar de nossa função para escrever estes dados.

![image](https://user-images.githubusercontent.com/73846881/158028792-67255fc3-6147-4a14-99a3-97a502dd04dc.png)

### Estruturas de Decisão
Em c++ temos diversas formas de se tomar uma decisão, aqui abordarei a mais comum que é if, else if e else, que respectivamente traduzidos são se, se não se e se não.
Para se aprofundar no assunto de estruturas de decisões recomendo este [link](https://www.devmedia.com.br/estrutura-de-decisao-em-c-c/24031) que é simples e de fácil entendimento.
Para nosso exemplo irei verificar se 2 é maior que 3 e escrever o resultado disto no terminal:

```cpp
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
```

Sabemos que 2 não é maior que 3, por isso resultado recerá a string menor.
Em c++ este mesmo caso pode ser simplificado com a estrutura de decisão em ternário e em apenas uma linha veja:

```cpp
// EXEMPLO DE TERNÁRIO
    resultado = (2 > 3) ? ("maior") : ("menor");
```

### Estruturas de Repetição
Novamente não irei me ater a todas as estruturas de repetição por aqui, irei lhes apresentar o for loop, uma estrutura de repetição básica e que com certeza você irá utilizar sempre. Caso deseje aprender mais sobre estruturas de repetição lhes indico este [link](https://www.inf.pucrs.br/~pinho/LaproI/ComandosDeRepeticao/Repeticao.html), apenas lhes lembrando que estamos usando c++, ou seja, vocês podem substituir o printf dos exemplos do link pelo cout.

Para lhes apresentar ao for loop antes iremos conhecer um método para guardar vários valores iguais juntos, o array:
```cpp
//tipoDoArray nomeDaVariavel[tamanhoDoArray] = {valores,} // caso decida dar valores iciais utilize de chaves para isto.
int array[5] = {1, 2, 3, 4, 5}
//Exemplo de array de inteiros de nome array com 5 posições, ele está guardando os valores de 1 a 5.
```
Agora imaginem que vocês desejam criar um array vazio de tamanho n no qual guardará valores de 0 a n, como poderiamos fazer isto sem uma estrtura de repetição?
```cpp
int a[2];
//Lembrando que nossa contagem decimal se inicia em 0, por isso 2 posições são as posições 0 e 1.
a[0] = 0;
a[1] = 1;
//Agora nosso aray tem os valores guardados de {0, 1}
```
Agora iremos para uma estrutura de repetição para fazer o mesmo que acima, porém de forma eficiente e eficaz.
o for é uma função e ele recebe três paramêtros:
- O primeiro sendo opcional no qual podemos criar, dar valores e inicializar variáveis.
- O segundo será a condição para que a repetição aconteça.
- E a terceira será algo que acontecerá caso aquela repetição seja concluída com sucesso, ou seja se eu colocar uma variável int contador no terceiro paramêtro com um contador = contador + 1, sempre que uma repetição ocorrer com sucesso o contador receberá ele mesmo + 1, até que a condição do segundo paramêtro seja alcançada.

É de extrema importância que você se atenha ao seu segundo paramêtro, loops infinitos são erros comuns, então sempre tenham atenção para não iniciar um.
```cpp
//for(neste campo você pode inicializar novas variáveis; aqui irá algo que acontecerá sempre que a repetição acontecer){}
int a[2];

for(int contador = 0; contador < 2; contador = contador + 1) {
  a[contador] = contador;
}
```
Percebam que estamos agora fazendo o mesmo que o exemplo anterior, porém dentro de uma repetição, sempre que o contador for menor que 2 que é o tamanho de nosso array o trecho de algoritmo dentro do for irá se repetir.
Começamos nosso contador como 0, 0 é menor que 2 então a na posição de contador que é 0 recebe o valor 0, ou seja a[0] = 0.
A repetição deu certo, então nosso contador receberá ele mesmo mais 1, ou seja 0 + 1 = 1. O contador agora é 1.
Como o contador é 1, e 1 é menor que 2, entraremos novamente no bloco do for.
agora a na posição 1 recebe 1, ou seja a[1] = 1.
A repetição foi concluída com sucesso então o contador será mais uma vez incrementado em 1, então 1 + 1 = 2.
O contador agora é 2, 2 não é menor que 2, é igual. Nossa condição para repetir o for não foi atendida e assim a repetição é finalizada.
Acabamos de usar nosso primeiro for e entender como ele funciona! Que tal agora usarmos o for para mostrar os valores dentro de a?
```cpp
int a[5] = {1, 2, 3, 4, 5};
//FOR LOOP
for(int i = 0; i < 5; i++) {
  cout << a[i] << "\n";
}
```
E este foi nosso for em c++, porém há uma forma de fazer algo similar ao código acima, em outras linguagens como javascript é chamado de forEach, uma repetição por cada elemento de um array.
```cpp
//Caso não saiba o tipo da variável guardada em cada posição de a o c++ tem um tipo chamado auto.
//auto irá automaticamante atribuir o tipo correto para a variável.
//Criamos então uma variável element com o tipo auto.
//A cada repetição element será o valor da posição da repetição em a.
//O que significa que na primeira repetição element será a[0] e assim por diante até que a seja completamente percorrido.
for (auto element : a)
    {
        cout << element << "\n";
    }
```
O pró de se usar este tipo de for é não ter que se preocupar com uma condição para que ocorra, se precisamos percorrer todo o array esta forma é a mais aconselhável.

Agora eu me pergunto se você teve a mesma dúvida que eu. E caso eu necessite fazer um for comum e não saiba o tamanho de meu array?
Entraremos agora em um campo que muitos acham complicado no C/C++, como é uma linguagem que podemos trabalhar com o hardware da máquina há formas de se saber o endereço fisíco de variáveis, calma, não precisa ficar afobado.

### Endereços
A memória RAM (= random access memory) de qualquer computador é uma sequência de bytes.  A posição (0, 1, 2, 3, etc.) que um byte ocupa na sequência é o endereço (= address) do byte.  (É como o endereço de uma casa em uma longa rua que tem casas de um lado só.)  Se e é o endereço de um byte então e+1 é o endereço do byte seguinte.
Cada variável de um programa ocupa um certo número de bytes consecutivos na memória do computador. Uma variável do tipo char ocupa 1 byte.  Uma variável do tipo int ocupa 4 bytes e um double ocupa 8 bytes em muitos computadores.  O número exato de bytes de uma variável é dado pelo operador sizeof. A expressão sizeof (char), por exemplo, vale 1 em todos os computadores e a expressão sizeof (int) vale 4 em muitos computadores.
Cada variável (em particular, cada registro e cada vetor) na memória tem um endereço (DCC-IME-USP, 2018).

Com esta linda explicação espero que se torne mais fácil de entender que sabendo o endereço de uma variável podemos também saber seu tipo, já que cada tipo ocupa certos números de bytes.
Para sabermos o endereço de uma variável usamos o & na frente da mesma.
```cpp
//ENDEREÇOS
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
```
Teremos um resultado como este:

![image](https://user-images.githubusercontent.com/73846881/158032029-6f2a99e4-06c6-40b9-a041-7ff3b42fb8d5.png)

Irei entregar para vocês que como estamos falando de bytes gostariam que percebessem que a memória é mostrada como um número hexadecimal e como as variáveis foram criadas uma a seguir da outra os números decimais vão mudando com um intervalo capaz de contarmos se convertessemos o número hexadecimal para decimal. Logo descobriríamos que o intervalo entre cada uma mostra a quantidade de bytes que estão ocupando.
Em c temos uma função chamada sizeof que nos retorna exatamente a quantidade de bytes que cada variavel ocupa.
```cpp
 cout << "charEndereco = " << sizeof(charEndereco) << "\n";
 cout << "stringEndereco = " << sizeof(stringEndereco) << "\n";
 cout << "intEndereco = " << sizeof(intEndereco) << "\n";
 cout << "floatEndereco = " << sizeof(floatEndereco) << "\n";
 cout << "doubleEndereco = " << sizeof(doubleEndereco) << "\n";
 cout << "boolEndereco = " << sizeof(boolEndereco) << "\n";
 cout << "boolEndereco2 = " << sizeof(boolEndereco2) << "\n\n";
```
![image](https://user-images.githubusercontent.com/73846881/158032560-90ae61fd-701d-4d9a-af23-773a25f73d70.png)

Okay, agora sabemos como termos o endereço de uma variável e como saber os tamanhos que cada variável ocupa, mas lembrem-se estamos nesta jornada de aprendizado pois queremos saber qual o tamanho de determinado array. Um array pode receber n informações de acordo com seu tamanho, então sizeof(a) iria nos retornar seu tamanho em bytes mas não o tamanho em quantidade de dados que pode guardar.
Claro poderiamos ent saber o tipo do array e calcular, exemplo: temos um array int a[tamanho desconhecido] se um int ocupa 4 bytes e o sizeof(a) me retornou 28, podemos dividir 28 em 4 (28/4) e termos 7, logo nosso array tem um tamanho de 7 posições.
Mas e se eu não souber o tipo da variável?

### Ponteiros
Ponteiros é o pesadelo dos programadores iniciantes, mas calma jovem gafanhoto, ele não é um monstro, após prática e conceitos abstratos entender o que é um ponteiro em C é muito simples.

Um ponteiro (= apontador = pointer) é um tipo especial de variável que armazena um endereço.  Um ponteiro pode ter o valor
NULL
que é um endereço inválido.  A macro NULL está definida na interface stdlib.h e seu valor é 0 (zero) na maioria dos computadores.
Se um ponteiro p armazena o endereço de uma variável i, podemos dizer  p aponta para i  ou  p é o endereço de i.  (Em termos um pouco mais abstratos, diz-se que p é uma referência à variável i.)  Se um ponteiro p tem valor diferente de NULL então
*p
é o valor da variável apontada por p.  (Não confunda esse operador * com o operador de multiplicação!)  Por exemplo, se i é uma variável e p vale &i então dizer *p é o mesmo que dizer i (DCC-IME-USP).

Agora vamos abstrair mais esta teoria de ponteiros.
```cpp
int *p;
```
No código acima eu criei um ponteiro int, como dito por Feofiloff no trecho acima um ponteiro pode ter um valor NULL. Quando criamos um ponteiro e não o apontamos para endereço algum ele não passa de um valor NULL. E lembrem-se bem disso, um ponteiro aponta para um endereço, então ele deve receber endereços.

```cpp
// FORMA INCORRETA
int *p;
int a = 3;
p = a;
```
Neste caso p recebeu a que é 3, logo p agora é 3, mas 3 não é um endereço de variável! Precisamos utilizar o & na frente da variável para que o ponteiro receba o endereço!

```cpp
// FORMA CORRETA
int *p;
int a = 3;
p = &a;
cout << "Endereco de a = " << &a << "\n";
cout << "Endereco guardado em p = " << p << "\n";
```
Leiam atentamente o código acima, percebam que como um ponteiro guarda endereços nós não devemos usar & para sabermos o endereço e sim apenas usarmos a variável.
No caso acima p guarda o endereço de a então p é o endereço de a.

Agora que aprendemos o que é um ponteiro e como usá-los de forma básica posso voltar a pergunta, como sabemos o tipo de um array?

Simples, usaremos sizeof(*array). Por quê? Porque sizeof nos retorna o tamanho da variavel, colocando um ponteiro na frente ele vai nos retornar o tamanho de cada item no array.
Ou seja se temos um array de tamanho e tipo desconhecido e usamos sizeof(array) e sizeof(*array) podemos receber de valor um 28 e um 4 respectivamente, 4 é o número de bytes para se guardar um valor int e 28 dividido por 4 é 7, ou seja temos um int array[7].
```cpp
// LENGHT DO ARRAY
int b[7];
cout << sizeof(b) << "\n"; // 28
cout << sizeof(*b) << "\n"; // 4
cout << "Length of array = " << (sizeof(b) / sizeof(*b)) << "\n"; // 7
```

Ótimo, agora que tal usarmos endereços como algo mais útil em nossos algoritmos de c/c++?

### Passagens por referência.

Funções em c/c++ só retornam um valor. Imagine que em nosso algoritmo estamos constantemente refazendo um trecho, por ser um trecho repetido podemos fazer uma função assim reutilizaremos aquele trecho ao invés de repetí-lo, mas e se esta função necessariamente precisa me retornar mais de 1 valor? Para isso usaremos o que aprendemos sobre endereços para utilizar a técnica de passagem por referência!

Para o exemplo eu irei criar uma função que calcula bháskara, ela irá nos retornar o delta, mas também, teremos os valores de x1 e x2 que são nossas raízes.
Para calcular bháskara precisamos dos 3 coeficientes: a, b e c. Como ela irá nos retornar delta precisamos de uma variavel que possa receber casas decimais para isso utilizarei float. Para calcular a potência utilizarei da função pow da biblioteca math.h. pow recebe 2 parametros, sendo o primeiro a base e como segundo o expoente.

```cpp
float calculaBhaskara(float a, float b, float c) {
float delta = (pow(b, 2) - 4 * a * c);
    float x1 = (-b + (sqrt(delta))) / (2 * a);
    float x2 = (-b - (sqrt(delta))) / (2 * a);
    return delta;
}

int main() {
  cout << calculaBhaskara(-1, 2, 3) << "\n";
  return 0;
}
```
Pronto temos nossa função que calcula bháskara mas que só me retorna o delta. Agora iremos modificá-la para que receba mais 2 paramêtros: x1 e x2. Esses novos dois paramêtros serão criados já com o & na frente, pois precisaremos dos endereços das variáveis passada para a função. Pense comigo, se eu tiver o endereço de uma variável criada na função main posso alterar o valor guardado naquele endereço de memória.
Vamos para mais um exemplo antes de retornarmos a bháskara:

```cpp
void alterarValorPorReferencia(int &a){
  a = 5;
}

int main() {
  int a = 1;
  cout << a << "\n"; // 1
  alterarValorPorReferencia(a);
  cout << a << "\n"; // 5
  return 0;
}
```
Percebam que quando criei um paramêtro na função coloquei o & na frente, pois quero pegar o endereço de memória da variável que eu receber. Tendo este endereço qualquer mudança de valor daquela variável na função irá afetar a variável que você passou para a função na main.
Por isso nosso a na main se inicia como 1, mas após ser passado como paramêtro na função ele agora é 5.
Utilizamos de passagem por referência para podermos alterar valores na main dentro de uma função, e é usando esta técnica que poderemos retornar nossas raízes na função de calcular bháskara.

```cpp
float calculaBhaskara(float a, float b, float c, float &x1, float &x2)
{
    float delta = (pow(b, 2) - 4 * a * c);
    x1 = (-b + (sqrt(delta))) / (2 * a);
    x2 = (-b - (sqrt(delta))) / (2 * a);
    return delta;
}

int main() {
  float x1 = 0, x2 = 0;
  float a, b, c;
  float delta;
  cout << "Digite o valor de a: ";
  cin >> a;
  cout << "Digite o valor de b: ";
  cin >> b;
  cout << "Digite o valor de c: ";
  cin >> c;
  delta = calculaBhaskara(a, b, c, x1, x2);
  cout << "O valor do delta e: " << delta << endl;
  cout << "O valor de x1 e: " << x1 << endl;
  cout << "O valor de x2 e: " << x2 << endl;
}
```
Agora temos os valores de x1 e x2 sendo nossas 2 raízes. Utilizar a passagem por referência é a melhor forma de se alterar valores da main dentro de funções.

### Struct

# Referências
- PEOPLE, O que são variáveis e para que elas servem na programação? Disponível em: <https://www.people.com.br/noticias/informatica/o-que-sao-variaveis-e-para-que-elas-servem-na-programacao>. Acesso em 12/03/2022.
- Feofiloff, P. Linguagem C: endereços e ponteiros. DCC-IME-USP, set 2018. Disponível em <https://www.ime.usp.br/~pf/algoritmos/aulas/pont.html>. Acesso em 12/03/2022.
