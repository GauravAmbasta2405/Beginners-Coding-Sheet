#include<iostream>
using namespace std;
int main()
{
	//Fibonacci series is a series where next term is the sum of previous two term
	//first term is 0 and secon term is 1
	//continue takes you to the next iteration of the loop
	//Fibonacci series: 0,1,1,2,3,5,8,13,21,34
	//Fibonacci series up to a particular terms
	int n,t1=0,t2=1,nextterm=0;
	cout<<"Enter the number of terms: ";
	cin>>n;
	cout<<"Fibonacci series: ";
	for(int i=1;i<=n;i++)
	{
		if(i==1)
		{
			cout<<t1<<",";
			continue;
		}
		if(i==2)
		{
			cout<<t2<<",";
			continue;
		}
		nextterm=t1+t2;
		t1=t2;
		t2=nextterm;
		
		
		cout<<nextterm<<",";
	}
	return 0;
}
