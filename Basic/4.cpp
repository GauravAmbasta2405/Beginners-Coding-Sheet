#include<iostream>
using namespace std;
int main()
{
	int divisor,dividend,quotient,remainder;
	cout<<"Enter the divisor: ";
	cin>>divisor;
	cout<<"Enter the dividend: ";
	cin>>dividend;
	quotient = dividend/divisor; // The divison operator can be used for both integer and floating type variables
	remainder= dividend%divisor; // The modulus operator can only be used for integer type variables
	cout<<"Quotient: "<<quotient<<endl<<"Remainder: "<<remainder<<endl; 
	return 0;
}
