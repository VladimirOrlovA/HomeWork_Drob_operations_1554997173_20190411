#include <iostream>
#include "Drob_.h"
using namespace std;


void main() {

	Drob_ a(3, 1);		// ������� ������ a ���� 3/2 - ���������� ����������� �����
	a.print();
	Drob_ b(3, 2);		// ������� ������ b ���� 1/2 - ���������� ����������� �����
	b.print();

	//Drob_ plus = a + b;		// ���������� ����� - ���������� ��������� + ������� ������
	//plus.print();

	//Drob_ minus = a - b;		// �������� ����� - ���������� ��������� - ������� ������
	//minus.print();

	//Drob_ mult = a * b;		// �������� ����� - ���������� ��������� * ������� ������
	//mult.print();

	//Drob_ dev = a / b;			// ����� ����� - ���������� ��������� / ������� ������
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