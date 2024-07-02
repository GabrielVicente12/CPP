#include <iostream>

using namespace std;

int main() {

    double fahrenheit;

    cout << "Digite a temperatura em graus Fahrenheit: ";
    cin >> fahrenheit;

    double celsius = (fahrenheit - 32) * (5.0 / 9.0);

    cout << "A temperatura em Celsius é: " << celsius << " graus Celsius" << endl;

    return 0;
}
