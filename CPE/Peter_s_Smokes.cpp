#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
	int n,k;
	
	while(scanf("%d %d",&n,&k)!=EOF)
	{
		int sum=n;
		while(n/k>0)
		{
			sum += n/k;
			n = n/k+n%k;
		}
		cout<<sum<<endl;
	}
	return 0;
}
