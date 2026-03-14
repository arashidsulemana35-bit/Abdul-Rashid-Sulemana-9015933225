#include <iostream>
using namespace std;
int main()
{
	int age;
	
	cout<<"Enter your age.";
	cin>>age;
	
	if(age>=18){
		cout<<"Welcome to the website!";
		
	}
	else if(age<=0){
		cout<<"You're not born yet";
	}
	
	else{
		cout<<"You're not old enough to enter this site.";
	}

	
	
	
	return 0;	
	}