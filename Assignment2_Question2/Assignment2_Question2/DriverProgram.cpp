#include <iostream>
#include "Address.h"
#include "Person.h"
using namespace std;

int main() {

	//set address1
	Address address1;
	address1.SetAddress(118, "Wilson Street", "Woodstock", "New Brunswick");

	//set person1
	Person person1;
	person1.SetName("Matthew", "Brown");
	person1.SetAddress(address1);

	//set address2
	Address address2;
	address2.SetAddress(220, "Finlayson Street", "Thunder Bay", "Ontario");

	//set person2
	Person person2;
	person2.SetName("Allison", "Dykstra");
	person2.SetAddress(address2);

	//print person1 name and address
	cout << "Person 1 info:" << endl; 
	person1.DisplayName();
	person1.DisplayAddress();
	cout << "***********************" << endl << endl;

	//print person2 name and address
	cout << "Person 2 info:" << endl;
	person2.DisplayName();
	person2.DisplayAddress();
	cout << "***********************" << endl << endl;
}