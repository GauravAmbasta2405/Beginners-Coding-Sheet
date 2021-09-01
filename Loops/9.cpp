#include<iostream>
using namespace std;
int main()

{
	// sum of digits of a number and reverse a number follows the same logic
	int n,r,sum=0;
	cout<<"Enter a number: ";
	cin>>n;
	while(n!=0)
	{
		r=n%10;
		sum+=r;
		n/=10;
	}
	cout<<"Sum: "<<sum<<endl;
	return 0;
		
	
}

