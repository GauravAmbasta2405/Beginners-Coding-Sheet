#include<iostream>
using namespace std;
int main()
{
	//Fibonacci series up to a particular numbers where first term and second term is 0 and 1
	//we use while loop for particular number and for loop for a particular terms
	int n,t1=0,t2=1,nextterm;
	cout<<"Enter a positive number: ";
	cin>>n;
	cout<<"Fibonacci Series: "<<t1<<","<<t2<<",";
	nextterm=t1+t2;
	while(nextterm<=n)
	{
		cout<<nextterm<<",";
		t1=t2;
		t2=nextterm;
		nextterm=t1+t2;
	}
	return 0;
}
