#include<iostream>
using namespace std;
int main()
{
	// using do while loop
	// we are storing largest number in max variable
	//then checking if both the number divisible by max or not untill it becomes divisble then we just break the loop
	int n1,n2,max;
	cout<<"Enter the two numbers: ";
	cin>>n1>>n2;
	max= (n1>n2)?n1:n2;
	do{
		if(max%n1==0 && max%n2==0)
		{
			cout<<"Lcm: "<<max;
			break;
		}
		else
			++max;
		}while(true);
	return 0;
}
