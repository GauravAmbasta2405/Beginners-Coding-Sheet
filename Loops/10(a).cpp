#include<iostream>
using namespace std;
int main()
{
	int exponent;
	float base,result=1;
	cout<<"Enter the base and exponent: ";
	cin>>base>>exponent;
	cout<<base<<"^"<<exponent<<" = ";
	while(exponent)                         // find the power of a number without using pow()
	{                                       // result*base until exponent is greater than 0
		result*=base;
		exponent--;
	}
	cout<<result<<endl;
	return 0;
}
