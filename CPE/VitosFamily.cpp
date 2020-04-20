#include <iostream>
#include <cstdlib> //for abs
#include <algorithm> //for sort
#include <cmath> //for ceil
#include <vector>
using namespace std;

int main()
{
	int n; cin>>n;
	while(n--)
	{
		int num; cin>>num;
		int a[num];
		
		for(int i=0;i<num;i++){
			cin>>a[i];
		}
		
		vector<int> myvec(a,a+num);
		sort(myvec.begin(),myvec.end());
		
		int mean;
		if(num%2==0) mean = myvec.at(num/2);
		else mean = ceil(myvec.at(num/2));
		
		int sum=0;
		for(int i=0;i<myvec.size();i++)
		{
			sum += abs(mean - myvec.at(i));
		}
		cout<<sum<<endl;
	}
	return 0;
}
