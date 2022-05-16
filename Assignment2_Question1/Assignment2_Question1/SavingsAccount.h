#pragma once

class SavingsAccount {

private:
	//AnnualInterestRate is set to 0.0 for a default value (declared in SavingsAccount.cpp)
	static double AnnualInterestRate;
	//data member for storing the balance of the savings account
	double SavingsBalance;

public:
	//member function to set balance
	void SetBalance(double);
	//member function to modify the annual interest rate
	static void ModifyInterestRate(double);
	//member function to calculate the monthly interest
	double CalculateMonthInt();
};
