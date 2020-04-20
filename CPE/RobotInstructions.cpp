#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cstring>
using namespace std;

int main()
{
	int test,loc,instruct;
	cin>>test;
	
	while(test--)
	{
		loc = 0;
		
		cin>>instruct;
		getchar();// to avoid '\n'
		
		char *arr = new char[instruct+5];
		int same;
		string word;
		
		for(int i=0;i<instruct;i++)
		{
			getline(cin,word);
			
			if(word[0]=='L')
			{
				--loc;
				arr[i] = 'L';
			}
			else if(word[0]=='R')
			{
				++loc;
				arr[i] = 'R';
			}
			else
			{
				if(word[9]!='\0') same = (word[8]-'0') * 10 + (word[9]-'0') - 1;
				else same = (word[8]-'0') - 1;
				
				if(arr[same]=='L')
				{
					--loc;
					arr[i] = 'L';
				}
				else if(arr[same]=='R')
				{
					++loc;
					arr[i] = 'R';
				}
			}
		}
		cout<<loc<<endl;
		
		delete [] arr;
	}
	return 0;
}
