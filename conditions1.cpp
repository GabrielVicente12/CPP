#include <iostream>
#include <locale.h>
#include <iomanip> 
#include <cstdlib>

using namespace std;

int main() {

    int idade;

    setlocale(LC_ALL, "Portuguese");

    cout << ("Digite a sua idade: ") << endl;
    cin >> idade;

    if (idade >= 18) // Verifica se a pessoa tem idade maior ou igual a 18
    cout << ("Voc? j? pode tirar sua CNH!") << endl;

    else

    cout << ("Voc? n?o possui idade suficiente para tirar a CNH") << endl;

    return 0;
}
 
 