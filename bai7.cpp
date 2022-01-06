#include<iostream>
using namespace std;

int main ()
{
	int n,a;
	cout << "Gia tri cua n : ";
	cin >> n;
	
	cout << "Cac gia tri chu so la : ";
	while(n>0)
	{
		a = n%10;
		cout << a << " ";
		if(n<=10)
		{
			break;
		}
		n = n/10;	
	}
	
	

}
