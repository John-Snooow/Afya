#include <iostream>
using namespace std;

int main() {
    float num1, num2, num3, maior;

    cout << "Digite o primeiro numero: ";
    cin >> num1;

    cout << "Digite o segundo numero: ";
    cin >> num2;

    cout << "Digite o terceiro numero: ";
    cin >> num3;

    maior = num1; // assume que o primeiro número é o maior inicialmente

    if (num2 > maior) { // compara o segundo número com o maior atual
        maior = num2; // se o segundo número for maior, atualiza o maior
    }

    if (num3 > maior) { // compara o terceiro número com o maior atual
        maior = num3; // se o terceiro número for maior, atualiza o maior
    }

    cout << "O maior numero e: " << maior << endl; 

    return 0;
}

/*
    O programa lê três números do usuário e determina qual deles é o maior. Ele compara cada número com o maior atual e atualiza o valor do maior conforme necessário. No final, exibe o maior número encontrado.
*/