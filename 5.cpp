#include <iostream>
	using namespace std;
	int main()
	{
	int A;
	cout<<"Enter number of rows for your pattern"<<endl;
	cin>>A;
	for(int i=0;i<A;i++)
		{
		//for initial space
		 for(int a=(A-i-1);a>0;a--)
			{
			cout<<" ";
		}
		//for first row star
		for(int b=0;b<1;b++)
			{	
			cout<<"*";
		}
		//for midlle part
		if (i==(A-1))
			//for star
			{
			for(int a=0;a<(A*2-3);a++)
				{
				cout<<"*";
			}
		}
			//for space
		else 
			{
			for (int j=1;j< (2*i);j++)
				{
				cout<<" ";
				}
		}
		//for last row star
		if (i>0)
			{
			for(int b=0;b<1;b++)
				{
				cout<<"*";
			}
		}
	cout<<endl;
	}
}
