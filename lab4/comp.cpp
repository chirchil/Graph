#include "Comp.h"

Complex::Complex()
{
	re = Re();
	im = Im();
}


Complex::~Complex()
{
}

Complex::Complex(float x, float y)
{
	re = x;
	im = y;
}

float Complex::Re()
{
	// TODO: Добавьте сюда код реализации.
	return 0.0f;
}

float Complex::Im()
{
	// TODO: Добавьте сюда код реализации.
	return 0.0f;
}

Complex Complex::operator+(Complex B)
{
	return Complex(re + B.re, im + B.im);
}

Complex Complex::operator+(float B)
{
	return Complex(re + B, im);
}

Complex Complex::operator*(Complex B)
{
	Complex X;
	X.re = (re*B.re) - (im*B.im);
	X.im = (re*B.im) + (im*B.re);
	return X;
}

void Complex::OutD()
{
	cout << re;
	if (im > 0) cout << "+";
	if (im != 0) cout << im << "i\n";
}

void Complex::InD()
{
	cout << "Real = ";
	cin >> re;
	cout << "Image = ";
	cin >> im;
}

Complex Complex::operator-(Complex y)
{
	Complex x;
	x.re = re - y.re;
	x.im = im - y.im;
	return x;
}

Complex Complex::operator/(Complex y)//деление комплексного на комплексное
{
	Complex x;
	x.re = ((re*y.re) + (im*y.im)) / ((y.re*y.re) + (y.im*y.im));
	x.im = ((im*y.re) - (re*y.im)) / ((y.re*y.re) + (y.im*y.im));
	return x;
}

Complex Complex::operator/(float y)   //деление комплексного на вещественное
{
	Complex x;
	x.re = (re*y) / (y*y);
	x.im = (im*y) / (y*y);
	return x;
}

Complex Complex::operator*(float B) // умножение комплексного на вещественное
{
	Complex X;
	X.re = re * B;
	X.im = im * B;
	return X;
}

Complex Complex::operator=(float B)
{
	return Complex(re = B, im);
}

Complex Complex::operator^(int degree)
{
	Complex X;
	X.re = re;
	X.im = im;
	for (int i = 1; i < degree; i++)
	{
		X = X * (*this);
	}
	return X;
}

ostream& operator<<(ostream& os, const Complex &c)
{
	os << c.re;
	if (c.im > 0) os << " + ";
	if (c.im != 0) os << c.im << "i";
	return os;
}

void Complex::sopr()
{
	std::cout << "Sopr complex:\t";
	std::cout << re;
	if (im > 0)
	{
		im = im * (-1);
	}
	else
	{
		im = im * (-1);
		std::cout << "+";
	}
	if (im != 0) std::cout << im << "i\n";
}

Complex& const operator+(float real, Complex B) //сложение f+c
{
	Complex x;
	x.re = real + B.re;
	x.im = B.im;
	return x;
}
