//////////////////////////////////////////////////////////////////////////////
// Lab_13_1.cpp
// головний файл проекту – функція main
#include <iostream>
#include <math.h>
#include <iomanip>
#include "dod.h"
#include "sum.h"
#include "var.h"
using namespace std;
using namespace nsDod;
using namespace nsSum;
using namespace nsVar;
int main()
{
	
	double  s = 0;
	const double PI = 3.141592653589793;
	cout << "x_p = "; cin >> x_p;
	cout << "x_k = "; cin >> x_k;
	cout << "dx = "; cin >> dx;
	cout << "e = "; cin >> e;
	cout << endl;
	cout << fixed;
	cout << "-------------------------------------------------" << endl;
	cout << "|" << setw(5) << "x" << " |"
		<< setw(10) << "exp(x)" << " |"
		<< setw(7) << "S" << " |"
		<< setw(5) << "n" << " |"
		<< endl;
	cout << "-------------------------------------------------" << endl;
	x = x_p;
	while (x <= x_k) {
		sum(); // виклик процедури обчислення суми
		cout << x << " "
			<< s << " "
			<< exp(x) << " "
			<< n << endl; // тут слід використовувати форматний вивід
		cout << "|" << setw(7) << setprecision(2) << x << " |"
			<< setw(10) << setprecision(5) << atan(x) << " |"
			<< setw(10) << setprecision(5) << PI / 2 + s << " |"
			<< setw(5) << n << " |"
			<< endl;
		x += dx;
	}
	cin.get();
	return 0;
}