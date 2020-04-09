#include<iostream>
using namespace std;
class Pizza 
{
	int front,rear;
	int PizzaOr[5];
	public:
		Pizza()
		{
				front = rear = -1;
		}
	bool isFull()
	{
		if((front==0 && rear==4) || (front==rear+1))
		{
			return true;
		}
		else 
			return false;
	}
	bool isEmpty()
	{
		if(front==-1 && rear==-1)
		{
			return true;
		}
		else
			return true;
	}
	void insert(int ele)
	{
	
		if(isFull())
		{
			cout<<"Queue is full..you cannot add order";
		}
		else if(isEmpty())
		{
			front=rear=0;
			PizzaOr[rear]=ele;
			rear++;
		}
		else if(rear==4)
		{
			rear==0;
			PizzaOr[rear]=ele;
		}
		else 
		{
			rear++;
			PizzaOr[rear]==ele;
		}
		for(int i=0;i<4;i++)
		{
			cout<<"\n"<<PizzaOr[i];
		}
	}
	
};
int main()
{
	Pizza p;
	int c;
	while(true)
	{
		cout<<"\n enterv 1 to add order";
		cout<<"\n enter 2 to exit";
		cout<<"\n Enter your choice";
		cin>>c;
		switch(c)
		{
			case 1:
					int ele;
					cout<<"\n Enter your order....";
					cin>>ele;
				p.insert(ele);
				break;
			case 2:
				exit(0);
		}
	}
}
