#include <iostream>
#include <stdio.h>
using namespace std;
int count=1;

int algo(int i)
{
	if (i==1) return 1;
	
	count++;
	
	if(i%2!=0) algo(3*i+1);
	else algo(i/2);
}

int main()
{
	int m,n;
	
	while(scanf("%d %d",&m,&n)!=EOF){
		cout<< m <<" "<< n <<" ";
		if(m>n){int t=m;m=n;n=t;}
	
		int max=0;
		for(int i=m;i<=n;i++){
			algo(i);
			if(max<count) max=count;
			count=1;
		}
		cout<<max<<endl;
	}
	return 0;
}
