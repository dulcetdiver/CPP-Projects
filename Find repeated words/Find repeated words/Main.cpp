#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;
inline void keep_window_open() { char ch; cin >> ch; }

//count how many times a word repeats within one sentence
int main() {

	cout << "Hey you, I want to count how many words are repeated within a sentence. Could you type a sentence for me, please?\n";

	int number_of_words = 0;
	string previous = " "; //empty string, so a word can be placed here
	string current;

	while (cin >> current) {
		++number_of_words; //go to next word - increase count
		if (previous == current)
			cout << "word number " << number_of_words //tell me where the word is located in the sentence
			<< " repeated: " << current << '\n';
		previous = current; //set current counted word to previous box and output the same word
	}


	keep_window_open();
	return 0;
}