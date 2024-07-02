#include <iostream>
#include <string>

using namespace std;

int main() {
    
    string nome;
    double nota1, nota2, nota3, media;

    
    cout << "Digite o nome do aluno: ";
    getline(cin, nome); 
    cout << "Digite a primeira nota: ";
    cin >> nota1;
    cout << "Digite a segunda nota: ";
    cin >> nota2;
    cout << "Digite a terceira nota: ";
    cin >> nota3;

    media = (nota1 + nota2 + nota3) / 3.0;

    cout << "Aluno " << nome << " possui média " << media << endl;

    return 0;
}
