#include <iostream>
#include <string>

using namespace std;

void printLetterPyramid(string word) {
	int wordLength = word.size();

	for (int i = 0; i < wordLength; i++) {
		int numOfSpaces = wordLength - 1 - i;

		// prints space
		for (int j = 0; j < numOfSpaces; j++) {
			cout << " ";
		}


		string subString = word.substr(0, i+1);
		cout << subString;

		for (int k = i-1; k >= 0; --k) {
			cout << word[k];
		}

		cout << endl;
	}
	cout << endl;
}

int main() {
	//string userWord;
	//cout << "Enter a string: " << endl;
	//cin >> userWord;
	//cout << "You entered: " << userWord << endl;
	
	cout << "Letter Pyramid" << endl;
	string wordTest = "12345";
	printLetterPyramid(wordTest);
	return 0;
}