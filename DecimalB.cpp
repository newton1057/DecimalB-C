// Codigo que te ayuda a pasar un numero entero en Sistema decimal a Binario 
// Autor:  Eduardo Isaac Davila Bernal
// Fecha: 29/12/2019
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <string>
#include <sstream>
using namespace std;
int main()
{
	//Variables
	int z=0;
	float vardec=0;
	double x=0,res=0;
	int x_entero=0;
	string varbin="";
	string aux_cadena="";
	
	cout<<"Programa Conversor de Decimal a Binario\n";
	cout<<"Introduce el numero Decimal a convertir: ";
	cin>>vardec;
	
	while(vardec!=0){
		x=vardec/2;
		//cout<<x<<"\n";
		//cout<<"S "<<vardec<<"\n";
		x_entero = (int) x;
		//cout<<x_entero<<"\n";
		res = x - x_entero;
		//cout<<perdon<<"\n";
		if(res==0){
   			//printf("Es decimal");
   				varbin=varbin+"0";			
		}
		else if(res!=0){
			varbin=varbin+"1";	
   			//printf("No es decimal");
		}
		vardec = x_entero;
		//cout<<"N "<<vardec<<"\n";
	}
	
	z=varbin.size();
	
	for (int i = z; i >=0 ; i--){
		 aux_cadena += varbin[i];
	}
	
	cout<<"Tu numero binario es: "<<varbin<<"\n";
	cout<<"Correcto: "<<aux_cadena;
			
	return 0;
	}
