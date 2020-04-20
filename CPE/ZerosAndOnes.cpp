#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;

int main()
{
	char input[1000005];
	int test,count = 1;
	
	while(gets(input))
	{
		int n1,n2;
		cin>>test;		
		cout<<"Case "<<count++<<":"<<endl;
		
		for(int i=0;i<test;i++)
		{
			bool thesame = true;
			cin>>n1>>n2;
			
			if(n1>n2)
			{
				int tmp;
				tmp = n1;
				n1 = n2;
				n2 = tmp;
			}
			
			for(int i=n1;i<n2;i++)
			{
				if(input[i]!=input[i+1])
				{
					thesame = false;
					break;	
				}
			}
			if(thesame) cout<<"Yes"<<endl;
			else cout<<"No"<<endl;
			getchar();
		}
	}
	return 0;
}
