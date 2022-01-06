#include<iostream>
using namespace std;

int main()
{
	int a,x,n;
	cout << "Gia tri cua n: ";
	cin >> n;
	
	a = x = 1;
	
	for(a=1;a<=n;a++)
	{
		x=x*a;
	}
	cout << "Gia tri cua tich x: " << x;
}
