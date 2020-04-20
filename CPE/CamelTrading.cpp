#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
typedef long long int llt;

int main()
{
	int t;
	cin>>t;
	getchar();
	
	char *input = new char [300];
	while(t--)
	{
		gets(input);
		
		int len = strlen(input);
		llt *num_max = new llt [100];
		llt *num_min = new llt [100];
		llt tmp=0;
		int index_max=0,index_min=0;
		char w='+';
		
		for(int i=0;i<=len;i++){
			if(input[i]>='0' && input[i]<= '9')
			{
				tmp = tmp*10 + input[i]-'0';
			}
			else
			{
				if(w == '+')
				{
					if(index_max==0) num_max[index_max++] = tmp;
					else num_max[index_max-1] += tmp;
					num_min[index_min++] = tmp;
				}
				else
				{
					if(index_min==0) num_min[index_min++] = tmp;
					else num_min[index_min-1] *= tmp;
					num_max[index_max++] = tmp;
				}
				w = input[i];
				tmp = 0;
			}
		}
		
		llt result_max=1,result_min=0;
		for(int i=0;i<index_max;i++){
			result_max *= num_max[i];
		}
		for(int i=0;i<index_min;i++){
			result_min += num_min[i];
		}
		cout<<"The maximum and minimum are "<<result_max<<" and "<<result_min<<".\n";
		
		delete [] num_max;
		delete [] num_min;
	}
	delete [] input;
	return 0;
}
