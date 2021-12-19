#include<iostream>
using namespace std;
int main()
{
	int n1,n2;
	cout<<"Escriba el primer numero:" ;
	cin>>n1;
	cout<<"Escriba el segundo numero:" ;
	cin>>n2;
	
		if(n1==n2)
	{
		cout<<"Los numeros son iguales " ;
	
	}
		else {		
		if(n1<n2)
	{
		cout<<"El menor es: " <<n1 ;
	}
	else
	{
		cout<<"El menor es " <<n2 ;
	}
	
             }	
	
	return 0;
}
