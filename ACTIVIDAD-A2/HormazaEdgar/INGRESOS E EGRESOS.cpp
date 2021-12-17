#include <iostream>
using namespace std;
int main()
{
float x,c=0,li,a=0,i=0,g=0;
cout<<"Cuantos valores va ingresar: "; cin>>li;
do{
cout<<"Ingrese los valores: "; cin>>x;
c=c+1;
a=a+x;
if(x>0){
	i=i+x;
}else{
	g=g+x;
}
}while(c<li);
cout<<"El saldo de egresos es: "<<g<<endl;
cout<<"El saldo de ingresos es: "<<i<<endl;
cout<<"El saldo total es: "<<a<<endl;

}
