#include <iostream>//biblioteca para entrada e saída de dados
using namespace std; //permite usar cout e cin sem precisar escrever std:: antes

int main() { 
    float n1, n2, n3, media; //variáveis para armazenar as notas e a média
    
    cout << "Digite a primeira nota: "; //solicita a primeira nota
    cin >> n1; //lê a primeira nota digitada pelo usuário
    cout << "Digite a segunda nota: ";
    cin >> n2;
    cout << "Digite a terceira nota: ";
    cin >> n3;
    
    media = (n1 + n2 + n3) / 3; //calcula a média das três notas
    
    cout << "A media é: " << media << endl; //exibe a média calculada
    
    return 0;//indica que o programa terminou com sucesso
}

/*
DESAFIO 1 - Calcula a media de notas 
Ele trabalha com entrada de dados , variáveis e operação matemática simples
*/