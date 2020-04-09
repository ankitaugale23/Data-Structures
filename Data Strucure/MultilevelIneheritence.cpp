#include<iostream>
using namespace std;
class PersonalData
{
	char name[10];
	int age,mobno;
	PersonalData()
	{
		cout<<"Enter the name of the employee";
		cin>>name;
		cout<<"\n Enter the mobile no. of employee";
		cin>>mobno;
		cout<<"\n Enter the age of employee";
		cin>>age;
		
	}
	void display()
	{
		cout<<"Name: "<<name<<"\n mob no is: "<<mobno<<"\n age is: "<<age<<"\n";
	}
};
class ProfData
{
	int experience;
	char profession[30];
	ProfData()
	{
		cout<<"Enter the no. of in years";
		cin>>experience;
		cout<<"\n Enter the profession you are intrested to work in";
		cin>>profession;
	}
	
};
class Acdemeics
{
	char degree[10],college[50];
	float percentage;
	Acedemics()
	{
		cout<<"enter the degree you have completed";
		cin>>degree;
		cout<<"\n enter the name of your college";
		cin>>college;
		cout<<"\n Enter the percentage";
		cin>>percentage;
	}
};
class BioData:public ProfData,public PersonalData
{
	 
};
int main()
{
	
}
