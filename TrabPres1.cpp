#include <iostream>
#include <string>
#include <iomanip> 

using namespace std;

int main() {

    string nome;
    double distancia_km;
    int tempo_min;

    cout << "Digite seu nome: ";
    getline(cin, nome); 
    cout << "Digite a quantidade de quilômetros percorridos: ";
    cin >> distancia_km;
    cout << "Digite o tempo gasto em minutos: ";
    cin >> tempo_min;

    
    double velocidade_media = distancia_km / (tempo_min / 60.0);

   
    cout << "Olá " << nome << ", você percorreu " << distancia_km << " km em "
         << tempo_min << " minutos. Sua velocidade média foi: "
         << fixed << setprecision(1) << velocidade_media << " km/h." << endl;

    return 0;
}
