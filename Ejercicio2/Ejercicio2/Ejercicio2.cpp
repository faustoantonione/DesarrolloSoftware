#include "pch.h"
#include <iostream>
using namespace std;
const int cantidadMaxima = 10;

int main()
{
	//Ejercicio 2
	int numeros[cantidadMaxima];
	int promedio = 0;

	int contador = 0;
	int acumulador = 0;
	int acumulador2 = 0;

	for (int i = 0; i < cantidadMaxima; i++) {
		cout << "Ingrese un numero "; cin >> numeros[i];

		if (numeros[i] > 100) {
			acumulador += numeros[i];
			contador = contador + 1;
		}
		if (numeros[i] < -10) {
			acumulador2 += numeros[i];
		}
	}
	promedio = acumulador / contador;
	cout << promedio << endl;
	cout << acumulador2;
}