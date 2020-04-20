#include <iostream>
#include <cstdlib>
using namespace std;
int a[101];
bool isDivide = true;

void initial()
{
	for(int i=0;i<101;i++){
		a[i]=0;
	}
}

int divide(int n,int m,int count)
{
	if((n>1)&&(n%m)!=0){
		isDivide = false;
		return 0;
	}
	else if(n==1){
		isDivide = true;
		return count;
	}
	
	a[count] = n;
	count++;
	divide(n/m,m,count);
}

int main()
{
	int n,m;
	
	while(cin>>n>>m)
	{
		initial();
		
		int cnt = divide(n,m,0);
		
		if(isDivide){
			for(int i=0;i<cnt;i++){cout<<a[i]<<" ";}
			cout<<"1";
		}
		else cout<<"Boring!";
		
		isDivide = true;
		cout<<endl;
	}
	return 0;
}
