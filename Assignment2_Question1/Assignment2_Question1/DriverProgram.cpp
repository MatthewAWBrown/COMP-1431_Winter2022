#include <iostream>
#include "SavingsAccount.h"
using namespace std;

int main() {

	//class object declaration
	SavingsAccount saver1, saver2;

	//set balances for saver1 and saver2
	saver1.SetBalance(2000.00);
	saver2.SetBalance(3000.00);

	//setting annual interest rate to 3%
	saver1.ModifyInterestRate(0.03);

	//cout balances calling the calculation function
	cout << "Balance of saver1 and saver2 on 3% interest rate." << endl;
	cout << "Balance of saver1 = " << saver1.CalculateMonthInt() << endl;
	cout << "Balance of saver2 = " << saver2.CalculateMonthInt() << endl << endl;

	return 0;
}