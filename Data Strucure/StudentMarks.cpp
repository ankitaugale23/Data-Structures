#include<iostream>
#define MAX 10
using namespace std;
class MyClass 
{
	private:
		int size,marks[MAX];
	public:
	 void getMarks()
	 {
	 	cout<<"\n Enter the no. of students in the class: ";
	 	cin>>size;
	 	cout<<"Enter the marks of students sequentially: ";
	 	for(int i=0;i<size;i++)
	 	{
	 		cin>>marks[i];
		 }
	 }
	 void highScore()
	 {
	 	int high=marks[0];
	 	for(int i=1;i<size;i++)
	 	{
	 		if(marks[i]>high)
	 		{
	 			high=marks[i];
			 }
		 }
		 cout<<"\n Highest score of class is: "<<high;
	 }
	  void lowScore()
	 {
	 	int low=marks[0];
	 	for(int i=1;i<size;i++)
	 	{
	 		if(marks[i]<low)
	 		{
	 			low=marks[i];
			 }
		 }
		 cout<<"\n Lowest score of class is: "<<low;
	 }
	 void absent()
	 {
	 	int count=0;
	 	for(int i=0;i<size;i++)
	 	{
	 		if(marks[i]==0)
	 		{
	 		
			 count++;
			 cout<<"\n"<<(i+1)<<" ";
			 	
			 }
			 
		}
			cout<<"were absent during test";
			cout<<"\n Total no. of studnets who were absent is: "<<count;
		
	 }
	 void avg()
	 {
	 	float avarage;
	 	int sum=0;
	 	for(int i=0;i<size;i++)
	 	{
	 		sum+=marks[i];
		 }
		 avarage=(float)(sum/size);
		 cout<<"\n Avarage of marks of class is: "<<avarage;
	 	
	 	
	 }
	 void mostScored()
	 {
	 	int popular,temp,popular2;
	 	for(int i=0;i<size;i++)
	 	{
	 		temp=0;
	 		for(int j=0;j<size;j++)
	 		{
	 			if(marks[i]==marks[j])
	 			{
	 				temp++;
				 }
				 if(temp>popular)
				 {
				 	popular=temp;
				 	popular2=marks[i];
				 }
			 }
		 }
		 cout<<"\n Most scored marks are: "<<popular2;
	 }
};
int main()
{
	MyClass obj;
	obj.getMarks();
	obj.highScore();
	obj.lowScore();
	obj.avg();
	obj.absent();
	obj.mostScored();
	
}
