#include <iostream> //biblioteca de entrada e saída
using namespace std; //evita a necessidade de usar "std::" antes de cada comando da biblioteca padrão

int main(){ //função principal do programa

    float celsius, fahrenheit; //declaração de variáveis para armazenar a temperatura em Celsius e Fahrenheit

    cout << "Digite a temperatura em Celsius: "; //solicita ao usuário que digite a temperatura em Celsius
    cin >> celsius; //lê a temperatura em Celsius digitada pelo usuário e armazena na variável "celsius"

    fahrenheit = (celsius * 9/5) + 32; //converte a temperatura de Celsius para Fahrenheit usando a fórmula: F = (C * 9/5) + 32

    if(celsius < 0){//verifica se a temperatura em Celsius é menor que zero
        cout << "Temperatura abaixo de zero." << endl; //exibe uma mensagem indicando que a temperatura está abaixo de zero
    }

    cout << "Temperatura em Fahrenheit: " << fahrenheit << endl; //exibe a temperatura convertida em Fahrenheit para o usuário

    return 0; //indica que o programa terminou com sucesso
}
/*
Desafio 2 – Conversão de Temperatura
Faça um programa que leia uma temperatura em Celsius e a converta para Fahrenheit. 
A fórmula de conversão é: F = (C * 9/5) + 32. O programa deve exibir a temperatura 
convertida e informar se a temperatura em Celsius está abaixo de zero.
Ele trabalha com entrada de dados, variáveis, operação matemática simples e estrutura condicional (if).
*/