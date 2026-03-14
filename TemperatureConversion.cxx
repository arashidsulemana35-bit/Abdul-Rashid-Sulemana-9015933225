#include <iostream>
using namespace std;
int main()
{
	double temp;
	char unit;

	cout<<"*******Temperature Conversion********"<<endl;
	cout<<"F=Fahrenheit"<<endl;
	cout<<"C=Celcius"<<endl;
	cout<<"Which unit do you want to convert to?:   ";
	cin>>unit;
	
	if(unit=='F' || unit=='f'){
		cout<<"Enter the temperature in Celcius: ";
				cin>>temp;
		
		temp=(1.8*temp)+32;
		cout<<"Temperature is: "<<temp<<"F"<<endl;	
	}
	else if(unit=='C' || unit=='c'){
		cout<<"Enter temperature in Fahreinheit: ";
		cin>>temp;
		
		temp=(temp-32)/1.8;
		cout<<"Temperature is: "<<temp<<"C"<<endl;
		
		
	}
	else{
		cout<<"Please enter in only C or F\n";
	
	
	}
	
	
	cout<<"***********************************";
	return 0;	
	}