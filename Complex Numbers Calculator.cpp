#include<iostream>
using namespace std;
int main()
{
	
	//declaring variables to store real and imagnary parts, a for real part and b for imagnary part.
	int a1;
	int b1;
	int a2;
	int b2;
	
	//taking real and imaginary part of complex numbers as input from the user...
	cout<<"\nENTER THE REAL PART OF FIRST COMPLEX NUMBER:";
	cin>>a1;
	
	cout<<"\nENTER THE IMAGINARY PART OF FIRST COMPLEX NUMBER:";
	cin>>b1;
	
	cout<<"\nENTER THE REAL PART OF SECOND COMPLEX NUMBER:";
	cin>>a2;
	
	cout<<"\nENTER THE IMAGINARY PART OF SECOND COMPLEX NUMBER:";
	cin>>b2;
	
	//performing opreations now...
	//addition
	int addition_real = a1+a2;
	int addition_imaginary = b1+b2;
	
	cout << "\n\nRESULT OF ADDITION IS: " << addition_real << " + " << addition_imaginary << "i" << endl;
	
	//subtraction
	int subtraction_real = a1-a2;
	int subtraction_imaginary = b1-b2;
	
	cout << "\nRESULT OF SUBTRACTION IS: " << subtraction_real << " + " << subtraction_imaginary << "i" << endl;
	
	//multiplication
	int multiplication_real = (a1 * a2) - (b1 * b2);
    int multiplication_imaginary = (a1 * b2) + (b1 * a2);
    
    cout << "\nRESULT OF MULTIPLICATION IS: " << multiplication_real << " + " << multiplication_imaginary << "i" << endl;
    
	return 0;
}
