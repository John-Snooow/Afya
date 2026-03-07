#include <iostream>  // biblioteca de entrada e saída
using namespace std; // evita a necessidade de usar "std::" antes de cada comando da biblioteca padrão

int main()
{ // função principal do programa

    float a, b, c; // declaração de variáveis para armazenar os três lados do triângulo

    cout << "Digite os tres lados: "; // solicita ao usuário que digite os três lados do triângulo
    cin >> a >> b >> c;               // lê os três lados digitados pelo usuário e armazena nas variáveis "a", "b" e "c"

    if ((a + b > c) && (a + c > b) && (b + c > a))
    { // verifica se a soma de dois lados é maior que o terceiro lado para os três casos possíveis
        cout << "Forma um triangulo." << endl;
    }
    else
    { // caso contrário, se a soma de dois lados não for maior que o terceiro lado para pelo menos um dos casos, então os lados não formam um triângulo
        cout << "Nao forma um triangulo." << endl;
    }

    return 0; // indica que o programa terminou com sucesso
}

/*

    DESAFIO 4 - Verificação de triângulo
    Ele trabalha com entrada de dados, variáveis e estrutura condicional (if) para verificar a validade dos lados do triângulo.
    programa que leia os três lados de um triângulo e verifique se eles formam um triângulo válido. Para que os lados formem um triângulo, a soma de dois lados deve ser maior que o terceiro lado para todos os casos possíveis. O programa deve exibir uma mensagem indicando se os lados formam ou não um triângulo.

    OBS: quando for digitar o valor dos lados dê espaço entre eles, por exemplo: 3 4 5

 */
