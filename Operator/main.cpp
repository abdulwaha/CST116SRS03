// Operator.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int i0, i1;
	double d0, d1;
	cin >> i0 >> i1 >> d0 >> d1;
	
	cout << "i0*i1 == " << i0*i1 << endl;
	cout << "i0*d0 == " << i0*d0 << endl;
	cout << "d0*d1 ==" << d0*d1 << endl;
	cout << "i0/i1 ==" << i0 / i1 << endl;
	cout << "i0/d0 ==" << i0 / d0 << endl;
	cout << "d0/d1 == " << d0 / d1 << endl;
	cout << "i0%i1 == " << i0%i1 << endl;
	cout << "i0+i1 == " << i0 + i1 << endl;
	cout << "i0+d0 == " << i0 + d0 << endl;
	cout << "d0+d1 == " << d0 + d1 << endl;
	cout << "i0-i1 == " << i0 - i1 << endl;
	cout << "i0-d0 == " << i0 - d0 << endl;
	cout << "d0-d1 == " << d0 - d1 << endl;
	

    return 0;
}

