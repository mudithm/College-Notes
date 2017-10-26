#include <iostream>

using namespace std;

void exchange(int& a, int& b);

int main(){
	
	int a;
	int b;

	cin >> a >> b;

	if (a < b)
		exchange(a, b);
	
	cout << a << " is at least as big as " << b << endl;

}

void exchange(int& a, int& b){

	int t = a;
	a = b;
	b = t;

}
