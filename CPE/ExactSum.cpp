#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

int main()
{
	int test,money,result_i,result_j;
	
	while(scanf("%d",&test)!=EOF)
	{
		int *num = new int[test];
		
		for(int i=0;i<test;i++)
		{
			cin>>num[i];
		}
		cin>>money;
		
		sort(num,num+test);
		
		for(int i=0;i<test;i++)
		{
			for(int j=i+1;j<test;j++)
			{
				if ((num[i]+num[j] == money))
				{
					result_i = i;
					result_j = j;
				}
			}
		}
		
		printf("Peter should buy books whose prices are %d and %d.\n",num[result_i],num[result_j]);
		delete [] num;
	}
	return 0;
}
