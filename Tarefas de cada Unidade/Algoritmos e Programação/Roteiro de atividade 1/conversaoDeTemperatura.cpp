#include <iostream>
using namespace std;

int main() {
    float celsius, fahrenheit; //variáveis para armazenar as temperaturas
    
    cout << "Digite a temperatura em Celsius: "; //solicita a temperatura em Celsius
    cin >> celsius; //lê a temperatura digitada pelo usuário
    
    fahrenheit = (celsius * 9 / 5) + 32; //converte a temperatura para Fahrenheit usando a fórmula
    
    cout << "A temperatura em Fahrenheit é: " << fahrenheit << endl; //exibe a temperatura convertida
    
    return 0; //indica que o programa terminou com sucesso
}

/*
Desafio 2 – Conversão de Temperatura
Ele trabalha com entrada de dados, variáveis e operação matemática usando uma fórmula de conversão 
de temperatura para converter de Celsius para Fahrenheit.
*/