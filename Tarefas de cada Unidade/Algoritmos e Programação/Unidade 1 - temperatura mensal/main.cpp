#include <iostream>
#include <iomanip>
#include <limits>
#include <string>
using namespace std;

int main() {
    const int MAX_DIAS = 31;
    const string CIDADE = "Rio de Janeiro - RJ";
    const string LINK_FONTE = "https://www.accuweather.com/";

    int diasNoMes;
    string mesAno;
    double temperaturas[MAX_DIAS];
    int dia[MAX_DIAS];

    cout << "=============================================\n";
    cout << " Acompanhamento Mensal de Temperatura\n";
    cout << " Cidade: " << CIDADE << "\n";
    cout << "=============================================\n\n";

    cout << "Informe o mes/ano de referencia (ex.: Janeiro/2026): ";
    getline(cin, mesAno);

    cout << "Informe a quantidade de dias do mes (28 a 31): ";
    while (!(cin >> diasNoMes) || diasNoMes < 28 || diasNoMes > 31) {
        cout << "Valor invalido. Digite um numero inteiro entre 28 e 31: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    cout << "\nDigite a temperatura de cada dia (" << CIDADE << "):\n";
    for (int i = 0; i < diasNoMes; i++) {
        cout << "Dia " << (i + 1) << ": ";
        while (!(cin >> temperaturas[i])) {
            cout << "Temperatura invalida. Digite um valor numerico para o Dia " << (i + 1) << ": ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        dia[i] = i + 1;
    }

    double limite;
    cout << "\nInforme o valor de referencia para contagem (ex.: 30): ";
    while (!(cin >> limite)) {
        cout << "Valor invalido. Digite um numero para o limite: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    double soma = 0.0;
    double maior = temperaturas[0];
    double menor = temperaturas[0];
    int diaMaior = 1;
    int diaMenor = 1;
    int acimaLimite = 0;

    for (int i = 0; i < diasNoMes; i++) {
        soma += temperaturas[i];

        if (temperaturas[i] > maior) {
            maior = temperaturas[i];
            diaMaior = i + 1;
        }
        if (temperaturas[i] < menor) {
            menor = temperaturas[i];
            diaMenor = i + 1;
        }
        if (temperaturas[i] > limite) {
            acimaLimite++;
        }
    }

    double media = soma / diasNoMes;

    // Ordenacao crescente por temperatura, mantendo o dia correspondente.
    for (int i = 0; i < diasNoMes - 1; i++) {
        for (int j = 0; j < diasNoMes - 1 - i; j++) {
            if (temperaturas[j] > temperaturas[j + 1]) {
                double auxTemp = temperaturas[j];
                temperaturas[j] = temperaturas[j + 1];
                temperaturas[j + 1] = auxTemp;

                int auxDia = dia[j];
                dia[j] = dia[j + 1];
                dia[j + 1] = auxDia;
            }
        }
    }

    cout << "\n=============================================\n";
    cout << " Resultado da Analise\n";
    cout << " Cidade: " << CIDADE << "\n";
    cout << " Mes/Ano: " << mesAno << "\n";
    cout << " Fonte: " << LINK_FONTE << "\n";
    cout << "=============================================\n";

    cout << fixed << setprecision(2);
    cout << "Temperatura media do mes: " << media << " C\n";
    cout << "Maior temperatura registrada: " << maior << " C (Dia " << diaMaior << ")\n";
    cout << "Menor temperatura registrada: " << menor << " C (Dia " << diaMenor << ")\n";
    cout << "Dias com temperatura acima de " << limite << " C: " << acimaLimite << "\n";

    cout << "\nTemperaturas em ordem crescente:\n";
    for (int i = 0; i < diasNoMes; i++) {
        cout << "Dia " << setw(2) << dia[i]
             << " -> " << setw(6) << temperaturas[i] << " C\n";
    }

    return 0;
}
