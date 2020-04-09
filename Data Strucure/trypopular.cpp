#include <iostream>
using namespace std;

int main()
{

int topCount=0, count, topElement, array[10];

for (int i=0 ; i<10 ; i++)
{
    cin>>array[i];
}

for ( int i=0 ; i<10 ;i++)
{
    count=0;
    for (int j=0 ; j<10 ; j++)
    {
        if (array[i]==array[j]) count++;
    }
    if (count>topCount)
    {
        topCount=count;
        topElement=array[i];
    }
}

cout<<topElement<<" "<<topCount;
}
