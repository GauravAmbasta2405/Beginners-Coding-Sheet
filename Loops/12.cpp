#include<iostream>
using namespace std;
int main()
{
	bool isprime=true;
	int n;
	cout<<"Enter the number: ";
	cin>>n;
	if(n==0 || n==1)             // 0 and 1 is not a prime number as prime number start from 2
	{
		isprime=false;
	}
	else{
		for(int i=2;i<=n/2;i++)
		{
			if(n%i==0)
			{
				isprime=false;
				break;
			}
		}
	}
	if(isprime)
	{
		cout<<n<<" is prime number"<<endl;
	}
	else{
		cout<<n<<" is not prime number"<<endl;
	}
	return 0;
}
