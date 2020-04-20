#include <cstdio>
#include <iostream>
using namespace std;

int main()
{
	int test;
	string input;
	cin>>test;
	
	getchar();
	getchar();
	
	while(test--)
	{
		while(getline(cin,input)&&input!="")
		{
			int person,problem,time;
			char L[20];
			sscanf(input.c_str(),"%d %d %d %s",&person,&problem,&time,L);
		}
	}
	return 0;
}
