#include <iostream> 
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
inline void keep_window_open() { char ch; cin >> ch; }

//cents counter

//http://coliru.stacked-crooked.com/a/8338b1cf85a305d8
int main()
{
	//prompt user to enter some number of pennies, nickels, dimes, quarters, half dollar and full dollar coins

	int pennies;
	cout << "How many pennies do you have?\n";
	cin >> pennies;
	int nickels;
	cout << "How many nickels do you have?\n";
	cin >> nickels;
	int dimes;
	cout << "How many dimes do you have?\n";
	cin >> dimes;
	int quarters;
	cout << "How many quarters do you have?\n";
	cin >> quarters;
	int half_dollar;
	cout << "How many half-dollar coins do you have?\n";
	cin >> half_dollar;
	int full_dollar;
	cout << "How many full-dollar coins do you have?\n";
	cin >> full_dollar;

	if (pennies == 1)
		cout << "wow you have " << pennies << " penny \n";
	else
		cout << "Wow you have " << pennies << " pennies " << '\n';

	if (nickels == 1)
		cout << "wow you have " << nickels << " nickel \n";
	else
		cout << "Wow you have " << nickels << " nickels " << '\n';

	if (dimes == 1)
		cout << "wow you have " << dimes << " dime \n";
	else
		cout << "Wow you have " << dimes << " dimes " << '\n';

	if (quarters == 1)
		cout << "wow you have " << quarters << " quarter \n";
	else
		cout << "Wow you have " << quarters << " quarters " << '\n';

	if (half_dollar == 1)
		cout << "wow you have " << half_dollar << " half dollar \n";
	else
		cout << "Wow you have " << half_dollar << " half dollars " << '\n';

	if (full_dollar == 1)
		cout << "wow you have " << full_dollar << " full dollar \n";
	else
		cout << "Wow you have " << full_dollar << " full dollars " << '\n';

	double p = pennies * .01;
	double n = nickels * .05;
	double d = dimes *.10;
	double q = quarters * .25;
	double hd = half_dollar * .50;
	double fd = full_dollar * 1.00;

	int p1 = pennies * 1;
	int n1 = nickels * 5;
	int d1 = dimes * 10;
	int q1 = quarters * 25;
	int hd1 = half_dollar * 50;
	int fd1 = full_dollar * 100;

	double sum1 = p + n + d + q + hd + fd;
	int sum2 = p1 + n1 + d1 + q1 + hd1 + fd1;

	cout << "Wow you have $" << sum1 << " orrrrrr " << sum2 << " cents!!! :O\n";

	keep_window_open();

	return 0;
}