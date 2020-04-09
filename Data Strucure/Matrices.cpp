#include<iostream>
using namespace std;
class MyClass
{
	int m1[2][2],m2[2][2],m3[2][2];
	int i,j,k;
	public:
	void getMatrices()
	{
		cout<<"\n Enter the first matrix: ";
		for(i=0;i<2;i++)
		{
			for(j=0;j<2;j++)
			{
				cin>>m1[i][j];
			}
		}
		cout<<"\n Enter the second matrix: ";
		for(i=0;i<2;i++)
		{
			for(j=0;j<2;j++)
			{
				cin>>m2[i][j];
			}
		}
		cout<<"\n First matrix is:\n";
		for(i=0;i<2;i++)
		{
			for(j=0;j<2;j++)
			{
				cout<<m1[i][j]<<" ";
			}
			cout<<endl;
		}
		cout<<"\n Second matrix is: ";
			for(i=0;i<2;i++)
		{
			for(j=0;j<2;j++)
			{
				cout<<m2[i][j]<<" ";
			}
			cout<<endl;
		}
	}
	void  addition()
	{
		int add[2][2],m,n;
		for(m=0;m<2;m++)
		{
			for(n=0;n<2;n++)
			{
				add[m][n]=m1[m][n]+m2[m][n];
			}
		}
				cout<<"\n Addition of two matrices are: \n";
				for(m=0;m<2;m++)
				{
					for(n=0;n<2;n++)
					{
						cout<<add[m][n]<<" ";
					}
					cout<<endl;
				}
				
			
	}
	void multiplication()
	{
		int mul[2][2];
		cout<<"\n Multipliaction of given matrices are:\n ";
		for(i=0;i<2;i++)
		{
			for(j=0;j<2;j++)
			{
				mul[i][j]=0;
				for(k=0;k<2;k++)
				
			    {
				mul[i][j]=mul[i][j]+m1[i][k]*m2[k][j];
				}
			}
	
		}
		for(i=0;i<2;i++)
		{
			for(j=0;j<2;j++)
			{
					cout<<mul[i][j]<<" ";
			}
			cout<<endl;
		}
	}
	void substraction()
	{
			int sub[2][2],m,n;
		for(m=0;m<2;m++)
		{
			for(n=0;n<2;n++)
			{
				sub[m][n]=m1[m][n]-m2[m][n];
			}
		}
				cout<<"\n Substraction of two matrices are: \n";
				for(m=0;m<2;m++)
				{
					for(n=0;n<2;n++)
					{
						cout<<sub[m][n]<<" ";
					}
					cout<<endl;
				}
				
			
	}
	void transpose()
	{
		int trans[2][2];
		cout<<"\n Transpose of matrix1 is: \n";
		for(i=0;i<2;i++)
		{
			for(j=0;j<2;j++)
			{
				trans[i][j]=m1[j][i];
				cout<<trans[i][j]<<" ";
			}
			cout<<endl;
		}
	}
	void sumOfDiagonal()
	{
		int sum=0;
		for(i=0;i<2;i++)
		{
			for(j=i;j<i+1;j++)
			{
				sum=sum+m1[i][j];
			}
		}
		cout<<"\n Sum of diagonal of matrix 1 is: "<<sum;
	}
	void UpperTraingular()
	{
		int count=0;
		for(i=0;i<2;i++)
		{
			for(j=0;j<2;j++)
			{
				if(i>j)
				{
					if(m1[i][j]!=0)
					break;
					else
						count++;
				}
			}
		}
		if(count==1)
		{
			cout<<"\n matrix has upper triangle";
			
		}
		else
		{
			cout<<"\n Matrix has no upper triangle";
		}
	}
	
	
};
int main()
{
	MyClass obj;
	obj.getMatrices();
	obj.addition();
	obj.multiplication();
	obj.substraction();
	obj.transpose();
	obj.sumOfDiagonal();
	obj.UpperTraingular();
	
}
