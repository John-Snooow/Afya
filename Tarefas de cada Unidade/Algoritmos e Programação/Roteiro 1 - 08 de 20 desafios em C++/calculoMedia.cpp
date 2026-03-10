#include <iostream> // biblioteca de entrada e saída
using namespace std; // evita a necessidade de usar "std::" antes de cada comando da biblioteca padrão

int main() { // função principal do programa

    float matematica, portugues, ciencias, media; // declaração de variáveis para armazenar as notas de Matemática, Português, Ciências e a média

    cout << "Digite a nota de Matematica: "; // solicita ao usuário que digite a nota de Matemática
    cin >> matematica; // lê a nota de Matemática digitada pelo usuário e armazena na variável "matematica"

    cout << "Digite a nota de Portugues: ";
    cin >> portugues; 

    cout << "Digite a nota de Ciencias: "; 
    cin >> ciencias; 

    media = (matematica + portugues + ciencias) / 3; // calcula a média das notas usando a fórmula: média = (nota1 + nota2 + nota3) / 3

    if(media >= 7){ // verifica se a média é maior ou igual a 7
        cout << "Media: " << media << " - Aprovado" << endl; // exibe a média calculada e a mensagem "Aprovado" para o usuário
    }else{ // caso contrário, se a média for menor que 7
        cout << "Media: " << media << " - Reprovado" << endl; // exibe a média calculada e a mensagem "Reprovado" para o usuário
    }

    return 0; // indica que o programa terminou com sucesso
}
/*
DESAFIO 1 - Calcula a media de notas 
Faça um programa que leia as notas de um aluno em três disciplinas: Matemática, Português e Ciências. Em seguida, calcule a média dessas notas e exiba se o aluno foi aprovado ou reprovado. Considere que a média mínima para aprovação é 7.
*/