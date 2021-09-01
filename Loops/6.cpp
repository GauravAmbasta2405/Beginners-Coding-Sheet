#include<iostream>
using namespace std;
int main()
{
	//Method 1:
	//gcd or hcf of two number
	// swap the number if second number is greater than the first one
	//run the loop from 1 to the smallest number
	//if both the number is divisble by a i then that i is hcf of that two number
	int n1,n2,hcf;
	cout<<"Enter two numbers: ";
	cin>>n1>>n2;
	if(n2>n1)
	{
		int temp=n2;
		n2=n1;
		n1=temp;
	}
	for(int i=1;i<=n2;i++)
	{
		if(n1%i==0 && n2%i==0)
		{
			hcf=i;
		}
	}
	cout<<"hcf: "<<hcf<<endl;
	return 0;
}
