#include <iostream>
#include <string>
#include <cctype>


using namespace std;

bool validNum(string number);
string getNumber(string stringNumber);

int main(){
	string phoneInput;
	

	cout << "Please enter your phone number:  ";
	getline(cin, phoneInput);
	
	if (validNum(phoneInput))
		cout << "The digits in the number are " + getNumber(phoneInput) << endl;
	else
		cout << "The phone number must have exactly 10 digits." << endl;

	return 0;

}

string getNumber(string stringNumber){
	string out = "";

	for (int i = 0; i < stringNumber.size(); i++)
		if (isdigit(stringNumber[i]))
			out += stringNumber[i];

	return out;	
	
}

bool validNum(string number){
	string val = getNumber(number);
	if (val.size() == 10)
		return true;
	else
		return false;

}
