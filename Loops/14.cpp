#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	// pow() returns the double value
	//round() returns the equivalent integer
	//step1: counting the digits of a number
	//finding the power of individual digits in each iteration of while loop
	int num,originalnum,n=0,power,rem,result=0;
	cout<<"Enter a number: ";
	cin>>num;
	originalnum = num;
	while(originalnum)
	{
		originalnum/=10;
		++n;
	}
	originalnum=num;
	while(originalnum)
	{
		rem = originalnum%10;
		power = round(pow(rem,n));
		result+=power;
		originalnum/=10;
	}
	if(result == num)
	{
		cout<<num<<" is a armstrong number"<<endl;
	}
	else{
		cout<<num<<" is not a armstrong number"<<endl;
	}
	return 0;
	
}
