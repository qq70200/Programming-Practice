#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int test,people;
	cin>>test;
	
	while(test--)
	{
		cin>>people;
		
		float a[people];
		float average=0.0;
		
		for(int i=0;i<people;i++)
		{
			cin>>a[i];
			average+=a[i];
		}
		average/=people;
		
		float ratio=0;
		for(int i=0;i<people;i++)
		{
			if(a[i]>average) ratio+=1.0;
		}
		
		float result = ratio/people;
		cout<<fixed<<setprecision(3)<<result*100<<"%"<<endl;
	}
	return 0;
}
