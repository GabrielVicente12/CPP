#include <iostream>
#include <locale.h>
#include <cstring>
#include <cctype>


using namespace std;

int main() {

     setlocale(LC_ALL, "Portuguese");

     char bolo;

     cout << ("Escolha uam op��o do card�pio para ver o valor: ") << endl;
     cout << ("Digite - C - escolher bolo de chocolate") << endl;
     cout << ("Digite - B - escolher bolo de banana") << endl;
     cout << ("Digite - A - escolher bolo de abacax�") << endl;
     cout << ("Digite - L - escolher bolo de lim�o") << endl;
     cout << ("Digite - F - escolher bolo de fub�") << endl;
     cin >> bolo;
     bolo = toupper (bolo); //A linguagem � case sensitive. Essa fun��o vai identificar tanto Mai�scula como min�scula

     switch (bolo)
     {
     case 'C':
        cout << (" O bolo de chocolate custa: R$ 14,90") << endl; 
        break;
    
    case 'B':
        cout << ("O bolo de banana custa R$ 12,00") << endl;
        break;
    
    case 'A':
        cout << ("O bolo de abacax� custa R$ 13,90") << endl;
        break; 
    
    case 'L':
        cout << ("O bolo de lim�o custa: R$ 17,50") << endl;
        break;

    case 'F':
        cout << ("O bolo de fub� custa: R$ 11,00") << endl;
        break;
     
     default:
        cout << ("Op��o inv�lida!") << endl;
        
     }

     return 0; 
}