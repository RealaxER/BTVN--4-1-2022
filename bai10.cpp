#include<iostream>
using namespace std;

int main ()
{
	int n;
	double a,s;
	float x = 1;

	cout << " Nhap gia tri cua n : ";
	cin >> n;
	s = 1;
	

	for(a=1;a<=n;a++)
	{
		s = s+(x/(2*a+1));
	}
		cout << "Gia tri tong la : " << s ;
}
