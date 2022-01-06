#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{	
	int n,a,tong;
	do
	{
	cout << "Nhap gia tri n: ";
	cin >> n;
	}
	while(n<=0);
	tong  = 0 ;
	
	
	
	for(a=1;a<=n;a++)
	{
		if(n%a==0)
		{
			tong = tong + a;
			if(a>=n)
			{
				cout << "Tong uoc so la: " << tong; 
			}
		}
	}
}



