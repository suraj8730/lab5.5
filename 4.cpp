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
		//  print spaces
       		for (int j =0; j < (2*i) ; j++)	
			{
           		 cout << " ";
        	}
		//printing  star
		for(int a=0;a<1;a++)
			{	
			cout<<"*";
		}
			//printing star or space
			if(i==0 or i==(A-1))
				{
				for(int b=0;b<(A-2);b++)
				cout<<"*";
			}
			else
				{	
				for(int c=0;c<(A-2);c++)	
				cout<<" ";
			}	
		//printing star
			for(int a=0;a<1;a++)
				{	
			cout<<"*";
			}
			cout<<endl;
	}
	return 0;
}
