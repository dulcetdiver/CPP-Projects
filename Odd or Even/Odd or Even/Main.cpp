#include <iostream>

using namespace std;
inline void keep_window_open() { char ch; cin >> ch; }



//determine if integer value is odd or even
int main()
{
	cout << "Please enter an integer value! \n";

	int count;
	cin >> count;

	if (count % 2 == 0)
	{
		cout << "Your number is " << count << " and is even!\n";
	}
	else
	{
		cout << "Your number is " << count << " and is odd!\n";
	}

	keep_window_open();
	return 0;
}