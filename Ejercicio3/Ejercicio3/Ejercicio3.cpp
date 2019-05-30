#include "pch.h"
#include <iostream>
using namespace std;

int mayorNumero(int unNumero, int otroNumero);
int posicion(int unNumero, int otroNumero, int unContador);

int main()
{
	//Ejercicio 3
	int numeros[10000];
	int i = 0;
	int maxNumero = 0;
	int posicionNumero = -1;
	int maxInicial = 0;

	do
	{
		cout << "Ingrese un numero" << endl; cin >> numeros[i];
		maxInicial = maxNumero;
		maxNumero = mayorNumero(numeros[i], maxNumero);
		posicionNumero = posicion(maxInicial, maxNumero, posicionNumero);
		i++;
	} while (numeros[i-1] > 0);
	cout << maxNumero << endl;
	cout << posicionNumero;
}

int mayorNumero(int unNumero, int otroNumero) {
	if (unNumero > otroNumero)
		otroNumero = unNumero;
	return otroNumero;
}

int posicion(int unNumero, int otroNumero, int unContador) {
	if (unNumero != otroNumero)
		unContador++;
	return unContador;
}