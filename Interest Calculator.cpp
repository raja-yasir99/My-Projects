#include <iostream>
using namespace std;

int main()

{
	// Assign Variables for the user to input values.
	
	int initial_deposite;    // P is the initial deposite.
	float annual_interest_rate;  // r is the annual interest rate.
	int corresponding_periods_per_year; // k is the corresponding periods per year.
	int number_of_years; // n is the number of years.
	int final_amount_of_money_after_n_years;  // A is the final amount of money after 10 years.
	
	cout<<"\n Enter Your Initial Deposite: ";
	cin>> initial_deposite;
	
	cout<<"\n Enter Your Annual Interest Rate: ";
	cin>> annual_interest_rate;
	
	cout<<"\n Enter Your Corresponding Periods Per Year: ";
	cin>> corresponding_periods_per_year; 
	
	cout<<"\n Enter Number of years: ";
	cin>> number_of_years;
	
	// user will enter their annual interest rate in number and it will be converted into percentage by dividing it by 100.
	annual_interest_rate = annual_interest_rate/100; 
	
	// Now Total Amount of Money Will be Calculated After n years by using the given Formula.
	
	final_amount_of_money_after_n_years = initial_deposite * (1 + annual_interest_rate/corresponding_periods_per_year)*(corresponding_periods_per_year * number_of_years);
	
	cout<<"\n Final Amount Of Money: " <<final_amount_of_money_after_n_years<< endl;
	
	return 0;
}
