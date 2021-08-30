#include<iostream>
using namespace std;
int main()
{
	// Nested if-else statement we are using instead of using and(&) operator
	
	
	float n1,n2,n3;
	cout<<"Enter the three numbers: ";
	cin>>n1>>n2>>n3;
	if(n1>=n2)
	{
		if(n1>=n3)
			cout<<"Largest number: "<<n1;
		else
			cout<<"Largest number: "<<n3;
	}
	else{
		if(n2>=n3)
			cout<<"Largest number: "<<n2;
		else
			cout<<"Largest number: "<<n3;
	}
	return 0;
	
}
