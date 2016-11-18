#include"complex.h"
complex::complex(float x, float y, float z)
{
	this->x = x;
	this->y = y;
	this->z = z;
}
float complex::getX()
{
	return this->x;
}
float complex::getY()
{
	return this->y;
}
float complex::getZ()
{
	return this->z;
}
void complex::setX(float x)
{
	this->x = x;
}
void complex::setY(float y)
{
	this->y = y;
}
void complex::setZ(float z)
{
	this->z = z;
}
void  complex::print()
{
	cout << "(" << x << "," << y << "," << z << ")" << endl;
}
complex complex::operator*(const complex& other)
{
	complex c(0, 0, 0);
	c.x = x*other.x;
	c.y = y*other.y;
	c.z = z*other.z;
	return c;
}
complex complex::operator^(const complex& other)
{
	complex c(0, 0, 0);
	c.x = y*other.z - z*other.y;
	c.y = z*other.x - x*other.z;
	c.z = x*other.y - y*other.x;
	return c;
}
#pragma once
#include<iostream>
using namespace std;
class complex {
private:
	float x;
	float y;
	float z;
public:
	complex(float x, float y, float z);
	float getX();
	float getY();
	float getZ();
	void setX(float x);
	void setY(float y);
	void setZ(float z);
	void print();
	complex operator*(const complex& other);
	complex operator^(const complex& other);
}
#include "complex.h"

int main()
{
	complex c1(1, 2, 3);
	complex c2(1, 2, 3);
	complex c3 = c1*c2;
	complex c4 = c1 ? c2;
	c1.print();
	c2.print();
	c3.print();
	c4.print();
	system("pause");
	return 0;
}