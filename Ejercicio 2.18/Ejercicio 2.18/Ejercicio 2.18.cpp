#include<iostream>
using namespace std;
int main()
{
	int a, b;
	cout << "Ingrese un numero: ";
	cin>> a;
	cout << "Ingrese otro numero: ";
	cin >> b;
	if (a > b)
	{
		cout << a << " es mas grande" << endl;
	}
	else if(b>a)
	{
		cout << b << " es mas grande" << endl;
	}
	else if (a && b)
	{
		cout << "Estos números son iguales." << endl;
	}
	return 0;
}