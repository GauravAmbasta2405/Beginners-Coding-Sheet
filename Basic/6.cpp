#include<iostream>
using namespace std;
int main()
{
	//There is another method as well for swapping
	// n1=n1+n2;
	//n2=n1-n2;
	//n1=n1-n2;
	// we can use multiplication and divison operator in place of addition and subtraction for doing this as well though it will not give correct result if any of the number is zero
	int n1,n2,temp;
	cout<<"Enter number1: ";
	cin>>n1;
	cout<<"Enter number2: ";
	cin>>n2;
	cout<<"Before swapping: "<<endl;
	cout<<"n1: "<<n1<<" "<<"n2: "<<n2<<endl;
	temp=n1;
	n1=n2;
	n2=temp;
	cout<<"After swapping: "<<endl;
	cout<<"n1: "<<n1<<" "<<"n2: "<<n2<<endl;
	return 0;
}
