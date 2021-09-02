#include<iostream>
using namespace std;
int main()
{
	int n,m,r,rev=0;
	cout<<"Enter a number: ";   // Palindrome: if you reveres a number and if you find the same number as of original one then that number is palindrome
	cin>>n;
	m=n;
	while(n)
	{
		r=n%10;
		rev =rev*10+r;
		n/=10;
	}
	if(m == rev)
		cout<<"Number is palindrome"<<endl;
	else
		cout<<"Number is not palindrome"<<endl;
	return 0;
	
	
}
