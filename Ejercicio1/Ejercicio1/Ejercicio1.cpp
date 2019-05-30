#include "pch.h"
#include <iostream>
using namespace std;
const int cantidadMaxima = 10;

int main()
{
	//Ejercicio 1
	int numeros[cantidadMaxima];
	int menorNumero = 1000;
	int i = 0;

	for (i; i < cantidadMaxima; i++) {
		cout << "ingrese un numero "; cin >> numeros[i];
		if (numeros[i] < menorNumero) {
			menorNumero = numeros[i];
		}
	}
	cout << menorNumero;
}