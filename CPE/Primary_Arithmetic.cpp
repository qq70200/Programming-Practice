#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
	int m,n;
	while(scanf("%d %d",&m,&n)!=EOF)
	{
		if(m==0&&n==0) return 0;
		
		int count=0,carry=0;
		while(m>0||n>0)
		{
			int rm=m%10;
			int rn=n%10;
			
			if((rm+rn+carry)>=10){
				count++;
				carry = 1;
			}
			else carry=0;
			
			m/=10; n/=10;
		}
		if(count>0&&count!=1) cout<<count<<" carry operations."<<endl;
		else if(count==1) cout<<count<<" carry operation."<<endl;
		else cout<<"No carry operation."<<endl;
	}
	return 0;
} 
