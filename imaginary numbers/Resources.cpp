#include <iostream>
#include <string>
#include "App.h"
using namespace std;

complex::complex(double r, double i ) {
	this->re = r;
	this->im = i;
}


double real(const complex& a) {
	return a.re;
}

double imag(const complex& a) {
	return a.im;
}

complex operator+(const complex& a, const complex& b) {
	return complex(a.re + b.re, a.im + b.im);
}

complex operator-(const complex& a, const complex& b) {
	return complex(a.re - b.re, a.im - b.im);
}

complex operator*(const complex& a, const complex& b) {
	return complex((a.re * b.re) + ((a.im * b.im) * (-1)), (a.re * b.im) + (a.im * b.re));
}

complex operator/(const complex& a, const complex& b) {
	return complex(
		(((a.re * b.re) + (a.im * b.im)) / (((b.re * b.re) + (b.im * b.im)))),
		(((a.im * b.re) - (a.re * b.im)) / (((b.re * b.re) + (b.im * b.im))))
	);
}

complex& complex::operator=(const complex& a) {
	this->re = a.re;
	this->im = a.im;
	
	return *this;
}

void PrintResult(const complex &a) {
	if (imag(a) == 0) {
		cout << real(a) << endl;
	}
	else {
		cout << real(a) << " + " << imag(a) << "i "  << endl;
	}

}



matrix::matrix() {
	for (int r = 0; r < this->n; r++) {
		for (int c = 0; c < this->n; c++) {
			this->a[r][c] = 0;
		}
	}
}

void operator>>(istream& s, matrix& m) {
	for (int r = 0; r < m.n; r++) {
		for (int c = 0; c < m.n; c++) {
			cout << "enter item{ {" << r + 1 << "}, {" << c + 1 << "} }: ";
			cin >> m.a[r][c];
		}
	}
}

ostream &operator<<(ostream& s, matrix& m) {
	cout << "\n-----------\n";
		cout << "{" << endl;
	for (int r = 0; r < m.n; r++) {
		for (int c = 0; c < m.n; c++) {
			cout << "{" << m.a[r][c] << "}";
		}
		if (r != m.n-1) {
			cout << endl;
		}
	}
	cout <<endl << "}" ;
	cout << "\n-----------\n";

	return s;
}

matrix operator+(const matrix& a, const matrix& b) {
	matrix newMatrix;
	for (int r = 0; r < a.n; r++) {
		for (int c = 0; c < a.n; c++) {
			newMatrix.a[r][c] = a.a[r][c]+ b.a[r][c];
		}
	}
	return newMatrix;
}

matrix& matrix::operator=(const matrix& a) {
	for (int r = 0; r < a.n; r++) {
		for (int c = 0; c < a.n; c++) {
			this->a[r][c] = a.a[r][c];
		}
	}                 
	return *this;
}