#include <iostream>
using namespace std;
int main()
	{
	int A,a,b;//declaring variable
	cout<<"enter the number of series for patern"<<endl;
	cin>>A;
	for(a=0;a<A;a++)//loop for number of lines
		{
		for(b=0;b<A;b++)//loop for number of * in a line
			{cout<<"*";
		}
	cout<<endl;
	}
	return 0;
}

