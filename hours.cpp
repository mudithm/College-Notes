#include <iostream>

using namespace std;

int main(){

        double hoursWorked, payRate, amtEarned, withholdingRate;

        cout << "How many hours did you work?  ";
        cin >> hoursWorked;
        
        cout << "What is your hourly rate of pay?  ";   
        cin >> payRate;
        
        amtEarned = hoursWorked * payRate;
        
        cout.setf(ios::fixed);
        cout.precision(2);
        
        cout << "You earned " << amtEarned << "." << endl; 
        
        if (payRate >= 14.00)
        	withholdingRate = .1;
	else           
		withholdingRate = .05;

	cout << "$" << amtEarned * withholdingRate << " will be withheld." << endl;
	
	if (payRate < 10.00)
		cout << "Ask for a raise!" << endl;
}
