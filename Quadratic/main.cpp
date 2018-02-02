// Quadratic.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	double a, b, c;
	cout << " a, b and c: ";
	cin >> a >> b >> c;
	double discriminant = b * b - 4 * a*c;
	//real
	if (discriminant >= 0) {
		double root1 = (-b + sqrt(discriminant)) / (2 * a);
		double root2 = (-b - sqrt(discriminant)) / (2 * a);
		cout << "root1 = " << root1 << endl;
		cout << "root2 = " << root2 << endl;
	}
	//complex
	if (discriminant < 0) {
		double real = -b / (2 * a);
		double imagin = sqrt(-discriminant) / (2 * a);
		cout << "root1 = " << real << "+" << imagin << "i" << endl;
		cout << "root2 = " << real << "-" << imagin << "i" << endl;
	}
	return 0;
}
