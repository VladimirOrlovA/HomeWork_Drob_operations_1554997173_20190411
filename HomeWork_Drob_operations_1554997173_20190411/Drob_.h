#pragma once
#include <iostream>
using namespace std;

class Drob_
{
	int x, y;
public:

	// ����������� � �����������
	Drob_(int x = 0, int y = 1);

	// ����������� �����������
	Drob_(const Drob_&o);

	//setters
	void setX(int x);
	void setY(int y);

	//getters
	int getX() const;
	int getY() const;

	// ������
	void print() const;	// ����������� �����
	double getFraction()const;	// ����������� �����

	// ������ �������� ��� �������
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

// ���������� ���������� ������� �������� ��� �������
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
