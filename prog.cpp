#include <iostream>
using namespace std; 

int main()
{
	int n = 11;
	int sp = n/2;
	int st = 1;

	for(int i = 0; i <= (n/2); i++)
	{
		for(int j = 0; j < n; j++)
		{
			if(j < sp)
				cout<<" ";
			else if(j < (sp+st))
				cout<<"*";
			else
				cout<<" ";
		}
		sp--;
		st = st + 2;
		cout<<endl;
	}

	sp += 2;
	st -= 4;
	for(int i = 0; i < (n/2); i++)
	{
		for(int j = 0; j < n; j++)
		{
			if(j < sp)
				cout<<" ";
			else if(j < (sp+st))
				cout<<"*";
			else
				cout<<" ";

		}
		cout<<endl;
		sp++;
		st -= 2;
	}
	return 0;
}
