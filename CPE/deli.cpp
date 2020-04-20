#include <iostream>
#include <cstring>
using namespace std;
bool ismem=false;
bool noOut=true;
char word[101][20],p[101][20];
char ir[101][20];

void checkWord(int i,int j)
{
	char temp = ir[i][j], temp2 = ir[i][j+1], temp3 = ir[i][j+2];
	
	if((temp!='a'&&temp!='e'&&temp!='o'&&temp!='i'&&temp!='u')&&temp2=='y'&&temp3=='\0'){
			for(int k=1; ir[i][k]!='\0'; ++k){
				cout<<ir[i][k-1];
			}
			cout<<"ies"<<endl; noOut=false;
	}//end if y
	else if((temp=='o'||temp=='s'||temp=='x')&&temp2=='\0') {cout<<ir[i]<<"es"<<endl; noOut=false;}
	else if((temp=='c'||temp=='s')&&temp2=='h'&&temp3=='\0') {cout<<ir[i]<<"es"<<endl; noOut=false;}
}

int main()
{
	int a,b;
	cin>>a>>b;
	
	for(int i=0;i<a;i++){
		cin>>word[i]>>p[i];
	}
	
	for(int i=0;i<b;i++){
		cin>>ir[i];
		for(int j=0;j<a;j++){
			if(strcmp(ir[i],word[j])==0) {cout<<p[j]<<endl; ismem=true;}
		}
		if(!ismem){//do not is member
			for(int j=0;ir[i][j]!='\0';++j){
				checkWord(i,j);
			}
			if(noOut) cout<<ir[i]<<"s"<<endl;
		}
		/* initialize ismem & noOut */ 
		ismem=false;
		noOut=true;
	}//end for b
}
