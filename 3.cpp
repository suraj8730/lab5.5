#include <iostream>
using namespace std;
int main()
	{
	int A;
	cout<<"enter the odd number of series for patern"<<endl;
	cin>>A;
	//loop for number of lines
	for(int i=0;i<A;i++)
		{
	//for a line
		for(int a=0;a<A;a++)
			{	
			//star always appear in the same pattern i.e at first last and where columb 
			if ( i==0 or a==0 or i==(A-1) or a==(A-1) or i==a or a==(A-i-1))  
			cout<<"*";
			else
			cout<<" ";
		}
	cout<<endl;
	}
}
