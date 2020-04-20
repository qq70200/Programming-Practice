#include <iostream>
using namespace std;

int loop(int p)
{
	if(p==1) return 1;
	
	int sum=0;
	
	if (p<10) p*=p;
	while(p/10){
		int r=p%10; sum+=r*r; p/=10;
		if(p<10) sum+=p*p;
	}
	if(sum<10) return sum;
	else loop(sum);	
}

int main()
{
	int n,count=1;
	cin>>n;
	int p[n],a[n],t[n];
	
	for(int i=0;i<n;i++)
	{
		cin>>p[i];
		t[i]=p[i];
		
		if(p[i]<10) p[i]*=p[i];
		if(p[i]<10) p[i]*=p[i];
		
		a[i] = loop(p[i]);
	}//end while
	
	for(int i=0;i<n;i++){
		if(a[i]==1) {cout<<"Case #"<<count<<" : "<<t[i]<<" is a Happy number."<<endl; count++;}
		else {cout<<"Case #"<<count<<" : "<<t[i]<<" is an Unhappy number."<<endl; count++;}
	}
	return 0;
}
