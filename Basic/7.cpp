#include<iostream>
using namespace std;
int main()
{
	// we explicitly print the integer value of char type that is nothing but its ASCII value of that character
	char c;
	cout<<"Enter a character: ";
	cin>>c;
	cout<<"ASCII value of "<< c<<" is "<<int(c);
	return 0;
}
