#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
	int test;
	cin>>test;
	
	while(test--)
	{
		int f,sum=0;
		cin>>f;
		while(f--)
		{
			int meter,animal,envir;
			cin>>meter>>animal>>envir;
			sum+=meter*envir;
		}//end while f
		cout<<sum<<endl;
	}//end while test
	return 0;
}
