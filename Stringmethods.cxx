#include <iostream>
using namespace std;
int main()
{
	string name;
	
	cout<<"Enter your name:  ";
    getline(cin, name);
	
	if(name.length()>12){
		
		cout<<"Your name can't be over 12 characters \n";
	}
	else{
		cout<<" Welcome "<<name<<endl;
	}

   
   
   name.append("@gmail.com");
   cout<<"Your username is "<<name<<endl;
   cout<< name.at(0)<<endl;
   
   name.insert(0, "@");
   cout<<name;
	
	
	return 0;	
	}