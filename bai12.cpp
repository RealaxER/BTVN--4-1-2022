#include<iostream>
#include <math.h>
using namespace std;

int main()
{
	int a,b,x,y,z,n;
	cout <<"Nhap gia tri n: ";
	cin >> n;
	for(a=1;a<=;a++)
	{
		b =	n/(pow(10,a));
		if(b==0)
		{
			break;
		}
	}
	
	if(a<=9)
	{  
		x=((n/pow(10,6))/100);
		y = ((n/pow(10,6)) - x*100)/10;
		z=((n/pow(10,6))-x*100-y*10);
			if(x==1) 
			cout << "\nMot tram";
			if(x==2) 
			cout << "\nHai tram ";
			else if(x==3) 
			cout << "\nBa tram";
			else if(x==4) 
			cout << "\nBon tram";	
			else if(x==5) 
			cout << "\nNam tram";	
			else if(x==6) 
			cout << "\nSau tram";
			else if(x==7) 
			cout << "\nBay tram";
			else if(x==8) 
			cout << "\nTam tram";
			else if(x==9) 
			cout << "\nChin tram";
			
			
			if(!(y==0))
		{
			if(y==1) 
			cout << " muoi";
			if(y==2) 
			cout << " hai muoi";
			else if(y==3) 
			cout << " ba muoi ";
			else if(y==4) 
			cout << " bon muoi";	
			else if(y==5) 
			cout << " nam muoi";	
			else if(y==6) 
			cout << " sau muoi";
			else if(y==7) 
			cout << " bay muoi";
			else if(y==8) 
			cout << " tam muoi";
			else if(y==9) 
			cout << " chin muoi";
}
		else
		{
			if(z==1) 
			cout << " linh mot";
			else if(z==2) 
			cout << " linh hai";
			else if(z==3) 
			cout << " linh ba ";
			else if(z==4) 
			cout << " linh bon";	
			else if(z==5) 
			cout << " linh nam";	
			else if(z==6) 
			cout << " linh sau";
			else if(z==7) 
			cout << " linh bay";
			else if(z==8) 
			cout << " linh tam";
			else if(z==9) 
			cout << " linh chin";	
		}
		if(!(y==0))
		{
			if(z==1) 
			cout << " mot";
			else if(z==2) 
			cout << " hai";
			else if(z==3) 
			cout << " ba ";
			else if(z==4) 
			cout << " bon";	
			else if(z==5) 
			cout << " nam";	
			else if(z==6) 
			cout << " sau";
			else if(z==7) 
			cout << " bay";
			else if(z==8) 
			cout << " tam";
			else if(z==9) 
			cout << " chin";	
		}
			if(a>3)
			{
			cout <<" trieu ";
		}
	
	if((a<=6)||(a>=6))
	{
		n = n%1000000;
		x=((n/1000)/100);
		y = ((n/1000) - x*100)/10;
		z=((n/1000)-x*100-y*10);
			if(x==1) 
			cout << "Mot tram";
			if(x==2) 
			cout << "Hai tram ";
			else if(x==3) 
			cout << "Ba tram";
			else if(x==4) 
			cout << "Bon tram";	
			else if(x==5) 
			cout << "Nam tram";	
			else if(x==6) 
			cout << "Sau tram";
			else if(x==7) 
			cout << "Bay tram";
			else if(x==8) 
			cout << "Tam tram";
			else if(x==9) 
			cout << "Chin tram";
			
			
			if(!(y==0))
		{
			if(y==1) 
			cout << " muoi";
			if(y==2) 
			cout << " hai muoi";
			else if(y==3) 
			cout << " ba muoi ";
			else if(y==4) 
			cout << " bon muoi";	
			else if(y==5) 
			cout << " nam muoi";	
			else if(y==6) 
			cout << " sau muoi";
			else if(y==7) 
			cout << " bay muoi";
			else if(y==8) 
			cout << " tam muoi";
			else if(y==9) 
			cout << " chin muoi";
}
		else
		{
			if(z==1) 
			cout << " linh mot";
			else if(z==2) 
			cout << " linh hai";
			else if(z==3) 
			cout << " linh ba ";
			else if(z==4) 
			cout << " linh bon";	
			else if(z==5) 
			cout << " linh nam";	
			else if(z==6) 
			cout << " linh sau";
			else if(z==7) 
			cout << " linh bay";
			else if(z==8) 
			cout << " linh tam";
			else if(z==9) 
			cout << " linh chin";	
		}
		if(!(y==0))
		{
			if(z==1) 
			cout << " mot";
			else if(z==2) 
			cout << " hai";
			else if(z==3) 
			cout << " ba ";
			else if(z==4) 
			cout << " bon";	
			else if(z==5) 
			cout << " nam";	
			else if(z==6) 
			cout << " sau";
			else if(z==7) 
			cout << " bay";
			else if(z==8) 
			cout << " tam";
			else if(z==9) 
			cout << " chin";	
		}
			if(a>3)
			{
			cout <<" nghin ";
			}
		


		if ((a <= 3)||(a>=3))
	{		n = n%1000;
			x= n/100;
			y = (n - x*100)/10;
			z=(n-x*100-y*10);
			if(x==1) 
			cout << "Mot tram";
			if(x==2) 
			cout << "Hai tram";
			else if(x==3) 
			cout << "Ba tram";
			else if(x==4) 
			cout << "Bon tram";	
			else if(x==5) 
			cout << "Nam tram";	
			else if(x==6) 
			cout << "Sau tram";
			else if(x==7) 
			cout << "Bay tram";
			else if(x==8) 
			cout << "Tam tram";
			else if(x==9) 
			cout << "Chin tram";
			
			
			if(!(y==0))
		{
			if(y==1) 
			cout << " muoi";
			if(y==2) 
			cout << " hai muoi";
			else if(y==3) 
			cout << " ba muoi ";
			else if(y==4) 
			cout << " bon muoi";	
			else if(y==5) 
			cout << " nam muoi";	
			else if(y==6) 
			cout << " sau muoi";
			else if(y==7) 
			cout << " bay muoi";
			else if(y==8) 
			cout << " tam muoi";
			else if(y==9) 
			cout << " chin muoi";
		}
		else
		{
			if(z==1) 
			cout << " linh mot";
			else if(z==2) 
			cout << " linh hai";
			else if(z==3) 
			cout << " linh ba ";
			else if(z==4) 
			cout << " linh bon";	
			else if(z==5) 
			cout << " linh nam";	
			else if(z==6) 
			cout << " linh sau";
			else if(z==7) 
			cout << " linh bay";
			else if(z==8) 
			cout << " linh tam";
			else if(z==9) 
			cout << " linh chin";	
		}
		if(!(y==0))
		{
			if(z==1) 
			cout << " mot";
			else if(z==2) 
			cout << " hai";
			else if(z==3) 
			cout << " ba ";
			else if(z==4) 
			cout << " bon";	
			else if(z==5) 
			cout << " nam";	
			else if(z==6) 
			cout << " sau";
			else if(z==7) 
			cout << " bay";
			else if(z==8) 
			cout << " tam";
			else if(z==9) 
			cout << " chin";	
		}
		
	}
}
}
}
