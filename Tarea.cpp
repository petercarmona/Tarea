// Tarea.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
#include "stdio.h"
#include <conio.h>
#include <iostream>
#include <string>

using namespace std;

void pregunta1(float millas) {
	cout << "Introduce las millas";cin >> millas;
	millas = millas * 1.60934;
	cout << millas;
}
void pregunta2(float fahrenheit) {
	for (fahrenheit; fahrenheit < 300; fahrenheit++)
	{
		cout << "Fahrenheit->" << fahrenheit << " Celcius->" << (fahrenheit - 32)*5/9 << endl;
		fahrenheit += 20;
	}
}
void pregunta3(int number) {
	while (1)
	{
		cout << "Ingrese un numero";cin >> number;

		if (number == -1) {
			cout << "Saliendo del programa..." << endl;
			break;
		}
		else if (number % 2 == 0)
			cout << "Es par" << endl;
		else {
			cout << "Es impar" << endl;
		}
	}	
}
void pregunta4(int number, int expo) {
	cout << "Ingresar la base";cin >> number;
	cout << "Ingresar el Exponente";cin >> expo;
	int tmp = number;
	if (expo == 0)
		cout << "1" << endl;
	else
		for (int i = 0; i < expo; i++)
		{
			tmp *= number;
		}
	}
void pregunta5(int number) {
	while (true)
	{
		cout << "Ingresa el numero a convertir entre -1 y 9: ";cin >> number;
		if (number < -1 || number >9)
		{
			cout << "Numero fuera de rango" << endl;
		}
		while (number < -1 || number >9)
		{
			cout << "Ingresa el numero a convertir entre -1 y 9: ";cin >> number;
			if (number == -1) {
				cout << "Cerrando el programa...";
				break;
			}
			if (number < -1 || number >9)
			{
				cout << "Numero fuera de rango" << endl;
			}
		}
		if (number == -1) {
			cout << "Cerrando el programa...";
			break;
		}
		switch (number)
		{
		case 0:
			cout << "Cero" << endl;
			break;
		case 1:
			cout << "Uno" << endl;
			break;
		case 2:
			cout << "Dos" << endl;
			break;
		case 3:
			cout << "Tres" << endl;
			break;
		case 4:
			cout << "Cuatro" << endl;
			break;
		case 5:
			cout << "Cinco" << endl;
			break;
		case 6:
			cout << "Seis" << endl;
			break;
		case 7:
			cout << "Siete" << endl;
			break;
		case 8:
			cout << "Ocho" << endl;
			break;
		case 9:
			cout << "Nueve" << endl;
			break;
		default:
			cout << "Error" << endl;
			break;
		}
	}
}
void pregunta6(char operador, int a, int b) {
	cout << "Escriba el operador: ";cin >> operador;
	cout << "Escriba A: ";cin >> a;
	cout << "Escriba B: ";cin >> b;
	switch (operador)
	{
		case '+':
			cout << a + b << endl;
			break;
		case '-':
			cout << a - b << endl;
			break;
		case '/':
			if (b != 0)
				cout << a / b << endl;
			else
				cout << "La operacion no existe" << endl;
			break;
		case '*':
			cout << a * b << endl;
			break;
		default:
			cout << "Error" << endl;
			break;
	}
}
void pregunta7(int &a, int &b){
	int tmp;
	tmp = a;
	a = b;
	b = tmp;
	cout << "A es:" << a << "   B es: " << b << endl;
}
void pregunta8(int *a, int *b) {
	int tmp=0;
	tmp = *a;
	*a = *b;
	*b = tmp;
	cout << "A es:" << *a << "   B es: " << *b << endl;
}
int main()
{
	//pregunta 1
	float millas = 0;
	//pregunta 2
	float fahrenheit = 0;
	//pregunta 3
	int number3;
	//pregunta 4
	int number4, expo;
	//pregunta 5
	int number5;
	//pregunta 6
	char operador = 00;
	int a=4, b=8;
	//pregunta 7
	int *A=&a, *B=&b;

	//pregunta8(A, B);
	_getch();
    return 0;
}

