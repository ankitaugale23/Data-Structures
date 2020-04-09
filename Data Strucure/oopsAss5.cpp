#include<iostream>
using namespace std;
int main()
{
	int a,b,add,sub,mul;
	float div;
	char operator1,choice;
		cout<<"\n Do you want to perfoem the operation y/n";
		cin>>choice;
	
			while(choice!='n')
			{
					
	
		cout<<"\n Enter first number operator and then second number...\n";
		cin>>a>>operator1>>b;
		switch(operator1)
		{
			case '+':
				add=a+b;
				cout<<"Addition of "<<a<<"and "<<b<<"is: "<<add;
				break;
			case '-':
					sub=a-b;
				cout<<"Substraction of "<<a<<"and "<<b<<"is: "<<sub;
				break;
			case '*':
					mul=a*b;
				cout<<"Multiplication of "<<a<<"and "<<b<<"is: "<<mul;
				break;
			case '/':
					div=a/b;
				cout<<"Division of "<<a<<"and "<<b<<"is: "<<div;
				break;
			default:
				cout<<"enter vaild choice";
				break;
		}
			cout<<"\n Do you want to perform the operation y/n";
			cin>>choice;
	
	}
     

	
}
