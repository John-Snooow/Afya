#include <iostream>// biblioteca de entrada e saída
using namespace std;// evita a necessidade de usar "std::" antes de cada comando da biblioteca padrão

int main(){// função principal do programa

    int vetor[10];// declaração de um vetor de inteiros com capacidade para armazenar 10 elementos
    int valor;// declaração de variável para armazenar o valor a ser buscado
    int i=0;// declaração e inicialização de variável para controle do loop

    while(i<10){   // loop que itera enquanto "i" for menor que 10, solicitando ao usuário que digite um número para cada posição do vetor
        cout << "Digite um numero: ";
        cin >> vetor[i];
        i++;// incrementa o valor de "i" em 1 a cada iteração para avançar para a próxima posição do vetor
    }

    cout << "Digite o numero que deseja buscar: ";
    cin >> valor;// lê o valor digitado pelo usuário e armazena na variável "valor"

    for(int j=0;j<10;j++){// loop que itera de 0 a 9, verificando se o valor armazenado na posição "j" do vetor é igual ao valor buscado

        if(vetor[j] == valor){// verifica se o valor armazenado na posição "j" do vetor é igual ao valor buscado
            cout << "Valor encontrado!" << endl;// exibe uma mensagem indicando que o valor foi encontrado
            goto fim;// utiliza a instrução "goto" para pular para o rótulo "fim", encerrando a busca e evitando a necessidade de continuar iterando pelo vetor
        }

    }

    cout << "Valor nao encontrado." << endl;// se o loop terminar sem encontrar o valor, exibe uma mensagem indicando que o valor não foi encontrado

    fim:// rótulo "fim" para onde o programa irá pular caso o valor seja encontrado

    return 0;// indica que o programa terminou com sucesso
}

/*
DESAFIO 7 - Busca em vetor + Uso de goto
Um programa que declare um vetor de inteiros com capacidade para armazenar 10 elementos. Em seguida, solicita ao usuário que digite 10 números inteiros para preencher o vetor. Depois disso, o programa deve pedir ao usuário que digite um valor a ser buscado no vetor. O programa deve percorrer o vetor e verificar se o valor existe nele. Se o valor for encontrado, o programa deve exibir uma mensagem indicando que o valor foi encontrado e encerrar a busca usando a instrução "goto". Se o valor não for encontrado após percorrer todo o vetor, o programa deve exibir uma mensagem indicando que o valor não foi encontrado.
Ele trabalha com entrada de dados, vetores, loops e a instrução "goto" para controlar o fluxo do programa. O programa utiliza um loop "while" para preencher o vetor com os números digitados pelo usuário e um loop "for" para buscar o valor no vetor. A instrução "goto" é usada para encerrar a busca imediatamente quando o valor é encontrado, evitando iterações desnecessárias. O uso de "goto" é geralmente desencorajado em programação moderna devido a questões de legibilidade e manutenção do código, mas neste caso, é utilizado conforme solicitado no desafio.
*/