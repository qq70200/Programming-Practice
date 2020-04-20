#include <iostream>
#include <cstdio>
using namespace std;

int a[10];

void initial()
{
	for(int i=0;i<10;i++){
		a[i] = 0;
	}
}

void digit(int i)
{
	if(i<10) a[i]++;
	else{
		int r=i%10;
		a[r]++;
		digit(i/10);
	}
}

int main()
{
	int test,num;
	scanf("%d",&test);
	
	while(test--)
	{
		initial();
		scanf("%d",&num);
		
		/* count every digit */
		for(int i=1;i<=num;i++)
		{
			digit(i);
		}
		
		/* print out */
		for(int i=0;i<10;i++)
		{
			printf("%d ",a[i]);
			if(i==9) printf("\n");
		}
	}
	return 0;
}
