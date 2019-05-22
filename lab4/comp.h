#pragma once
#ifndef Comp_H
#define Comp_H
#include <iostream>
using namespace std;

class Complex
{
	float re;
	float im;
public:
	Complex();
	Complex(float x, float y);
	~Complex();
	Complex operator=(float B);
	Complex operator+(Complex B);
	Complex operator*(Complex B);
	Complex operator-(Complex B);
	Complex operator/(Complex B);
	Complex operator+(float B);
	Complex operator/(float B);
	Complex operator*(float B);
	Complex operator^(int degree);
	friend ostream & operator<<(ostream & os, const Complex & c);
	float Re();
	float Re(float x) { re = x; };
	float Im();
	void OutD();
	void InD();
	void sopr();
	friend Complex& operator+(float real, Complex B);
	double getRe() { return this->re; }
	double getIm() { return this->im; }

};

#endif