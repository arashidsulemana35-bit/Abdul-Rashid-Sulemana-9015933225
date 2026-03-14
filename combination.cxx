#include <iostream>
using namespace std;
int main()
{
	std::string name;
	int age;
	cout<<"What's your name?:";
	getline(cin, name);
	cout<<"What's your age?:";
	cin>>age;
	 
	cout<<"Hello "<<name<<"!"<< endl;
	cout<<"You're "<<age<<" years old";
	
	
	
	return 0;	
	}