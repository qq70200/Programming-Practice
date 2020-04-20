#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstring>
using namespace std;

struct coord
{
	float x,y;
};
typedef coord coord;

int main()
{
	int num;
	string blank;
	coord gopher,dog,hole[1000];
	float diff1,diff2;
	float escapex,escapey;
	
	while(scanf("%d",&num)!=EOF)
	{
		bool escape = false;
		cin>>gopher.x>>gopher.y>>dog.x>>dog.y;
		
		for(int i=0;i<num;i++)
		{
			cin>>hole[i].x>>hole[i].y;
			
			diff1 = sqrt((hole[i].x-gopher.x)*(hole[i].x-gopher.x)+(hole[i].y-gopher.y)*(hole[i].y-gopher.y));
			diff2 = sqrt((hole[i].x-dog.x)*(hole[i].x-dog.x)+(hole[i].y-dog.y)*(hole[i].y-dog.y));
			
			if((diff1*2)<diff2)
			{
		    	escape = true;
		    	escapex = hole[i].x;
		    	escapey = hole[i].y;
		    	break;
			}
		}
		
		if(escape) printf("The gopher can escape through the hole at (%.3f,%.3f).\n",escapex,escapey);
		else printf("The gopher cannot escape.\n");
		
		getline(cin,blank);
		getline(cin,blank);
	}
	return 0;
}
