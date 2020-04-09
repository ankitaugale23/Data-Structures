#include<iostream>
using namespace std;
int main()
{
	int Arr[10];
	for(int i=0;i<5;i++)
	{
		cin>>Arr[i];
		
	}
	for(int i=0;i<5-1;i++)
	{
		for(int j=0;j<5-i-1;j++)
		{
			if(Arr[j]>Arr[j+1])
			{
				swap(Arr[j],Arr[j+1]);
			}
		}
	}
	for(int i=0;i<5;i++)
	{
		cout<<Arr[i];
	}
}
