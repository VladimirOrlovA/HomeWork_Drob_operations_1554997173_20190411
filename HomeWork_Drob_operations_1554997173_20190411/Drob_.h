#pragma once
#include <iostream>
using namespace std;

class Drob_
{
	int x, y;
public:

	// конструктор с параметрами
	Drob_(int x = 0, int y = 1);

	// конструктор копирования
	Drob_(const Drob_&o);

	//setters
	void setX(int x);
	void setY(int y);

	//getters
	int getX() const;
	int getY() const;

	// методы
	void print() const;	// константный метод
	double getFraction()const;	// константный метод

	// методы операций над дробями
	Drob_ operator+=(const Drob_ &b);
	Drob_ operator-=(const Drob_ & b);
	Drob_ operator*=(const Drob_ & b);
	Drob_ operator/=(const Drob_ & b);


	//Drob_ operator+(const Drob_ &a) 
	//{
	//	//this->x = 15;
	//	Drob_ tmp = *this;
	//	tmp += a;
	//	return tmp;
	//}

};

// объявление глобальных функций операций над дробями
Drob_ operator+(const Drob_& a, const Drob_& b);
Drob_ operator-(const Drob_& a, const Drob_& b);
Drob_ operator*(const Drob_& a, const Drob_& b);
Drob_ operator/(const Drob_& a, const Drob_& b);
bool operator==(const Drob_& a, const Drob_& b);
bool operator!=(const Drob_& a, const Drob_& b);
bool operator>(const Drob_& a, const Drob_& b);
bool operator<(const Drob_& a, const Drob_& b);
bool operator>=(const Drob_& a, const Drob_& b);
bool operator<=(const Drob_& a, const Drob_& b);
