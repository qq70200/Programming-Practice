#include <iostream>
#include <cstring>
#include <map>
using namespace std;

int main()
{
	map<string,string> dic;
	
	string word,fore;
	
	while(cin>>word>>fore)
	{
		if(word=='\0') break;
		dic[word] = fore;
	}
	
	return 0;
}
