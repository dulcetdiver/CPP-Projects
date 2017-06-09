#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;
inline void keep_window_open() { char ch; cin >> ch; }


//gets input of name and age 
int main() {
	cout << "Please enter your first name, b0ss! (Followed by enter key)\n "; //string literal output of name

	string first_name;
	cin >> first_name; //"see in" character input of string

	cout << "Enter your age now; like a b0ss\n";

	double age;
	cin >> age; //"see-in" character input of age float

	double months_age = age * 12; //converts age in years to age in months

	cout << "Whats poppin', " << first_name << "? " << "Wooow, you're " << months_age << " months old! :O\n"; //"see out" outputs name and age

	keep_window_open();
	return 0;

}