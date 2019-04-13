#include <iostream>
#include "Drob_.h"
using namespace std;


void main() {

	Drob_ a(3, 1);		// создаем объект a дроб 3/2 - вызывается конструктор дроби
	a.print();
	Drob_ b(3, 2);		// создаем объект b дроб 1/2 - вызывается конструктор дроби
	b.print();

	//Drob_ plus = a + b;		// складываем дроби - перегрузка оператора + вызовом метода
	//plus.print();

	//Drob_ minus = a - b;		// вычитаем дроби - перегрузка оператора - вызовом метода
	//minus.print();

	//Drob_ mult = a * b;		// умножаем дроби - перегрузка оператора * вызовом метода
	//mult.print();

	//Drob_ dev = a / b;			// делим дроби - перегрузка оператора / вызовом метода
	//dev.print();

	if (a > b)
	{
		cout << "true" << endl;
	}
	else
	{
		cout << "false" << endl;
	}


	//b.print();
	//Drob_ c;
	//c = operator+(a, b);
	//
	//
	//a + b;
	//a += b;

	//
	//int x=1, y=2, z=3;

	//x += y += z;
	//
	//a.operator+=(b.operator+=(c));
	//
	//b += c;
	//a += b;
	//
	//
	////a += b;//a.operator+=(b);
	////a.operator+=(b);//a+=b


	//a.print();
	system("pause");
}