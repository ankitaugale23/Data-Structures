#include<iostream>
using namespace std;
void select()
{
	int i,j,arr[4]={9,6,5,7},min;
	for(i=0;i<4-1;i++)
	{
		min=i;
		for(j=i+1;j<4;j++)
		{
			if(arr[min]>arr[j])
			{
				min=j;
			}
		}
		swap(arr[min],arr[i]);
	}
	for(i=0;i<4;i++)
	{
		cout<<arr[i];
	}
}
int main()
{
	select();
	return 0;
	
}
