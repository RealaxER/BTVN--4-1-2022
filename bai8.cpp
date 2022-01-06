#include<iostream>
using namespace std;

int main ()
{
	int n,a;
	cout << "Gia tri cua n : ";
	cin >> n;
	
	cout << "Cac chu so chan la : ";
	while(n>0)
	{
		a = n%10;
		if(a%2==0)
		{
			cout << a << " ";
		}
		if(n<=10)
		{
			if(!(a%2==0))
			{
				cout << "Khong co";
			}
		}
		if(n<=10)
		{
			break;
		}
		n = n/10;	
	}
	
	

}
