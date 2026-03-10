#include <iostream>// biblioteca de entrada e saída
using namespace std;// evita a necessidade de usar "std::" antes de cada comando da biblioteca padrão

int main(){// função principal do programa

    int vetor[10];// declaração de um vetor de inteiros com capacidade para armazenar 10 elementos

    for(int i=0;i<10;i++){// loop que itera de 0 a 9, solicitando ao usuário que digite um número para cada posição do vetor
        cout << "Digite um numero: ";
        cin >> vetor[i];// lê o número digitado pelo usuário e armazena na posição "i" do vetor
    }

    cout << "Valores digitados:" << endl;// exibe uma mensagem indicando que os valores digitados serão listados a seguir

    for(int i=0;i<10;i++){ // loop que itera de 0 a 9, exibindo o valor armazenado em cada posição do vetor para o usuário
        cout << vetor[i] << endl;// exibe o valor armazenado na posição "i" do vetor seguido de uma quebra de linha
    }

    return 0;// indica que o programa terminou com sucesso
}

/*
DESAFIO 6 - Vetor
Um programa que declare um vetor de inteiros com capacidade para armazenar 10 elementos. Em seguida, solicita ao usuário que digite 10 números inteiros para preencher o vetor. Após a entrada dos números, o programa deve exibir os valores digitados pelo usuário.
Ele trabalha com entrada de dados, vetores e loops para preencher e exibir os elementos do vetor. O programa utiliza um loop "for" para iterar sobre as posições do vetor, permitindo que o usuário insira os valores e, posteriormente, exiba-os. O uso de vetores permite armazenar múltiplos valores em uma única variável, facilitando a manipulação e organização dos dados.
*/