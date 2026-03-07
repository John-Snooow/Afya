#include <iostream>// biblioteca de entrada e saída
using namespace std;// evita a necessidade de usar "std::" antes de cada comando da biblioteca padrão

int main(){// função principal do programa

    int n;// declaração de variável para armazenar o número digitado pelo usuário
    long long fatorial = 1;// declaração de variável para armazenar o resultado do fatorial, inicializada com 1

    cout << "Digite um numero: ";
    cin >> n;

    for(int i = 1; i <= n; i++){// loop que itera de 1 até n, multiplicando o valor atual de "fatorial" pelo valor de "i" em cada iteração
        fatorial = fatorial * i;// equivalente a fatorial *= i;
    }

    cout << "Fatorial = " << fatorial << endl;// exibe o resultado do fatorial para o usuário

    return 0;// indica que o programa terminou com sucesso
}

/*
DESAFIO 5 - Cálculo de fatorial
Um programa que leia um número inteiro (positivo) e calcule o seu fatorial. O fatorial de um número "n" é o produto de todos os números inteiros positivos menores ou iguais a "n". Por exemplo, o fatorial de 5 (5!) é igual a 5 x 4 x 3 x 2 x 1 = 120. O programa deve exibir o resultado do fatorial para o usuário.
Ele trabalha com entrada de dados, variáveis, loop (for) e operação matemática simples para calcular o fatorial de um número inteiro positivo. O resultado é armazenado em uma variável do tipo "long long" para acomodar valores maiores, já que o fatorial cresce rapidamente com o aumento do número.
*/