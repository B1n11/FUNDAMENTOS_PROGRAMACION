#include<iostream>
using namespace std;


 int main(){
	
	int pr,c=0,li=30,ap=0,ar=0;
	
cout<<"ingrese promedios:"; 
 cin>>pr;
	c=c+1;

if(pr >= 7)
{
	ap=ap+1;
}
if (pr <= 7)
{
if (pr <= 5)
{
	ar=ar+1;
}
}
	if(c<li)
	{
cout<<"ingrese promedios:"; 
 cin>>pr;
	}
	if(c>li)
	{
		cout<<ap,ar;
	}
	






return 0;
}
