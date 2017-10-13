#include <iostream>

using namespace std;

int main(){
	int n;
	cout << "Enter a number greater than 4:  " ;
	cin >> n;
	
	if (n < 5){
		cout << "bad input.";
		return -1;
	}

	int meme[n+1];
	int b = n;
	int out = 1;


	for (int x = 1; x <= b ; x++){
		out *= x ;
		meme[x] = out;
	}	

	cout << meme[b] << endl;
	cout << meme[b - 1] << endl;
	cout << meme[b - 2] << endl;
	cout << meme[b - 3] << endl;



}
