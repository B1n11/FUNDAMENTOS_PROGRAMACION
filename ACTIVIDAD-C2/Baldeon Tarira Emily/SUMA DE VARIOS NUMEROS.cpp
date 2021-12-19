#include<iostreAm>
#include<conio.h>
using namespace std;
int main ()
{
	int n, suma=0;
	
	while (n != 0)
	{
			cout<<"Escriba un numero: ";
	        cin>>n;
	        	suma = suma+n;
	}

	cout<<"\nLa suma es: "<<suma<<endl;
	getch();
	return 0;
}
