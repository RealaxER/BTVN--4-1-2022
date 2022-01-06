#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{	
	int n,a;
	do
	{
	cout << "Nhap gia tri n: ";
	cin >> n;

	}
	while(n<=0);
	
	
	
	for(a=1;a<=n;a++)
	{
		if(n%a==0)
		{
			cout << "So " << a <<" la uoc cua so " << n <<endl;
		}
	}
}



