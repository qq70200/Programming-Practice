#include <iostream>
#include <cstring>
#include <sstream>
#include <cstdlib>
#include <algorithm>
#include <vector>
using namespace std;
#define MAX_NUM 1001

vector<int> v(100);

int push_word(int *array, string str)
{
	int i=0;
	string word;
	
	istringstream read_str(str);
	while(read_str>>word)
	{
		int tmp = atoi(word.c_str());	// convert word to integer
		*(array+i) = tmp;
		i++;
	}
	
	sort(array,array+i);	// sort the numbers from small to large
	
	return i;
}

void compare(int *a,int *b,int cnt1,int cnt2)
{
	int i=0,j=0;
	int both=0;
	
	while(i<cnt1 && j<cnt2)
	{
		if(*(a+i)==*(b+j))
		{
			i++;
			j++;
			both++;
		}
		else if(*(a+i)<*(b+j)) i++;
		else j++;
	}
	
	if(both>0)
	{
		if(both==cnt1 && both==cnt2) cout<<"A equals B"<<endl;
		else if(both<cnt1 && both==cnt2) cout<<"B is a proper subset of A"<<endl;
		else if(both==cnt1 && both<cnt2) cout<<"A is a proper subset of B"<<endl;
		else if(both<cnt1 && both<cnt2) cout<<"I'm confused!"<<endl;
	}
	else if(both==0)
	{
		if(cnt1>0 && cnt2>0) cout<<"A and B are disjoint" <<endl;
		else if(cnt1>0 && cnt2==0) cout<<"B is a proper subset of A"<<endl;
		else if(cnt1==0 && cnt2>0) cout<<"A is a proper subset of B"<<endl;
		else cout<<"A equals B"<<endl;	// both are empty sets
	}
}

int main()
{
	string line1,line2;
	int cnt1,cnt2;
	
	while(1)
	{
		int *num1 = new int[MAX_NUM];
		int *num2 = new int[MAX_NUM];
		
		getline(cin,line1);
		cnt1 = push_word(num1,line1);
		
		getline(cin,line2);
		cnt2 = push_word(num2,line2);
		
		compare(num1,num2,cnt1,cnt2);
		
		delete []num1;
		delete []num2;
	}
	return 0;
}
