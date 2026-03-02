#include <iostream>
using namespace std;
int main()
{
   int temp;
   
   bool sunny;
   
   cout<<"Enter the temperature:  ";
   cin>>temp;
   
   if(temp<=0 || temp>=30){
   	
   	cout<<"The temperature is bad! \n";
   }
   else{
   	
   	cout<<"The temperature is good! \n";
   	
   	
   }
	if(!sunny){
		
		cout<<"It's cloudy outside.";
		
	}
	else{
		cout<<"It's sunny outside.";
	}
	return 0;	
	}