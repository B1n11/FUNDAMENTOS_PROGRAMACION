#include <iostream>
using namespace std; 

int main (){
	
	float a,b;
	cout<<"ingrese a: ";
	cin>>a;
	cout<<"ingrese b: ";
	cin>>b;
	
	if(a==b){
	
	cout<<"el valor de a= "<<a<<"es igual a b= "<<b<<endl;
		
	}else{
		
		if(a<b){
		
			cout<<"el valor de a= "<<a<<"es menos a b= "<<b<<endl;
			
			
			}else{
	
			cout<<"el valor de b= "<<b<<"es menos a a= "<<a<<endl;
	}
	}		
	
	return 0;
}
