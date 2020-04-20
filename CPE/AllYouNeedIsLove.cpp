#include <iostream>
#include <stdio.h>
#include <cstring>
#include <cmath>
using namespace std;

int gcd(int m, int n) { 
    if(n == 0) 
        return m;
    else 
        return gcd(n, m % n); 
}

int binarytodec(int a)
{
	int sum=0,cnt=0;
	while(a>0)
	{
		int r = a%10;
		sum += r*pow(2,cnt);
		a/=10;
		cnt++;
	}
	return sum;
}

int main()
{
	int n;
	cin>>n;
	
	int count=1;
	while(n--)
	{
		int a,b;
		cin>>a>>b;
		
		printf("Pair #%d: ",count); count++;
		int da = binarytodec(a);
		int db = binarytodec(b);
		
		int result = gcd(da,db);
		
		if(result != 1) cout<<"All you need is love!"<<endl;
		else cout<<"Love is not all you need!"<<endl;
	}
	return 0;
}
