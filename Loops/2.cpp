#include<iostream>
using namespace std;
int main()
{
	//factorial of a negative number does not exist
	// if n=0 or 1 then factorial of n!=1
	//factorial of n numbers: 1*2*3*4.....*n
	//this will only calculate the factorial up to 1754 as the result will exceed the range of long double datatype
	
	int n;
	long double factorial=1.0;
	cout<<"Enter a number: ";
	cin>>n;
	if(n<0)
	{
		cout<<"Error! Factorial of a negative number doesn't exist";
	}
	else{
		for(int i=1;i<=n;i++)
		{
			factorial*=i;
		}
	cout<<"Factorial of "<<n<<" = "<<factorial;
	}
	return 0;	
}
