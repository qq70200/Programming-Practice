#include <iostream>
#include <cmath>
#include <cstdio>
using namespace std;

struct medicine{
	string name;
	int frequency;
	int total_time;
};

int main()
{
	int count;
	int num,minimum_take;
	
	scanf("%d",&count);
	
	while(count--)
	{
		scanf("%d %d",&num,&minimum_take);
		
		medicine med[num];
		/* type the medicines */
		for(int i=0;i<num;i++)
		{
			cin>>med[i].name>>med[i].frequency;
			med[i].total_time = med[i].frequency;	// initialize the total time of every pill
		}
		
		while(minimum_take>0)
		{
			int index=0;
			int tmp=9999;
			
			for(int i=0;i<num;i++)
			{
				if(med[i].total_time<tmp)
				{
					tmp = med[i].total_time;
					index = i;
				}
			}//end for
			cout<<med[index].total_time<<" "<<med[index].name<<endl;
			med[index].total_time += med[index].frequency;
			minimum_take--;
		}
	}//end while
	return 0;
}
