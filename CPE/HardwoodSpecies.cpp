#include <iostream>
#include <cstdio>
#include <iomanip>
#include <map>
using namespace std;

int main()
{
	int n;
	cin>>n; // ex. 1\n or 2\n, the buffer will read the \n as a variable
	for(int i=0;i<n;i++)
	{
		if(i>0) cout<<endl;
		
		string input;
		
		if(i==0) {getchar(); getline(cin,input);} //for '\n' (because the buffer of cin would remain the \n) and 'blank line'
		
		map<string,int> species;
		int sum=0;
		while(getline(cin,input) && input!=""){
			++species[input];
			++sum;
		}
		
		for(map<string,int>::iterator it=species.begin();it!=species.end();++it)
			cout<<it->first.c_str()<<" "<<fixed<<setprecision(4)<<(double)it->second/sum*100<<endl;
	}//end while
	return 0;
}
