#include "Drob_.h"


// ����������� � �����������
Drob_::Drob_(int x, int y)
{
	this->setX(x);
	this->setY(y);
}

// ����������� �����������
Drob_::Drob_(const Drob_ & o)
{
	this->x = o.x;
	this->y = o.y;
}

// ������ ��� ��������� x
void Drob_::setX(int x)
{
	this->x = x;
}

// ������ ��� ��������� y
void Drob_::setY(int y)
{
	if (y != 0)
		this->y = y;
	else
		this->y = 1;
}

// ������ ��� ��������� x, �����������, ����� ��������� ��������� ��������� x
int Drob_::getX() const
{
	return x;
}

// ������ ��� ��������� y, �����������, ����� ��������� ��������� ��������� y
int Drob_::getY() const
{
	return y;
}

// ����� ������ ����� � �������, �����������
void Drob_::print() const
{
	cout << x << " / " << y << " = "
		<< double(x) / y << endl;
}

// ����� ����������� ����� ����� ���������� ����� � �������, �����������
double Drob_::getFraction() const
{
	return double(this->x) / this->y;
}

// ����� - "+" ������
Drob_ Drob_::operator+=(const Drob_ & b)
{
	this->x = this->x*b.y + this->y*b.x;
	this->y = this->y * b.y;
	return *this;
}

// ����� - "-" ������
Drob_ Drob_::operator-=(const Drob_ & b)
{
	if (this->y == b.y)
	{
		this->x = this->x - b.x;
		return *this;
	}
	else
	{
		int comDenom = this->y*b.y;
		this->x = this->x*(comDenom / this->y) - b.x*(comDenom / b.y);
		this->y = comDenom;
		return *this;
	}
}

// ����� - "*" ������
Drob_ Drob_::operator*=(const Drob_ & b)
{
	this->x = this->x*b.x;
	this->y = this->y*b.y;
	return *this;
}

// ����� - "/" ������
Drob_ Drob_::operator/=(const Drob_ & b)
{
	this->x = this->x*b.y;
	this->y = this->y*b.x;
	return *this;
}

// ���������� ������� ��������� "+" ��� ���� ������ Drob_
Drob_ operator+(const Drob_ & a, const Drob_ & b)
{
	Drob_ c = a;
	c += b;
	//Drob_ c;
	//c.setX(a.getY()*b.getX() + a.getX()*b.getY());
	//c.setY(a.getY()*b.getY());
	return c;
}

// ��.������� ��������� "-" ��� ���� ������ Drob_
Drob_ operator-(const Drob_ & a, const Drob_ & b)
{
	Drob_ c = a;
	c -= b;
	return c;
}

// ��.������� ��������� "*" ��� ���� ������ Drob_
Drob_ operator*(const Drob_ & a, const Drob_ & b)
{
	Drob_ c = a;
	c *= b;
	return c;
}

// ��.������� ��������� "/" ��� ���� ������ Drob_
Drob_ operator/(const Drob_ & a, const Drob_ & b)
{
	Drob_ c = a;
	c /= b;
	return c;
}


bool operator==(const Drob_ & a, const Drob_ & b)
{
	return a.getFraction() == b.getFraction();
}

bool operator!=(const Drob_ & a, const Drob_ & b)
{
	return a.getFraction() != b.getFraction();
}

bool operator>(const Drob_ & a, const Drob_ & b)
{
	return a.getFraction() > b.getFraction();
}

bool operator<(const Drob_ & a, const Drob_ & b)
{
	return a.getFraction() < b.getFraction();
}

bool operator>=(const Drob_ & a, const Drob_ & b)
{
	return a.getFraction() >= b.getFraction();
}

bool operator<=(const Drob_ & a, const Drob_ & b)
{
	return a.getFraction() <= b.getFraction();
}
