#include<iostream>
using namespace std;
int main()
{
	// while loop will run untill both the numbers are not equal
	//if first number is bigger then subtract second from first
	//if second is bigger then subtract first from second
	int n1,n2,gcd;
	cout<<"Enter two numbers: ";
	cin>>n1>>n2;
	while(n1!=n2)
	{
		if(n1>n2)
			n1-=n2;
		else
			n2-=n1;
	}
		cout<<"Gcd: "<<n1<<endl;
		return 0;
}
