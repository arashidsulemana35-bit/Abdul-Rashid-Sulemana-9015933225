#include <iostream>
using namespace std;
#include <cmath>
int main()
{
	double x=4;
	double y=4.1;
	double z;
	double q=3.14576;
	double a, b, c, d;
	
	z=max(x,y);
	cout<<z<<endl;
	
	a=pow(2,3);
	cout<<a<<endl;
	
	b=sqrt(9);
	cout<<b<<endl;
	
	c=abs(-1.6);
	cout<<c<<endl;
	
	d=round(q);
	cout<<d;
	
	return 0;	
	}