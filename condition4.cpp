#include <iostream>
#include <locale.h>
#include <cstring>
#include <cctype>


using namespace std;

int main() {

     setlocale(LC_ALL, "Portuguese");

     char bolo;

     cout << ("Escolha uam opção do cardápio para ver o valor: ") << endl;
     cout << ("Digite - C - escolher bolo de chocolate") << endl;
     cout << ("Digite - B - escolher bolo de banana") << endl;
     cout << ("Digite - A - escolher bolo de abacaxí") << endl;
     cout << ("Digite - L - escolher bolo de limão") << endl;
     cout << ("Digite - F - escolher bolo de fubá") << endl;
     cin >> bolo;
     bolo = toupper (bolo); //A linguagem é case sensitive. Essa função vai identificar tanto Maiúscula como minúscula

     switch (bolo)
     {
     case 'C':
        cout << (" O bolo de chocolate custa: R$ 14,90") << endl; 
        break;
    
    case 'B':
        cout << ("O bolo de banana custa R$ 12,00") << endl;
        break;
    
    case 'A':
        cout << ("O bolo de abacaxí custa R$ 13,90") << endl;
        break; 
    
    case 'L':
        cout << ("O bolo de limão custa: R$ 17,50") << endl;
        break;

    case 'F':
        cout << ("O bolo de fubá custa: R$ 11,00") << endl;
        break;
     
     default:
        cout << ("Opção inválida!") << endl;
        
     }

     return 0; 
}