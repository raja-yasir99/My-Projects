#include<iostream>
using namespace std;
int main()
{
    //declaring variable to store 3 digit number...
	int number;

	//taking input from user...
	cout<<"\nENTER ANY 3-DIGIT NUMBER: ";
	cin>> number;
	
	//extracting digits using arithmetic opreters...
	int hundreds = number / 100;       
    int tens = (number / 10) % 10;     
    int ones = number % 10;
    
    
    //rearranging the extracted numbers to print the result...
    cout<<"\nREVERSED NUMBER IS: " << ones << tens << hundreds << endl;
    
    return 0;
}
