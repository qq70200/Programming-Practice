#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

int soundex(char word)
{
	switch(word)
	{
		case 'B':
		case 'F':
		case 'P':
		case 'V':
			return 1;
		
		case 'C':
		case 'G':
		case 'J':
		case 'K':
		case 'Q':
		case 'S':
		case 'X':
		case 'Z':
			return 2;
			
		case 'D':
		case 'T':
			return 3;
			
		case 'L':
			return 4;
			
		case 'M':
		case 'N':
			return 5;
			
		case 'R':
			return 6;
			
		default:
			return 0;
	}
}

int main()
{
	char word[21];
	int num,lastnum;
	
	while(gets(word))
	{
		lastnum=0;
		for(int i=0;word[i]!='\0';++i)
		{
			num = soundex(word[i]);
			if(num!=lastnum&&num!=0) cout<<num;
			lastnum = num;
		}
		cout<<endl;
	}
	return 0;
}
