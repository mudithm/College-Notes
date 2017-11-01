#include <iostream>

using namespace std;

void swapInt(int& a, int& b, string& meme1, string& second1){
	int c = a;
	if (a < 0)
		meme1 = "negative";
	if (b < 0)
		second1 = "negative";	
	a = b;
	b = c;
}

int main(){
	
	cout << "Enter two numbers separated by a space:  ";
	int meme = 65, second = 99;
	cin >> meme >> second;
	string meme1="nonnegative", second1 = "nonnegative";
	
	cout << meme << " " << second << endl;	




	swapInt(meme, second, meme1, second1);
	cout << meme << " " << second << endl;
	
	cout << "Meme is " << second1 << " and Second is " << meme1  << "." << endl;

}

