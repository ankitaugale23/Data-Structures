#include<iostream>
#include<string>
using namespace std;
class MyClass
{
	string str;
	char stk[50];
	int top;
	string::iterator istr;
	
	public:
	MyClass()
	{
		str=" ";
		top=0;
		for(int i=0;i<50;i++)
		{
			stk[i]=0;
		}
	}
	void getString()
	{
		cout<<"\n Enter the string you want to check if it is a palindrome: ";
		getline(cin,str);
		for(istr=str.begin(),top=0;istr!=str.end();++istr,top++)
		{
			stk[top]=*istr;
		
		}
		
	}
	void modifyString()
	{
		for(int i=top;i>=0;i--)
		{
			if(stk[i] >='A' && stk[i] <='Z')
			{
				stk[i]=stk[i] + 32;
			}
			else if(!(stk[i]>='a' && stk[i]<='z'))
			{
				for(int j=i;j<top;j++)
				{
					stk[j]=stk[j+1];
					
				}
				top--;
			}
			
		}
		
	}
	void compare()
	{
		int i=top,j=0;
		for(;i>=0 && j<=top;i--,j++)
		{
			if(stk[i]!=stk[j])
			{
				break;
			}
		}
		if(i==-1 && j > top)
		{
			cout<<"\n String is palindrome";
		}
		else
		{
			cout<<"\n String is not palindrome";
		}
	}
	
};
int main()
{
	MyClass obj;
	obj.getString();
	obj.modifyString();
	obj.compare();
}
