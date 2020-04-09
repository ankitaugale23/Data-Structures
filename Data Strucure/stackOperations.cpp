#include<iostream>
using namespace std;


int main()
{
	int stack[10],choice,i,top=-1,item;
	while(1)
	{
		cout<<"\nEnter 1 to push the element into the stack";
		cout<<"\nEnter 2 to pop the element from the stack";
		cout<<"\n Enter 3 to display stack";
		cout<<"\nEnter 4 to quit ";
	
		cout<<"\nenter your choice";
		cin>>choice;
		switch(choice)
		{
			case 1:
				cout<<"\nenter the element to push onto stack";
				cin>>item;
				top++;
				stack[top]=item;
				break;
			case 2:
				cout<<"\n"<<stack[top]<<"is deleted from stack";
				--top;
				break;
			case 3:
				cout<<"\n Here is the stack";
				for(i=0;i<=top;i++)
				{
					cout<<"\n"<<stack[i];
				}
				break;
			case 4:
				return(0);
				break;
			default:
				cout<<"enter valid choice";
		}
	}
	
}
