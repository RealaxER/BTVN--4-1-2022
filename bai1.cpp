#include<iostream>
using namespace std;

int main()
{
	int n,a,s;
	
	cout << "Nhap n: " ;
	cin >> n;
	s=a=0;
	
	for(a=0;a<=n ; a++)	
	{
		s = s+a;	
	}
	
	cout << "Gia tri S:" << s;
}
