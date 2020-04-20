#include <stdio.h>  
#include <string.h>  
#include <algorithm>  
using namespace std;  

const int N = 101;  
int num[N];  
  
int main()
{  
    int cas, n, cnt;  
    scanf("%d", &cas);  
    
    while (cas--)
	{
	    scanf("%d", &n);  
	    memset(num, 0, sizeof(num));  
	    cnt = 0;
	    
	    if ((n!=1) && (n!=0))
		{  
	        for (int i = 9; i > 1; i--)
			{  
		        while (n % i == 0)
				{  
		            num[cnt++] = i;  
		            n = n / i;  
		        }  
		        if (n == 1) break;  
	        }  
	        sort(num, num + cnt);  
	  
	        if (n != 1)  printf("-1\n");  
	        else 
			{  
		        for(int i = 0; i < cnt; i++)  printf("%d", num[i]);  
		        printf("\n");  
	        }  
	    }  
	    else if(n==1)   printf("1\n"); 
		else if(n==0)   printf("0\n");
	}  
    return 0;  
}  
