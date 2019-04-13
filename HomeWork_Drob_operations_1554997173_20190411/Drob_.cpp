#include "Drob_.h"


// конструктор с параметрами
Drob_::Drob_(int x, int y)
{
	this->setX(x);
	this->setY(y);
}

// конструктор копирования
Drob_::Drob_(const Drob_ & o)
{
	this->x = o.x;
	this->y = o.y;
}

// сеттер для параметра x
void Drob_::setX(int x)
{
	this->x = x;
}

// сеттер для параметра y
void Drob_::setY(int y)
{
	if (y != 0)
		this->y = y;
	else
		this->y = 1;
}

// геттер для параметра x, константный, чтобы исключить изменение параметра x
int Drob_::getX() const
{
	return x;
}

// геттер для параметра y, константный, чтобы исключить изменение параметра y
int Drob_::getY() const
{
	return y;
}

// метод вывода дроби в консоль, константный
void Drob_::print() const
{
	cout << x << " / " << y << " = "
		<< double(x) / y << endl;
}

// метод возвращения дроби ввиде десятичной дроби в консоль, константный
double Drob_::getFraction() const
{
	return double(this->x) / this->y;
}

// метод - "+" дробей
Drob_ Drob_::operator+=(const Drob_ & b)
{
	this->x = this->x*b.y + this->y*b.x;
	this->y = this->y * b.y;
	return *this;
}

// метод - "-" дробей
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

// метод - "*" дробей
Drob_ Drob_::operator*=(const Drob_ & b)
{
	this->x = this->x*b.x;
	this->y = this->y*b.y;
	return *this;
}

// метод - "/" дробей
Drob_ Drob_::operator/=(const Drob_ & b)
{
	this->x = this->x*b.y;
	this->y = this->y*b.x;
	return *this;
}

// глобальная функция оператора "+" для типа данных Drob_
Drob_ operator+(const Drob_ & a, const Drob_ & b)
{
	Drob_ c = a;
	c += b;
	//Drob_ c;
	//c.setX(a.getY()*b.getX() + a.getX()*b.getY());
	//c.setY(a.getY()*b.getY());
	return c;
}

// гл.функция оператора "-" для типа данных Drob_
Drob_ operator-(const Drob_ & a, const Drob_ & b)
{
	Drob_ c = a;
	c -= b;
	return c;
}

// гл.функция оператора "*" для типа данных Drob_
Drob_ operator*(const Drob_ & a, const Drob_ & b)
{
	Drob_ c = a;
	c *= b;
	return c;
}

// гл.функция оператора "/" для типа данных Drob_
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
