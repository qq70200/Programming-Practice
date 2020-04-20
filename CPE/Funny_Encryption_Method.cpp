#include <iostream>
#include <cmath>
using namespace std;
int count=0;

int binary(int n)
{
	while(n>0)
	{
		if((n%2)==1) count++;
		n/=2;
	}
	return count;
}

int main()
{
	int n;
	cin>>n;
	
	while(n--)
	{
		int num;
		cin>>num;
		int tmp = num;
		
		int i = binary(num);
		cout<<i<<" "; count=0;
		
		int hnum=0,ii=0;
		/*hex to decimal*/
		while(tmp>0)
		{
			int r = tmp%10;
			hnum += r*pow(16,ii);
			ii++;
			tmp/=10;
		}
		
		int j = binary(hnum);
		cout<<j<<endl;	count=0;
	}
	return 0;
}
