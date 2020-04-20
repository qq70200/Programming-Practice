#include <iostream>
#include <cstring>
using namespace std;

int buffer[1000][1000];

int main()
{
	memset(buffer,0,sizeof(buffer));
	string first,second;
	int len1,len2;
	
	while(getline(cin,first))
	{
		getline(cin,second);
		
		for(int i=0;first[i];i++)
		{
			for(int j=0;second[j];j++)
			{
				if(first[i]==second[j])
				{
					buffer[i+1][j+1]=buffer[i][j]+1;
				}
				else
				{
					if(buffer[i+1][j]>buffer[i][j+1])
					{
						buffer[i+1][j+1] = buffer[i+1][j];
					}
					else buffer[i+1][j+1] = buffer[i][j+1];
				}
			}
		}
		len1 = strlen(first.c_str());
		len2 = strlen(second.c_str());
		
		cout<<buffer[len1][len2]<<endl;
	}
	return 0;
}
