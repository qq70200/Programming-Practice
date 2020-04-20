#include <iostream>
#include <cmath>
using namespace std;
bool isPrime = true;

void checkPrime(int n)
{
	for(int i=2;i<=n/2;i++){
		if(n%i==0) {
			isPrime = false; break;
		}
	}
}

int Invert(int a)
{
	int multiple=1,sum=0;
	
	do{
		multiple*=10;
	}while(multiple<=a);
	
	while(a!=0)
	{
		sum+= (a%10)*(multiple/10);
		multiple/=10;
		a/=10;
	}
	return sum;
}


int main()
{
	int n;
	while(cin>>n){
		checkPrime(n);
		if(isPrime){
			/* reverse n */
			int q = Invert(n);
			checkPrime(q);
			if(isPrime)
			{
				if(n==q) {cout<<n<<" is prime.\n";}
				else {cout<<n<<" is emirp.\n";}
			} 
			else cout<<n<<" is prime.\n";
		}
		else{cout<<n<<" is not prime.\n";
		}
		isPrime = true;
	}
}

