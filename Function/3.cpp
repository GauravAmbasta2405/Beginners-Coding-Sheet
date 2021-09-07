#include<iostream>
#include<cmath>
using namespace std;
int convertBinarytoDecimal(long long);
int main()
{
	long long n;
	cout<<"Enter a binary number: ";
	cin>>n;
	cout<<n<<" in binary " <<" = "<< convertBinarytoDecimal(n)<<" in decimal";
	return 0;
}
int convertBinarytoDecimal(long long n){
	int decimalnumber=0;
	int i=0;
	int remainder;
	while(n){
		remainder=n%10;
		n/=10;
		decimalnumber+= remainder*pow(2,i);
		i++;
	}
	return decimalnumber;
}
