#include <iostream>
#include <cstring>
#include <array>

using namespace std;

void copyUsingLoop(char a[], char b[]){
	int i = 0;
	for (; a[i] != '\0'; i++)
		b[i] = a[i];
	b[i+1] = '\0';	
}

int compareUsingLoop(char a[], char b[]){
	for (int i = 0;; i++){
		if (a[i] == '\0' || b[i] == '\0')
			if (a[i] == b[i])
				return 0;
			else if (a[i] < b[i])
				return 1;
			else
				return -1;
		if (a[i] < b[i]){	
			cout << a[i] << "is less than " << b[i] << endl;
			return -1;
		}
		else if (a[i] > b[i]){
			cout << a[i] << "is greater than " << b[i] << endl;
			return 1;
		}
		
	}
	return 0;
}

int main(){

	char s[10] = "buttcheek";
	cout << s << endl;	
	char t[11];
	copyUsingLoop(s, t);
	cout << t << endl;
	t[9] = '5';
	t[10] = '\0';	
	cout << t  << endl;
	cout << compareUsingLoop(t, t) << endl;	
	cout << compareUsingLoop(s, t) << endl;	
	cout << compareUsingLoop(t, s) << endl;
}
