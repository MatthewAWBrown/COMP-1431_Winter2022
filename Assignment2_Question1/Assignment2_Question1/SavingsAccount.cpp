#include <iostream>
#include "SavingsAccount.h"
using namespace std;

//AnnualInterestRate is set to 0
double SavingsAccount::AnnualInterestRate = 0;

//static function for modifying interest rate
void SavingsAccount::ModifyInterestRate(double iRate) {
	AnnualInterestRate = iRate;
}

//function to set the balance of the savings account
void SavingsAccount::SetBalance(double bal) {
	SavingsBalance = bal;
}

//function for calculating savings balance with monthly interest
double SavingsAccount::CalculateMonthInt() {
	double monthInt = 0;
	monthInt += SavingsBalance * AnnualInterestRate / 12;
	return SavingsBalance += monthInt;
}