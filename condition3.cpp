#include <iostream>
#include <locale.h>


using namespace std;

int main() {

     setlocale(LC_ALL, "Portuguese");

     int opc;

     cout << ("Diigte 1 para prato do dia\n");
     cout << ("DIgite 2 para lasanha\n");
     cout << ("Digite 3 para picanha grelhada\n");
     cout << ("Digite 4 para salada simples\n");

     cin >> opc;

     switch (opc)
     {
        case 1:
            cout << ("Prato do dia: R$ 17,00");
        break;
        case 2:
            cout << ("Lasanaha: R$19,90");
        break;
        case 3:
            cout << ("Picanha Grelhada: R$28,90");
        break;
        case 4:
            cout << ("Salada simples: R$ 7,50");
        break;
        default:
            cout << ("Opção inválida");
        
     }

     return 0;
}