#include<iostream>
using namespace std;
int main()
{
	// bool is a datatype which only return either true or false
	//isalpha() is a function for checking whether it is a alphabet or not
	char c;
	bool isLowercaseVowel, isUppercaseVowel;
	cout<<"Enter an alphabet: ";
	cin>>c;
	isLowercaseVowel= (c=='a'|| c=='e'|| c=='i'|| c=='o'|| c=='u');
	isUppercaseVowel= (c=='A'|| c=='E'|| c=='I'||c=='O'||c=='U');
	if(!isalpha(c)){
		cout<<"Error! not an alphabet.";
	}
	else if(isLowercaseVowel || isUppercaseVowel)
	{
		cout<<c<<" is a vowel";
	}
	else{
		cout<<c<<" is a consonant";
	}
	return 0;
}
