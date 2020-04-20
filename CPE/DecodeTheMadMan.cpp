#include <iostream>
#include <iomanip>
#include <stdio.h>
#include <cstring>
using namespace std;

int main()
{
	char keyboard[] = "`1234567890-=qwertyuiop[]asdfghjkl;'zxcvbnm,./";
	
	char str[1001];
	
	while(gets(str))
	{
		char ustr[1001];
		for (int i=0;i<strlen(str);++i){
			if(str[i]>='A' && str[i]<='Z') ustr[i] = tolower(str[i]);
    		else ustr[i] = str[i];
		} 	
    		
		for(int i=0;i<strlen(ustr);++i){
			if(ustr[i]==' ') cout<<" ";
			else{
				int j=0;
				while(ustr[i]!=keyboard[j+2]) ++j;
				cout<<keyboard[j];
			}	
		}
		cout<<endl;
	}
	return 0;
}
