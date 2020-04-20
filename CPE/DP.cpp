#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

struct formula{
	int num;
	char x;
};

formula f[256];
void initial()
{
	for(int i=0;i<256;i++)
	{
		f[i].num = 0;
		f[i].x = '\0';
	}
}

int main()
{
	int test;
	string input;
	scanf("%d",&test);

	while(test--)
	{
		initial();
		getline(cin,input);
		
		for(int i=0;input[i];i++)
		{
			
		}
	}
	return 0;
}
