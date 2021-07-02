#include <iostream>
#include <math.h>
#include <iomanip>

//neste algoritmo desfiz a funcao pow() de math.h
using namespace std;

int main(int argc, char *argv[])
{
	
	float b; //base
	float x; //expoente
	
	float d = 1;
	float div;
	
	cout<<"Digite a base: ";
	cin>>b;
	
	cout<<"Digite o expoente: ";
	cin>>x;
	
	cout<<fixed<<setprecision(2);
	if(x < 0)
	{
		for(int i = x; i < 0; i++){
			d = (d * b);
			div = 1.0/d;		
		}
		cout<<"POW "<<setprecision(2)<<div<<endl;	
	}
	else
	{
		for(int i = 0; i < x; i++)
			d = d * b;		
		cout<<"POW= "<<setprecision(2)<<d<<endl;	
	}
	
	//utilizando a funcao pow
	cout<<"------------------------------\n\n";
	cout<<"UTILIZANDO O POW() DE math.h\n";
	cout<<"--- funcao pow: "<<pow(b, x)<<endl;
	return 0;
}