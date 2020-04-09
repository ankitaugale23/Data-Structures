#include<iostream>
using namespace std;
void Bubble1(int A[])
{
	
	for(int i=0;i<10-1;i++)
	{
		for(int j=0;j<10-i-1;j++)
		{
			if(A[j]>A[j+1])
			{
				swap(A[j],A[j+1]);
			}
		}
	}

}
	void select(int A[])
  {
	int i,j,min;
	
	for(i=0;i<10-1;i++)
	{
		min=i;
		for(j=i+1;j<10;j++)
		{
			if(A[min]>A[j])
			{
				min=j;
			}
		}
		swap(A[min],A[i]);
	}

}

//Functions to be used in quick sort...................
	int Partition(int *A, int start,int end)
{
	int pivot=A[end];
	int partIndex=start;
	for(int i=start;i<end;i++)
	{
		if(A[i]<=pivot)
		{
			swap(A[i],A[partIndex]);
			partIndex++;
		
		}
		
	}
     	swap(A[partIndex],A[end]);//To place the pivot in correct position
		return partIndex;
}
void QuickSort(int *A,int start,int end)
{
	if(start<end)
	{
		int partIndex=Partition(A,start,end);
		QuickSort(A,start,partIndex-1);
		QuickSort(A,partIndex+1,end);
	}
}



int  main()
{
	int choice;
	int A[10];
	cout<<"Enter the percentage of  10 students ";
	for(int i=0;i<10;i++)
	{
		cin>>A[i];
		
	}
	
		while(choice!=5)
	{
	
	cout<<"Enter 1 to sort percentages using bubble sort\n";
	cout<<"Enter 2 to sort percentages  using Selction sort\n";
	cout<<"Enter 3 to sort percentages using Quick sort\n";
	cout<<"Enter 4 to display top five scores\n";
	cout<<"Enter 5 to quit";	
	cin>>choice;

	switch(choice)
	{
		case 1:
			Bubble1(A);
			break;
		case 2:
			select(A);
			break;
		case 3:
			
			QuickSort(A,0,10);
	
			break;
			case 4:
				for(int i=0;i<5;i++)
				{
					cout<<"\n"<<A[i];
				}
				break;
			case 5:
				return 0;
				break;
			
		default:
			cout<<"Enter valid choice";
			break;
	}
}
}

