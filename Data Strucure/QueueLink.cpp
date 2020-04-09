#include<iostream>
using namespace std;
class MyClass
{
	struct Node
	{
		int data;
		struct Node *link;
	} *Front,*Rear;
	public:
	MyClass()
	{
		Front=NULL;
		Rear=NULL;
	}
	
	void insert(int ele)
	{
		struct Node* temp=new Node;
		temp->data=ele;
		temp->link=NULL;
		if(Front==NULL && Rear==NULL )
		{
			Front=Rear=temp;
		}
		else
		{
			Rear->link=temp;
			Rear=temp;
		}
	}
	void Delete()
	{
		struct Node* temp=new Node;
		temp=Front;
		if(Front==0 && Rear==0)
		{
			cout<<"\n Queue is empty!!!!!!!";
		}
		else
		{
			Front=Front->link;
			cout<<"\n Data is deleted";
			
			
		}
		
	}
	void Display()
	{
		struct Node* temp;
		temp=new Node;
		
	
		if(Front==0 && Rear==0)
		{
			cout<<"\n Queue is empty";
		}
		else
		temp=Front;
		while(temp!=NULL)
		{
				
			cout<<"\n"<<temp->data;
			temp=temp->link;
		}
	}
	
};
int main()
{
	MyClass c;
	int c1,ele;
	while(true)
	{
		cout<<"\n Enter 1 to add in queue";
		cout<<"\n Enter 2 to delete from queue";
		cout<<"\n Enter 3 to display queue";
		cout<<"\n Enter 4 to exit";
		cout<<"\n Enter your choice...";
		cin>>c1;
		switch(c1)
		{
			case 1:
				cout<<"Enter element to add in your queue";
				cin>>ele;
				c.insert(ele);
				break;
			case 2:
				c.Delete();
				break;
			case 3:
				c.Display();
				break;
			case 4:
				exit(0);
				
		}
	}
}
