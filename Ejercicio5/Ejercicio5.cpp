#include <iostream>
using namespace std;
int main()
{
	//Ejercicio 5
	char fecha[8] = {};
	cout << "Ingresa fecha:"; cin >> fecha;
	cout << "Año:" << fecha[0] << fecha[1] << fecha[2] << fecha[3] << endl;
	cout << "Mes:" << fecha[4] << fecha[5] << endl;
	cout << "Dia:" << fecha[6] << fecha[7] << endl;
}
