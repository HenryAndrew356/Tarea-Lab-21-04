#include <iostream>
using namespace std;
int main() {
    int a{ 0 };
    int b{ 1 };
    int c{ 2 };
    int d{ 3 };
    int e{ 4 };
    cout << "Longitud de cara\t  Area Superficial \t  Volumen del \n";
    cout << "  del cubo. (cm) \t  del cubo. (cm2)     del cubo. (cm3)\n";
    cout << a << "\t" << "                  " << a * a * 6 << "\t" << "                  " << a * a * a << "\n";
    cout << b << "\t" << "                  " << b * b * 6 << "\t" << "                  " << b * b * b << "\n";
    cout << c << "\t" << "                  " << c * c * 6 << "\t" << "              " << c * c * c << "\n";
    cout << d << "\t" << "                  " << d * d * 6 << "\t" << "              " << d * d * d << "\n";
    cout << e << "\t" << "                  " << e * e * 6 << "\t" << "              " << e * e * e << endl;
    return 0;
}