#include <iostream>
#include <cstdlib>

using namespace std;

int main() {

int contador = 0;

while(contador < 5)
{
    cout << "contador =" << contador << endl;
    contador = contador + 1;
}
cout << "ACABOU!" << endl;

return 0;
}