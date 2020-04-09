#include<iostream>
#define size 20
using namespace std;
class MyClass
{
	int badmin,cric,cricket[20],badm[20],intc=0, intersect[5], onlybad[10];
	public:
		void getData()
		{
			cout<<"\n Enter the number of students who plays the badminton.";
			cin>>badmin;
			cout<<"\n Enter the roll no. of studets who play badminton :";
			for(int i=0;i<badmin;i++)
			{
				cin>>badm[i];
			}
			cout<<"\n Enter the number of students who plays the cricket.";
			cin>>cric;
			cout<<"\n Enter the roll no. of students who plays cricket. ";
			for(int i=0;i<cric;i++)
			{
				cin>>cricket[i];
			}
		
			
		}
		void myIntersection()
		{
			intc = 0;
			for(int i=0;i<5;i++)
			{
				intersect[i]=0;
			}
			for(int i=0;i<badmin;i++)
			{
				for(int j=0;j<cric;j++)
				{
					if(badm[i]==cricket[j])
					{
						intersect[intc]=badm[i];
						intc++;
						break;
					}
				}
			}
			cout<<"\n set of students who play both cricket and badminton is:";
		
		
			for(int i=0;i<intc;i++)
			{
				cout<<"\n"<<intersect[i];
			}
		}
		
		void onlyCric()
		{
			int onlycri[10];
			int count1=0,j;
			for(int i=0;i<10;i++)
			{
				onlycri[i]=0;
			}
			for(int i=0;i<cric;i++)
			{
				for( j=0;j<intc;j++)
				{
					if(cricket[i]==intersect[j]){
						break;
					}
				}
				if(j == intc){
				onlycri[count1]=cricket[i];
				count1++;
				}
			}
			cout<<"\n Set of students who play only cricket";
			for(int i=0;i<count1;i++)
			{
				cout<<"\n"<<onlycri[i];
			}
		}
		void onlyBad()
		{
			int j;
			int count1=0;
			for(int i=0;i<10;i++)
			{
				onlybad[i]=0;
			}
			for(int i=0;i<badmin;i++)
			{
				for(j=0;j<intc;j++)
				{
					if(badm[i]==intersect[j])
					{
						break;
					}
				}
				if(j == intc)
				{
					onlybad[count1]=badm[i];
						count1++;
				}
					
			}
			cout<<"\n Set of students who play only badminton";
			for(int i=0;i<count1;i++)
			{
				cout<<"\n"<<onlybad[i];
			}
		}
		void allPlayers()
		{
		cout<<"\n Students who play either cricket or badminton or both";
		for(int i=0;i<cric;i++)
		{
			cout<<"\n"<<cricket[i];
		}
		for(int i=0;i<(badmin-intc);i++)
		{
			cout<<"\n"<<onlybad[i];
		}
		}
		
};
int main()
{
	MyClass obj;
	obj.getData();
	obj.myIntersection();
	obj.onlyCric();
	obj.onlyBad();
	obj.allPlayers();

}
