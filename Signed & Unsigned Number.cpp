#include <iostream>
using namespace std;


int main()

 {
 	int number;

 	//First, we have to take a number as input from a user.
 	
 	cout<<"\nEnter Your Desired Number: ";
 	cin>> number;
 	
 	//If the user has entered negitive number.
 	
 	if(number >= 0)
 	{
     cout<<"\nEntered Number is an Unsigned Number: "<<endl;
    }
    
    //If the user has entered a positive number.
	else
 	{
 	cout<<"\nEntered Number is a Signed Number: "<<endl;	
	}
 	
 	return 0;
}
