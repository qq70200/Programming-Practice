#include<iostream>
#include<sstream>
#include<cstdio>
using namespace std;

int main()
{
	string input;
	stringstream ss;
	
	int num;
	
	while(cin>>input)
	{
		if(input[0]=='-') break;
		
		ss.clear();
		ss.str(input);
		
		if(input[1]=='x')
		{
			ss>>hex>>num;
			printf("%d\n",num);
		}
		else
		{
			ss>>dec>>num;
			printf("0x%X\n",num);
		}
	}//end while
	return 0;
}
