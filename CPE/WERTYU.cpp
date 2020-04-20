#include <iostream>
#include <stdio.h>
#include <cstring>
using namespace std;

int main()
{
	char keyboard[] = "`1234567890-=QWERTYUIOP[]ASDFGHJKL;'ZXCVBNM,./";
	
	char str[1001];
	
	while(gets(str))
	{
		for(int i=0;i<strlen(str);++i){
			if(str[i]==' ') cout<<" ";
			else{
				int j=0;
				while(str[i]!=keyboard[j+1]) ++j;
				cout<<keyboard[j]; 
			}	
		}
		cout<<endl;
	}
	return 0;
}
