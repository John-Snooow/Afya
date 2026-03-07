#include <iostream>// biblioteca de entrada e saída
using namespace std;// evita a necessidade de usar "std::" antes de cada comando da biblioteca padrão

int main(){// função principal do programa

    float nota;// declaração de variável para armazenar a nota do aluno

    cout << "Digite a nota: ";// solicita ao usuário que digite a nota do aluno
    cin >> nota;// lê a nota digitada pelo usuário e armazena na variável "nota"

    if(nota >= 9){// verifica se a nota é maior ou igual a 9
        cout << "Conceito A";// exibe "Conceito A" para o usuário
    }
    else if(nota >= 7){
        cout << "Conceito B";
    }
    else if(nota >= 5){
        cout << "Conceito C";
    }
    else if(nota >= 3){
        cout << "Conceito D";
    }
    else{
        cout << "Conceito E";
    }

    return 0;// indica que o programa terminou com sucesso
}

/*
DESAFIO 3 - Classificação de notas
Faça um programa que leia uma nota de um aluno e exiba a classificação correspondente.
A classificação deve ser feita da seguinte forma:
- Nota >= 9: Conceito A
- Nota >= 7: Conceito B
- Nota >= 5: Conceito C
- Nota >= 3: Conceito D
- Nota < 3: Conceito E
*/