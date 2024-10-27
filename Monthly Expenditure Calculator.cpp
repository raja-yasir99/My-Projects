#include<iostream>
using namespace std;
int main()
{
	
	//declaring variables for daily expense, number of weeks in month and Total Expense in a month...
	int daily_expense_amount;
	int number_of_weeks_in_month;
	int total_expense;
	
	//taking daily expense and number of weeks from user...
	cout<<"ENTER YOUR DAILY EXPENSE AMOUNT: ";
	cin>> daily_expense_amount;
	
	cout<<"ENTER THE NUMBER OF WEEKS IN A MONTH: ";
	cin>> number_of_weeks_in_month; 
	
	//calculation of total expenses... 
	
	total_expense = daily_expense_amount * 7 * number_of_weeks_in_month;
	
	//result 
	cout<<"\nYOUR TOTAL EXPENSES IN A MONTH: " << total_expense << endl;
	
	return 0;
		
}
