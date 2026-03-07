#include <iostream> // biblioteca de entrada e saída
using namespace std; // evita a necessidade de usar "std::" antes de cada comando da biblioteca padrão

int main(){ // função principal do programa

    int a,b,c,maior;// declaração de variáveis para armazenar os três números digitados pelo usuário e o maior número encontrado

    cout << "Digite tres numeros: ";// solicita ao usuário que digite três números
    cin >> a >> b >> c;// lê os três números digitados pelo usuário e armazena nas variáveis "a", "b" e "c"

    maior = a;// assume inicialmente que "a" é o maior número

    if(b > maior){ // verifica se "b" é maior que o maior número atual
        maior = b;// se for, atualiza o valor do maior número para "b"
    }

    if(c > maior){ // verifica se "c" é maior que o maior número atual
        maior = c;//    se for, atualiza o valor do maior número para "c"
    }

    cout << "Maior numero: " << maior << endl;// exibe o maior número encontrado para o usuário

    return 0;// indica que o programa terminou com sucesso
}
/*
    O programa lê três números do usuário e determina qual deles é o maior. Ele compara cada número com o maior atual e atualiza o valor do maior conforme necessário. No final, exibe o maior número encontrado.
*/