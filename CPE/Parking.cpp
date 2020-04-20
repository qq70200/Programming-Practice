#include <iostream>
#include <cstdlib>
#include <algorithm>
using namespace std;


int main()
{
	int test,num;
	int result;
	cin>>test;
	
	while(test--)
	{
		cin>>num;
		int *a = new int[num];
		
		for(int i=0;i<num;i++)
		{
			cin>>*(a+i);
		}
		
		sort(a,a+num);
		
		result = (*(a+num-1)-*a)*2;
		
		cout<<result<<endl;
		
		delete [] a;
	}
	return 0;
}
