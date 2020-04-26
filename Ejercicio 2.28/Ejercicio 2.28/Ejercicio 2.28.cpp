#include <iostream>
using namespace std;
int main()
{
    int a{ 0 };
    int b{ 0 };
    int c{ 0 };
    int d{0};
    int e{ 0 };
    cout << "Ingrese un numero de 4 digitos: ";
    cin >> e;
    a = e / 1000;
    b = (e % 1000) / 100;
    c = ((e % 1000) % 100) / 10;
    d = (((e % 1000) % 100) % 10);
    cout << d << "  " << c << "  " << b << "  " << a;
}