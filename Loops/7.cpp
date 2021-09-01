#include<iostream>
using namespace std;
int main()
{
	//use the formula :
	//lcm =(n1*n2)/hcf
	int n1,n2,lcm,gcd;
	cout<<"Enter two number: ";
	cin>>n1>>n2;
	int m=n1,n=n2;
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
			gcd=i;
		}
	}
	lcm = (n1*n2)/gcd;

	cout<<"Lcm: "<<lcm<<endl;
	return 0;

}
