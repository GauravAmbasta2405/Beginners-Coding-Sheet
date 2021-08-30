#include<iostream>
using namespace std;
int main()
{
	// method 2: ternary operator: it is a shortend operator we use in place of if-else
	//syantax:(condition)?(true):(false);
	//(n%2==0)?number is even: number is odd
	int n;
	cout<<"Enter a number: ";
	cin>>n;
	if(n%2==0)
	{
		cout<<"Number is even"<<endl;
		
	}
	else{
		cout<<"Number is odd"<<endl;
	}
	return 0;
}
