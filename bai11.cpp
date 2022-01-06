#include<iostream>
using namespace std;

int main()
{
	int a,b,n,m;
	int x;
	
	cout << "Gia tri cua n la : ";
	cin >> n;
	cout << "Gia tri cua m la : ";
	cin >> m;
	b = 0;
	x=0; 
	
	for(a=n;a>0;a--)
	{
		b++;
		if(b==m)
		{
			a++;
			b = b*0;
		}
		x++;
	}
	cout << "So ngay vut het vo la: " <<x;
}
