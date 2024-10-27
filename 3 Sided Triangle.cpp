#include <iostream>
using namespace std;

int main()

{
	float Side_A;
	float Side_B;
	float Side_C;  
	float Sum_of_Two_Sides;
	//ENTER SIDES OF TRIANGLE.
	cout<<"Enter Side A: ";
	cin>> Side_A;
	
	cout<<"Enter Side B: ";
	cin>> Side_B;
	
	cout<<"Enter Side C: ";
	cin>> Side_C;
	
	//this formula is used to calculate the sum of two sides which are greater than or equal to third side. i.e triangle inequality.
	 bool isTRIANGLE = (Side_A + Side_B >= Side_C) && (Side_A + Side_C >= Side_B) && (Side_B + Side_C >= Side_A);
	 cout << (isTRIANGLE ? "These points form 3 Sided Triangle " : "These points do not form 3 Sided Triangle: ")<<endl;

}
