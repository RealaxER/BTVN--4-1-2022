#include<iostream>
using namespace std;

int main()
{
	int a,x,n;
	cout << "Gia tri cua n: ";
	cin >> n;
	
	a = x = 0;
	
	for(a=0;a<=n;a++)
	{
		x = x + a*a;
	}
	cout << "Gia tri cua tich x: " << x;
}
