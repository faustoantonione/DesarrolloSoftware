#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int numeroDeMultiplos = 0;
	int numero = 3;

	cout << "Ingrese la cantidad de multiplo que se quiere" << endl; cin >> numeroDeMultiplos;

	for (int i = 0; i < numeroDeMultiplos; i++) {


		if (numero % 5 != 0) {
			cout << "El numero es: " << numero << endl;
		}
		else {
			i--;
		}

		numero += 3;
	}
}