#include<iostream>
using namespace std;
int main()
{
	int firstNumber,secondNumber;
	int sum=0;
	cout<<"Enter two integers: ";
	cin>> firstNumber>> secondNumber;     //we can't use endl or "\n" in the same line where we are taking the input
	sum=firstNumber+secondNumber;
	cout<<"Sum: "<<firstNumber<<"+"<<secondNumber<<"="<<sum<<endl;
	return 0;

}
