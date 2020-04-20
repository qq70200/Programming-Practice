#include <iostream>
#include <stdio.h>
using namespace std;

#define KUTI 10000000
#define LAKH 100000
#define HAJAR 1000
#define SHATA 100 

int main()
{
	long long int num;
	long long int snum;
	int count=1;
	
	while(cin>>num)
	{
		cout<<count<<". ";
		bool second = false;
		if(num>KUTI)
		{
			second = true;
			snum = num%KUTI; //second num
			num/=KUTI;
		}
		
		if(!second) // only first
		{
			if(num>=KUTI) {int r = num/KUTI; num%=KUTI; cout<<r<<" kuti ";}
			if(num>=LAKH) {int r = num/LAKH; num%=LAKH; cout<<r<<" lakh ";}
			if(num>=HAJAR) {int r = num/HAJAR; num%=HAJAR; cout<<r<<" hajar ";}
			if(num>=SHATA) {int r = num/SHATA; num%=SHATA; cout<<r<<" shata ";}
			if(num>0){cout<<num;}
		}
		
		else //second is exist
		{
			if(num>=KUTI) {int r = num/KUTI; num%=KUTI; cout<<r<<" kuti ";}
			if(num>=LAKH) {int r = num/LAKH; num%=LAKH; cout<<r<<" lakh ";}
			if(num>=HAJAR) {int r = num/HAJAR; num%=HAJAR; cout<<r<<" hajar ";}
			if(num>=SHATA) {int r = num/SHATA; num%=SHATA; cout<<r<<" shata ";}
			if(num>0){cout<<num<<" kuti ";}
			
			if(snum>=KUTI) {int r = snum/KUTI; snum%=KUTI; cout<<r<<" kuti ";}
			if(snum>=LAKH) {int r = snum/LAKH; snum%=LAKH; cout<<r<<" lakh ";}
			if(snum>=HAJAR) {int r = snum/HAJAR; snum%=HAJAR; cout<<r<<" hajar ";}
			if(snum>=SHATA) {int r = snum/SHATA; snum%=SHATA; cout<<r<<" shata ";}
			if(snum>0){cout<<snum;}
		}
		cout<<endl;
		count++;
	}//end while
	return 0;
}
