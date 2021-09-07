#include<iostream>
#include<cmath>
long long convertDecimaltoBinary(int);
using namespace std;
int main()
{
	int n,binarynumber;
	cout<<"Enter a decimal number: ";
	cin>>n;
	binarynumber=convertDecimaltoBinary(n);
	cout<<n<<" in decimal "<<" = "<<binarynumber<<" in binary number";
	return 0;
}
long long convertDecimaltoBinary(int n)
{
	long long binarynumber=0,i=1,step=1,remainder;
	while(n)
	{
		remainder=n%2;
		cout<<"Step "<<step++<<" : "<<n<<" /2 "<<" remainder "<<" = "<<remainder<<" Quotient "<<" = "<<n/2<<endl;
		n/=2;
		binarynumber+=remainder*i;
		i*=10;
	}
	return binarynumber;
}
