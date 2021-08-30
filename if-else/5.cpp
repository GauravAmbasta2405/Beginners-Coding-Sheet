#include<iostream>
using namespace std;
int main()
{
	// if user enter a negative number then it will get terminated and print sum as zero
	// formula for sum of first natural number is : (n*(n+1))/2
	int n,sum=0;
	cout<<"Enter a positive number: ";
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		sum+=i;
	}
	cout<<"sum: "<<sum<<endl;
	return 0;
}
