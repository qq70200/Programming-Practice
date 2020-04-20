#include <iostream>
using namespace std;

//1 -> 1
//2 -> 10
//3 -> 100
//5 -> 1000
//6 -> 1001

int fib(int i)
{
	if(i==1) return 1;
	else if(i==2) return 2;
	
	return fib(i-1)+fib(i-2);
} 

int Calfib(int a,int i)
{
	if(a==1) return 1;
	else if(a==2) return 10;
	
}


int main()
{
	int n;
	cin>>n;

	while(n--)
	{
		int a;
		cin>>a;
		cout<< a <<" = ";
		
		int b = Calfib(a);
		
		cout<< b <<" (fib)"<<endl;
		
	}//end while
	return 0;
}
