#include <iostream>
using namespace std;

int main()
{
	int m,n;
	
	
	while(1){
		cin>>m>>n;
		
		int map[m][n];
		int state;
		int max=0;
		if(m==0&&n==0) return 0;
		
		for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cin>>state;
			if(state==1) map[i][j] = 0;
			else{
				if(i>0) map[i][j] = map[i-1][j]+1;
				else map[i][j] = 1;
			}
		}//for j
		
		for(int j=0;j<n;j++) {
			int value = map[i][j]; int sum = value;
			for(int k=j+1;k<n&&value<=map[i][k];k++) sum+=value;
			for(int k=j-1;k>=0&&value<=map[i][k];k--) sum+=value;
			
			if(sum>max) max = sum;
		}
			
	}//for i
	
	cout<<max<<endl;
	}//end while 1
		
}
