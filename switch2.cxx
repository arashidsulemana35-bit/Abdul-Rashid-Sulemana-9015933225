#include <iostream>
using namespace std;
int main()
{
	char grade;
	cout<<"What letter grade?: ";
	cin>>grade;
	
	switch(grade){
		case 'A':
		cout<<"You did great!";
		break;
		
		case 'B':
		cout<<"You did good!";
		break;
		
		case 'C':
		cout<<"You did okay!";
		break;
		
		case 'D':
		cout<<"You did not do good!";
		break;
		
		case 'F':
		cout<<"YOU FAILED!!!!";
		break;
		
		
		default:
		cout<<"Please enter a letter grade from (A-F)";
		
		
		
		
		
	}
	
	return 0;	
	}