#pragma once
#include <iostream>
#include <string>
using namespace std;

class complex {
	friend complex operator+(const complex& a, const complex& b);
	friend complex operator-(const complex& a, const complex& b);
	friend complex operator*(const complex& a, const complex& b);
	friend complex operator/(const complex& a, const complex& b);
	friend void PrintResult(const complex &a);
	friend double real(const complex& a);
	friend double imag(const complex& a);
	
private:
	double re, im;

public:
	complex(double r, double i = 0);


	complex& operator=(const complex& a);
};


// [
// [][],
// [][],
// ]
class matrix {
	friend void operator>>(istream& s, matrix& m);
	friend ostream& operator<<(ostream& s, matrix& m);
	friend matrix operator+(const matrix& a, const matrix& b);

private:
	const int n = 2;
	int a[2][2];

public:
	matrix();
	matrix& operator=(const matrix& a);
	
};