#include<iostream>
using namespace std;

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
int main()
{
	int A[10];
	cout<<"Enter the elemnts in array";
	for(int i=0;i<5;i++)
	{
		cin>>A[i];
	}
	QuickSort(A,0,4);
	for(int i=0;i<5;i++)
	{
		cout<<A[i];
	}
	
}
