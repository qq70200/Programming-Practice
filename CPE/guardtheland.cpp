#include <iostream>
using namespace std;

struct point{
	int x,y;
};

int max(int a,int b){ return a>b?a:b;}
int min(int a,int b){ return a<b?a:b;}

int main()
{
	int n;
	int count=1;
	cin>>n;
	
	while(n--)
	{
		point a,b,c,d;
		
		cin>>a.x>>a.y>>b.x>>b.y;
		cin>>c.x>>c.y>>d.x>>d.y;
		
		/* area of two squares*/
		int area,area2;
		area = (b.x-a.x) * (b.y-a.y);
		area2 = (d.x-c.x) * (d.y-c.y);
		
		/* check whether the area is overlapped or not */
		int i,j,k,l;
		i = max(a.x,c.x), j = max(a.y,c.y);
		k = min(b.x,d.x), l = min(b.y,d.y);
		
		int strong,weak,unsecure;
		if(i>=k || j>=l){
			strong = 0;
		}
		else strong = (i-k)*(j-l);
		
		weak = area+area2-strong*2;
		unsecure = 10000-(area+area2-strong);
		
		cout<<"Night "<<count<<": "<<strong<<" "<<weak<<" "<<unsecure<<endl;
		count++;
	}
	return 0;
}
