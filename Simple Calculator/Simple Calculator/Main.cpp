#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

inline void keep_window_open() {char ch; cin >> ch; }

//take operands followed by operation and caluclate them

int main()
{
	string operation; //take operators + - * / and plus minus mul div
	double d1 = 0;
	double d2 = 0;
	double res = 0;

	cout << "Please enter two different numbers followed by an operator (+, -, *, /) or plus, minus, mul, div: \n";

	while (cin >> d1 >> d2 >> operation)
	{
		if (operation == "+" || operation == "plus")
			res = d1 + d2;
		else if (operation == "-" || operation == "minus")
			res = d1 - d2;
		else if (operation == "*" || operation == "mul")
			res = d1 * d2;
		else if (operation == "/" || operation == "div")
		{
			if (d2 == 0)
				operation = "divzero";
			else
				res = d1 / d2;

		}
		else operation = "unknown";
		if (operation == "unknown")
			cout << "That operator doesn't exist in this calculator!\n";
		else if (operation == "divzero")
			cout << "Dang, dividing by zero again, to infinity and beyond!\n";
		else
			cout << d1 << ' ' << operation << ' ' << d2 << " = " << res << '\n';
		cout << "Try entering some more numbers!\n";
			
	}



	keep_window_open();
	return 0;
}
