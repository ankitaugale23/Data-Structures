#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int prec(char c)
{
	if(c=='^')
		return 3;
	if(c=='*' || c=='/')
	 return 2;
	 if(c=='+' || c=='-')
	  return 1;
	else
	 	return -1;
	
}

void infixToPostfix(string a)
{
	std::stack<char> st;
	string ns;
	st.push('N');
	for(int i=0;i<a.length();i++)
	{
		if((a[i]>='a' && a[i]<='z') || (a[i]>='A' && a[i]<='Z'))
		{
			ns+=a[i];
		}
		else if(a[i]=='(')
		{
			st.push(a[i]);
		}
		else if(a[i]==')')
		{
			while(st.top()!='N' && st.top()!='(')
			{
				char c=st.top();
				st.pop();
				ns+=c;
				
			}
			if(st.top() == '(')
			{
				char c=st.top();
				st.pop();
			}
		}
		else
		{
			while(st.top()!='N' && prec(a[i]<=prec(st.top())))
			{
				char c=st.top();
				ns+=c;
				st.pop();
			
			}
				st.push(a[i]);
		}
		
	}
	while(st.top()!='N')
	{
		char c=st.top();
		ns+=c;
		st.pop();
	}
	cout<<"\n"<<ns;
}
int main()
{
	string s;
	cout<<"\n Enter the infix expression";
	cin>>s;
	infixToPostfix(s);
	
}
