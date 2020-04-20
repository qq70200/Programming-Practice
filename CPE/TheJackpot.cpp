#include <iostream>
using namespace std;

int main()
{
	int n;
	
	while(cin>>n)
	{
		if(n==0) return 0;
		
		int num;
		int max=-1,money=0;
		for(int i=0;i<n;i++)
		{
			cin>>num;
			if(money<0) money = num;
			else money += num;
			
			if(money>max) max=money;
		}
		if(max>0) cout<<"The maximum winning streak is "<<max<<"."<<endl;
		else cout<<"Losing streak."<<endl;
	}
	return 0;
}
