#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	//sqrt() is a library function for which you need to include the header files #include<cmath>
	//case1: d>0
	// x1=(-b+sqrt(d))/(2*a)
	//x2=(-b-sqrt(d))(2*a)
	//case2: d==0
	// x1=x2= -b/(2*a)
	//case3: d<0
	//realaprt=-b/(2*a)
	//imaginarypart=(sqrt(-d))/(2*a)
	//x1= realpart+imaginarypart*i
	//x2=realpart-imaginarypart*i
	
	float a,b,c,x1,x2,realpart,imaginarypart,discriminant;
	cout<<"Enter the coefficient of a,b,c: ";
	cin>>a>>b>>c;
	discriminant= b*b-4*a*c;
	if(discriminant>0)
	{
		x1= (-b + sqrt(discriminant))/(2*a);
		x2=(-b - sqrt(discriminant))/(2*a);
		cout<<"Roots are real and different"<<endl;
		cout<<"x1="<<x1<<endl;
		cout<<"x2="<<x2<<endl;
	}
	else if(discriminant==0)
	{
		x1=-b/(2*a);
		cout<<"Roots are real and same"<<endl;
		cout<<"x1=x2="<<x1<<endl;
	}
	else{
		realpart= -b/(2*a);
		imaginarypart=(-discriminant)/(2*a);
		cout<<"Roots are complex and different"<<endl;
		cout<<"x1="<<realpart<<"+"<<imaginarypart<<"i"<<endl;
		cout<<"x2="<<realpart<<"-"<<imaginarypart<<"i"<<endl;
	}
	return 0;
}
