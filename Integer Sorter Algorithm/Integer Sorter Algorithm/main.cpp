#include <iostream> //input/output stream 

using namespace std; //using standard namspace in the C++ library
inline void keep_window_open() { char ch; cin >> ch; }

//bubble sorter

int main()
{
	int value[10] = { 9,1,0,2,3,4,5,6,8,7 }; /* created an array called 'value' and gave it ten different elements; assigned the ten elements, ten different values of type integer and put the values in random order*/

	int flag = 0; /* created a type integer named flag and assigned the value 0 to it - this is so we have a starting place to count in our while loop*/

	while (flag < 10) /* create a while loop(will iterate until flag is 10) each time our for loop is iterated through, flag++ will add one to the while loop */
	{
		for (int index = 1; index < 10; index++) /* our for loop will start counting at 1 and count to ten by a factor of 1 per iteration, as long as the statement body stays true. If the for loop statement is false, it will exit the for loop */
		{
			if (value[index - 1] > value[index]) /* for first execution value[0] > value [1] these elements are now being compared to their physical value indexes within the array so 9 > 1; since this is true, it will execute the statement body that is beneath it. If it is not greater than it will exit the for loop and add 1 to flag*/
			{
				int temp = value[index - 1]; /* creates new integer type named temp and assigns the value[0] which equates to 9 so temp = 9*/
				value[index - 1] = value[index]; /* The assigns value[0] to value[1] so assign what the current value[0] is to value[1] which is 9 = 1-- so value[index-1] is assigned to 1*/
				value[index] = temp; /* we are now assigning value[index] to what temp was which now switches value[1] from  the 1 integer to the 9 integer since temp was originally assigned to 9 -- so now the 9 and 1 are switched to 1, 9 in the array*/
			}
		}
		flag++; /* Adds 1 to flag so we can iterate through our for loop again*/
	}
	for (int i = 0; i<10; i++) /* will be iterating through our array once the array is organized and then be printing out the organized list from 0 integer to the 9 integer */
		cout << value[i] << " "; /* outputing the integer value; iterates through 0-9 elements; then seperates them with a space */
	cout << endl; /* outputs and endline so we can start on the next line */

	keep_window_open();

	return 0; /* a return 0 tells us that our program has ran successfully without any compile errors or runtime errors */
}