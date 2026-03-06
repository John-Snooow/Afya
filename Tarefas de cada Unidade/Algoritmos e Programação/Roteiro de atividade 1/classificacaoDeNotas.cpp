#include <iostream>
using namespace std;

int main()
{
    float nota;
    char conceito;

    cout << "Digite a nota: "; // solicita a nota do usuário
    cin >> nota;               // lê a nota digitada pelo usuário

    if (nota >= 9)
        conceito = 'A'; // atribui o conceito A para notas maiores ou iguais a 9
    else if (nota >= 7)
        conceito = 'B'; // atribui o conceito B para notas entre 7 e 8.99
    else if (nota >= 5)
        conceito = 'C'; // atribui o conceito C para notas entre 5 e 6.99
    else if (nota >= 3)
        conceito = 'D'; // atribui o conceito D para notas entre 3 e 4.99
    else
        conceito = 'E'; // atribui o conceito E para notas menores que 3

    cout << "O conceito do aluno e: " << conceito << endl; // exibe o conceito correspondente à nota
    return 0;                                              // indica que o programa terminou com sucesso

    /*
    O programa lê uma nota do usuário e classifica essa nota em um conceito de A a E, de acordo com os seguintes critérios:
    - A: nota maior ou igual a 9
    - C: nota entre 5 e 6.99
    - D: nota entre 3 e 4.99
    - E: nota menor que 3
    - B: nota entre 7 e 8.99
    */
}