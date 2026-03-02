#include <iostream>
using namespace std;
int main()
{
	bool hungry=true;
	hungry ? cout<<"You're hungry! \n" : cout<<"You're full! \n"; 
	
	int number=8;
	number % 2 == 1? cout<<"ODD\n" : cout<<"EVEN\n";
	
	int grade=25;
	grade>=65 ? cout<<"You've passed!" : cout<<"You failed!";
	
	return 0;	
	}