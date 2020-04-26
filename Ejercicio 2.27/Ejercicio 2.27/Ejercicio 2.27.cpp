#include <iostream>
using namespace std;
int main() {
    char tecla;
    cout << "Ingresa un caracter:";
    cin >> tecla;
    cout << static_cast<int>(tecla) << endl;
}