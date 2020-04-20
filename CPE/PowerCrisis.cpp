#include <iostream>
using namespace std;

int main()
{
	int t;
	int m;
	while(cin>>t)
	{
		t--;
		for(m=1;m<t;m++){
			int res=0;
			
			for(int i=1;i<=t;i++){
				res = (res+m)%i;
			}
			if(res==11) break;
		}
		cout<<m<<endl;
	}
	return 0;
}
