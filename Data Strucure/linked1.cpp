#include<iostream>
using namespace std;
struct node
{
	int data;
	struct node* link;
};
struct node* root;
int len;
void append()
{
	struct node* temp=(struct node*)new node;
	cout<<"Enter data for the node";
	cin>>temp->data;
	temp->link=NULL;
    
	if(root==NULL)
	{
		root=temp;
	}
	else
	{
		struct node* p=new node;
		p=root;
		while(p->link!=NULL)
		{
			p=p->link;
		}
		p->link=temp;
	}
}
void display()
{
	struct node* temp=(struct node*)new node;
	if(root==NULL)
	{
		cout<<"list is empty";
		
	}
	else
	{
		temp=root;
		while(temp!=NULL)
		{
			cout<<temp->data;
			temp=temp->link;
		}
	}
}
int length1()
{
	struct node* temp=new node;
	int count=0;
	temp=root;
	while(temp!=NULL)
	{
		count++;
		temp=temp->link;
		
	}
	return count;
}
void deleteLast()
{
	struct node* temp=new node;
	temp=root;
	if(temp==NULL)
	{
		cout<<"No element for deletion";
		
	}
	else
	{
		while(temp->link!=NULL)
		{
			temp=temp->link;
		
		}
		temp=NULL;
		
	}
	
}
int main()
{
	append();
	append();
	append();
	display();
	len=length1();
	cout<<"Length is:"<<len;
	deleteLast();
	display();
	return 0;
}
