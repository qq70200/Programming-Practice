#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
	long long int s,d;
	while(cin>>s>>d)
	{
		while((d-s)>=0)
		{
			d-=s;
			if(d!=0) s++;
		}
		cout<<s<<endl;
	}
	return 0;
}
