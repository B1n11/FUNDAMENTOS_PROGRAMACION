#include <iostream>
using namespace std; 

int main (){
	
   int p=0,a;
   float v=0,c;
   cout<<"ingrese la cantidad de valores a sumar : ";
   cin>>a;
   do{
   	
   	cout<<"ingrese el elemento"<<p+1;
   	cin>>c;
   	p=p+1;
   	v=v+c;

   	
   }while(p<a);
   cout<<"la suma de los elemntos fue : "<<v<<endl;
	
	return 0;
}
