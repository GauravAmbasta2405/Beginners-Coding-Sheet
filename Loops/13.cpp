#include<iostream>
using namespace std;
int main()
{
	int low,high,n;
	bool isprime=true;
	cout<<"Enter the low and high number: ";
	cin>>low>>high;
	while(low<high)
	{
		isprime=true;
		if(low==0 || low==1)
		{
			isprime=false;
		}
		else{
			for(int i=2;i<=low/2;i++){
				if(low%i==0){
					isprime=false;
					break;
				}
			}
		}
		if(isprime){
			cout<<low<<" ";
		}
		++low;
		
	}
	return 0;
}
