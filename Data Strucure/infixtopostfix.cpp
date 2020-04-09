#include<iostream>
using namespace std;
void push(char stack[100],char c)
{
	int top=0;
	stack[top]=c;
	top++;
	
}
int setPrecedece(char ch)
{
	switch(ch)
	{
		case '+':
			return 1;
			break;
		case '-':
			return 1;
			break;
		case '*':
			return 2;
			break;
		case '/':
			return 2;
			break;
			
	}
}

int main()
{
	int i=0,j=0,a;
	char infix[100],postfix[100],stack[10];
	while(infix[i]!='/0')
	{
		if(infix[i]=='+' || infix[i]=='-' || infix[i]=='*' || infix[i]=='/')
		{
			a=setPrecedence(infix[i]);
		
			if()
			
				push(stack,infix[i])
			
		}
		else if(infix[i]>='a' && infix[i]<='z')
		{
			postfix[j]=postfix[j]+infix[i];
			j++;
		}
	}

	
	
}
