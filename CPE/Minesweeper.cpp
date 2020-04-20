#include <iostream>
#include <stdio.h>
using namespace std;

char map[105][105];
char state[105][105];
int count=1;

void initial()
{
	for(int i=0;i<105;i++){
		for(int j=0;j<105;j++){
			map[i][j] = '0';
			state[i][j] = '0';
		}
	}
}

void fill(int m, int n)
{
	/* fill the number */
	for(int i=1;i<=m;i++){
		for(int j=1;j<=n;j++){
			if(state[i][j]=='*')
			{
				map[i][j-1]++; map[i-1][j-1]++; map[i+1][j-1]++;
				map[i-1][j]++; map[i+1][j]++;
				map[i][j+1]++; map[i-1][j+1]++; map[i+1][j+1]++;
			}
		}
	}
	
	/* fill the bomb */
	for(int i=1;i<=m;i++){
		for(int j=1;j<=n;j++){
			if(state[i][j]=='*')
			{
				map[i][j] = '*';
			}
		}
	}
}

void show(int m, int n)
{
	for(int i=1;i<=m;i++){
		for(int j=1;j<=n;j++){
			cout<<map[i][j];
		}
		cout<<endl;
	}
}

int main()
{
	int m,n;
	
	while(cin>>m>>n)
	{
		if(m==0&&n==0) return 0;
		
		initial();
		
		/* insert the map */
		for(int i=1;i<=m;i++){
			for(int j=1;j<=n;j++){
				cin>>state[i][j];
			}
		}
		
		fill(m,n);
		if(count>1) cout<<endl;
		printf("Field #%d:\n",count);
		show(m,n);
		
		count++;
	}
	return 0;
}
