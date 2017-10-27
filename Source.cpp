//Brittany Kelley
//October 26, 2017
//PC 5-16
// Savings Account Balance

#include <iostream>
#include <iomanip>
using namespace std;

void main()
{
	int AIR;
	int startingBalance;
	int monthsOpen;
	int eachMonth;
	int monthDeposit, monthWithdrawn;
	double depTotal = 0.0;
	double withTotal = 0.0;

	cout << "What is the annual interest rate?\n";
	cin >> AIR;
	cout << "\nWhat is the starting balance of the account?\n";
	cin >> startingBalance;
	cout << "\nHow many months has the account been open?\n";
	cin >> monthsOpen;

	for (eachMonth = 1; eachMonth <= monthsOpen; eachMonth++)
	{
		cout << "How much money was deposited into the account this month?\n";
		cin >> monthDeposit;
		depTotal += monthDeposit;
		cout << "How much money was withdrawn from the account this month?\n";
		cin >> monthWithdrawn;
		withTotal += monthWithdrawn;
	}
	
	cout << "The money deposited in the account is $ " << depTotal << endl;
	cout << "\nThe money withdrawn from the account is $ " << withTotal << endl;
	double endBalance = ((startingBalance + depTotal) - withTotal);
	
	//calculating the monthly interest rate
	double MIR = AIR / 12;

	cout << "\nThe ending balance including monthly interest rate is $ " << (endBalance * MIR) + endBalance << endl;



	system("Pause");
}