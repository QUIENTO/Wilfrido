//Programa que presenta las operaciones básicas
//Creado por Charli Nieves 
//Fecha: 22-09-2022
#include<iostream>
using namespace std;
int main()
{
	float WIMT_x,WIMT_y,WIMT_s,WIMT_m,WIMT_d,WIMT_r;
	//Ingreso de datos
	cout<<"Ingrese en valor de WIMT_x=:";
	cin>>WIMT_x;
	cout<<"Ingrese en valor de WIMT_y=:";
	//Operaciones 
	cin>>WIMT_y;
	WIMT_s=WIMT_x+WIMT_y;
	WIMT_m=WIMT_x*WIMT_y;
	WIMT_d=WIMT_x/WIMT_y;
	WIMT_r=WIMT_x-WIMT_y;
	//Muestra los resutaldos.
	cout<<"Las suma de "<<WIMT_x<<" + "<<WIMT_y<<" = "<<WIMT_s<<endl;
	cout<<"Las multiplicacion de "<<WIMT_x<<" * "<<WIMT_y<<" = "<<WIMT_m<<endl;
	cout<<"Las division de "<<WIMT_x<<" / "<<WIMT_y<<" = "<<WIMT_d<<endl;
	cout<<"Las resta de "<<WIMT_x<<" - "<<WIMT_y<<" = "<<WIMT_r<<endl;
	return 0;
}


