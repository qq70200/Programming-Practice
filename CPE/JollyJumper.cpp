#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
bool noJolly=false;

int main()
{		
	int n;
		
	while(scanf("%d",&n)!=EOF)
	{
		int a[n];
		bool jolly[3005]={0};
		bool isJolly = true;
		
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		
		for(int i=1;i<n;i++){
			int diff = abs(a[i]-a[i-1]);
			if(diff<1||diff>n-1||jolly[diff]) {isJolly = false; break;}
			jolly[diff] = 1;
		}
		
		if(isJolly) cout<<"Jolly"<<endl;
		else cout<<"Not jolly"<<endl;
		
	}
	
	return 0;
}
