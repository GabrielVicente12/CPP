#include <iostream>
#include <locale.h>


using namespace std;

int main() {

     setlocale(LC_ALL, "Portuguese");

     int golsSaoPaulo, golsPalmeiras;

     cout << ("\n*** Placar S?o Paulo x Plameiras ***\n");
     cout << ("Digite a quantidade de gols do S?o Paulo: ") << endl;
     cin >> golsSaoPaulo;
     cout << ("\n Digite a quantidade de gols do Palmeiras:") << endl;
    cin >> golsPalmeiras;

    if (golsSaoPaulo > golsPalmeiras)
    cout << ("São Paulo campeão, chupa porcada!!! ") << endl;

    if (golsPalmeiras > golsSaoPaulo)
    cout << ("Palmeiras ganhou, mas continua sem mundial!");

    return 0;
}