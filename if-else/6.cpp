#include<iostream>
using namespace std;
int main()
{
	//Number must be divisible by 4 and 400 or 100
	//n%4==0 && n%400==0 || n%100==0
	int year;
	cout<<"Enter a year: ";
	cin>>year;
	if(year%4==0){
		if(year%100==0){
			if(year%400==0)
				cout<<year<<" is a leap year"<<endl;
			else
				cout<<year<<" is not a leap year"<<endl;
		}
		else
			cout<<year<<" is a leap year"<<endl;
	}
	else
		cout<<year<<" is not a leap year"<<endl;
	return 0;
}
