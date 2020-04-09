#include<iostream>
using namespace std;
class MyClass
{
	int n,students[50];
	public:
	void getroll()
	{
		cout<<"\n Enter the number of students present for test: ";
		cin>>n;
		cout<<"\n Enter the roll no.of students who were present for the test: ";
		for(int i=0;i<n;i++)
		{
			cin>>students[i];
		}
	}
	int fibo(int j)
	{
		if(j==0)
		return 0;
		if(j==1)
		return 1;
		else
		return ((fibo(j-1))+(fibo(j-2)));
	}
	bool fiboSearch(int key)
	{
		int f1,f2,mid,j=1;
		while(fibo(j)<=n)
			j++;
		
		f1=fibo(j-2);
		f2=fibo(j-3);
		mid=n-f1+1;
		while(key!=students[mid])
		{
		
		if(key>students[mid])
		{
			if(f1==1)
			break;
			mid=mid+f2;
			f1=f1-f2;
			f2=f2-f1;
		}
		else
		{
			if(f2==0)
				break;
			mid=mid-f2;
			int temp=f1-f2;
			f1=f2;
			f2=temp;
		}
		}
	
	if(students[mid]== key)
	{
		return true;
	}
	else
		return false;
}
void linearsearch()
{
	int rollno,i;
	cout<<"\n Enter the rollno you want to check attendence: ";
	cin>>rollno;
	for(i=0;i<n;i++)
	{
		if(students[i]==rollno)
		{
			cout<<"\n"<<rollno<<"was present for the test";
			break;
		}
	}
	if(i==n)
	{
		cout<<"\n"<<rollno<<"was not present for the test";
	}
  }
  void binarySearch()
  {
  	int mid,low,high,rollno;
  	cout<<"\n Enter the rollno of student you want to search: ";
  	cin>>rollno;
  	low=0;
  	high=n;
  	mid=((low+high)/2);
  	while(low<high)
  	{
  		mid=((low+high)/2);
  		if(students[mid]==rollno)
  		{
  			cout<<"\n "<<rollno<<"was present in the test.";
  			break;
  		
		  }
		  else if(students[mid]<rollno)
		  {
		  	low=mid+1;
		  }
		  else
		  {
		  	high=mid-1;
		  }
	  }
	  if(low>=high)
	  {
	  	cout<<"\n"<<rollno<<"was not present in the class";
	  }
  }
  void sentialSearch()
  {
  	int i,rollno;
  	cout<<"\n Enter the number you want to check attendence for: ";
  	cin>>rollno;
  	students[n]=rollno;
  	for(i=0;students[i]!=rollno;i++)
  	{
  		;
	  }
	  if(i<n)
	  {
	  	cout<<"\n "<<rollno<<" was  present in test.";
	  }
	  else
	  {
	  	cout<<"\n"<<rollno<<" was not present in test";
	  }

  }
};
int main()
{
	int rollno,choice;
	MyClass obj;
	obj.getroll();
	while(true)
	{
		cout<<"\n Enter 1 for linear search:";
		cout<<"\n Enter 2 for fibonacci search";
		cout<<"\n Enter 3 for binary serach";
		cout<<"\n Enterb 4  for sential search";
		cout<<"\n enter 5 to exit";
		cout<<"\n Enter your choice: ";
		cin>>choice;
	 switch(choice)
	 {
	 	case 1:
	 		obj.linearsearch();
	 		break;
	 	case 2:
		cout<<"\nEnter the roll no whom you want to search:";
		cin>>rollno;
		if(obj.fiboSearch(rollno))
		{
		cout<<"\n"<<rollno<<" was preseent in the test.";
		}	
		else
		cout<<"\n"<<rollno<<" was not preseent in the test.";
		break;
		case 3:
			obj.binarySearch();
			break;
		case 4:
			obj.sentialSearch();
			break;
		case 5:
			exit(0);
	}
	}
}
