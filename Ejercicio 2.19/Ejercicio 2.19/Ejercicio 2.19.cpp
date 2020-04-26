#include<iostream>
using namespace std;
int main()
{
	int x{ 0 };
	int y{ 0 };
	int z{ 0 };
	int mayor{ 0 };
	int menor{ 0 };
	int sum{ 0 };
	int r{ 1 };
	float average{ 0 };
	int product{ 0 };
		cout << "Ingrese tres diferentes enteros: ";
		cin >> x >> y >> z;
		sum = x + y + z;
		average = sum / 3;
		product = x * y * z;
		cout << "Suma es: " << sum << endl;
		cout << "Promedio es: " << average << endl;
		cout << "Producto es: " << product << endl;
		if (x > y) {
			if (y > z) { mayor = x; menor = z; }
			else if (z > x) { mayor = z; menor = y; }
			else { mayor = x; menor = y; }
		}
		else if (x > z) { mayor = y; menor = z; }
		else if (y > z) { mayor = y; menor = x; }
		else { mayor = z; menor = x; }
		cout << "El mas pequeño es: " << menor << endl;
		cout << "El mas grande es: " << mayor << endl;
}