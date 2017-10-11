#include <iostream>
#include <string>

using namespace std;

int main(){

	string name, quest;
	int age;

	
	cout << "What is your name?  ";
	getline(cin, name);
	
	cout << "How old are you?  ";
	cin >> age;
	cin.ignore(10000, '\n');
	
	cout << "What is your quest?  ";
	getline(cin, quest);

	cout << "Hello, brave " << name << "! \nYou want " << quest << "." << endl;
	cout << "If you live, next year you will be " << age + 1 << "." << endl;

	
	return 0;

}
