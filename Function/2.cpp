#include<iostream>
using namespace std;
bool checkPrime(int n);
int main()
{
	int n,i;
	bool flag=false;
	cout<<"Enter a number: ";
	cin>>n;
	for(int i=2;i<=n/2;i++)
	{
		if(checkPrime(i)){
			if(checkPrime(n-i)){
				cout<<n<<" = "<<i<<" + "<<n-i<<endl;
				flag=true;
				
			}
		}
	}
	if(!flag){
		cout<<n<<" can't be expressed as sum of two prime numbers";
	}
	return 0;
}
bool checkPrime(int n){
	bool isPrime=true;
	if(n==0 || n==1)
		isPrime=false;
		else{
			for(int j=2;j<=n/2;j++){
				if(n%j==0){
					isPrime=false;
					break;
				}
			}
		}
		return isPrime;
}

