#include<iostream>
#include<string>
using namespace std;
class MyClass 
{
	struct Node
	{
		int prn;
		string name;
		struct Node* link;
	} *Pres1,*Pres2,*sec1,*sec2;
	
	Node* getNode()
	{
		Node* temp=new Node;
		cout<<"\n Enter the prn of student.";
		cin>>temp->prn;
		cout<<"\n Enter the name of student";
		cin.get();
		getline(cin,temp->name);
		return temp;
	}
	
	void  addPresSec(int i)
	{
		Node* temp=new Node;
		Node *temp1 = new Node;
		if(i==1)
		{
			cout<"\n Enter the information of president of list1  ";
			cin>>temp->prn;
			cout<<"Enter the name of the president of list1: ";
			cin.ignore();
			getline(cin,temp->name);
			
			Pres1 = temp;
			
			cout<<"Enter the prn of the secretary: ";
			cin>>temp1->prn;
			cout<<"Enter name of secretay: ";
			cin.ignore();
			getline(cin,temp1->name);
			
			sec1 = temp1;
			
			Pres->link = sec1;
			sec->link = NULL;
		}
	}
	
	void addMember(int i)
	{
		Node *temp,*temp1;
		if(i == 1)
		{
			temp = getNode();
			temp1 = 
		}
	}
}
