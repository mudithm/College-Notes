#include <iostream>
#include <string>
#include <ctype.h>
using namespace std;

//Function to reverse the order of the characters in a string

string reverseString(string s){
	string out = "";
	for (int i = s.size() - 1; i >= 0 ; i--){
		out += s[i];
	}
	return out;

}

int main(){

	cout << "Enter a sentence:   ";
	string sentence;
	getline (cin, sentence);
	sentence += " ";

	string reversedSentence = "";
	int startPos = 0, endPos; // initialize variables to store the starting and ending positions of words
	
	for (int i = 0; i < sentence.size(); i++){
		char c = sentence[i];
		if (!isalpha(c)) { // check if the current character is not alphabetic
			endPos = i;
			reversedSentence += reverseString(sentence.substr(startPos, endPos - startPos)) + c;
			/* Reverse the substring from the start of the word to the end and
			   add it to the output sentence */

			startPos = endPos + 1;		
		}
	
	}

	cout << reversedSentence << endl;
	return 0;
}
