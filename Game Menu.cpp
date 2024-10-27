#include<iostream>
using namespace std;
int main()
{
	int o;
	int s;
	
	Main_Menu:
	cout<<"\n\n\n\t\t\t\t\t\t\t WELCOME TO XYZ WARSHIP" << endl;
	cout<<"\n\n\n\t\t\t\t\t ENJOY THE DIFFERENT MOODS OF REALISTIC BATTLES ONLINE." << endl;
	cout<<"\n\n\n\t\t Please Select From The Game Menu: "<<endl;
	
	// Menu display
	cout<<"\n\n\n\t\t\t\t\t\t MAIN MENU: ";
	cout<<"\n\n\t1- New Game"<<endl;
	cout<<"\n\t2- Resume Game"<<endl;
	cout<<"\n\t3- Save Game"<<endl;
	cout<<"\n\t4- Select Mission: "<<endl;
	cout<<"\n\t5- Load Game"<<endl;
	cout<<"\n\t6- Delete Games" <<endl;
	cout<<"\n\t7- Quit Game"<<endl;
	
	// the user will select from number 1 to 5.
	cout<<"\n\tENTER THE NUMBER: ";
	cin>>o;
	
	// Output according to the user choice.
	if(o == 1){
		cout<<"\n\tNew Game has been Started.";
		cout<<"\n\n\n\tPress 0 to Return to the Main Menu. ";
		cin>>o;
		cout<<endl;
		
		if(o==0)
		{
			goto Main_Menu;
		}
	}
	
	else if(o == 2){
		cout<<"\n\tGame has been resumed.";
			cout<<"\n\n\n\tPress 0 to Return to the Main Menu. ";
		cin>>o;
		cout<<endl;
		
		if(o==0)
		{
			goto Main_Menu;
		}
	}
	
	else if(o == 3)
	{
		cout<<"\n\tCurrent Game has been saved.";
			cout<<"\n\n\n\tPress 0 to Return to the Main Menu. ";
		cin>>o;
		cout<<endl;
		
		if(o==0)
		{
			goto Main_Menu;
		}
	}
	
	// User will select mission from 1 - 3 by entering mission number.
	else if(o==4)
	{
		cout<<"\n\tSelect Mission: " << endl;
		cout<<"\n\t1- Mission Imposible" <<endl;
		cout<<"\n\t2- Mission Air Strike" <<endl;
		cout<<"\n\t3- Mission DOG FIGHT" <<endl;
		cout<<"\n\t4- Mission Naval War" <<endl;
		
		cout<<"\n\tEnter Mission Number: ";
		cin>>s;
		
		
		//according to the user chcoice, mission will be started.
		if(s==1)
		{
			cout<<"\n\n\n\t\t\t\t\t\t Mission Imposible Started" <<endl;
		}
		else if(s==2)
		{
			cout<<"\n\n\n\t\t\t\t\t\t Mission Air Strike Started "<<endl;
		}
		if(s==3)
		{
			cout<<"\n\n\n\t\t\t\t\t\t Mission DOG FIGHT Started" <<endl;
		}
		else if(s==4)
		{
			cout<<"\n\n\n\t\t\t\t\t\t Mission Naval War Started" <<endl;
		}
		
		
		//after every function, if user wants to return to the main menu, they need to press 0.
		cout<<"\n\n\n\tPress 0 to Return to the Main Menu. ";
		cin>>o;
		cout<<endl;
		
		if(o==0)
		{
			goto Main_Menu;
		}
		
		
	}
	else if(o == 5)
	{
		cout<<"\n\tLoading Game...";
		cout<<"\n\n\n\tPress 0 to Return to the Main Menu. ";
		cin>>o;
		cout<<endl;
		
		if(o==0)
		{
			goto Main_Menu;
		}
	}
	
	else if(o==6)
	{
		cout<<"\n\t All Saved Games are Deleted.";
		cout<<"\n\n\n\t Press 0 to Return to the Main Menu. ";
		cin>>o;
		cout<<endl;
		
		if(o==0)
		{
			goto Main_Menu;
		}
	}
	
	else if(o == 7)
	{
		cout<<"\n\tI am quiting the game.";
	}
	
	// if user enter any number other than numbers in menu, error message will be displayed.
	else
	{
		cout<<"\n\tPlease Select a Valid Number from Menu.";
	}
	return 0;
	
}

