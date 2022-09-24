//Credo por: Wilfrido Morales
#include<iostream>
using namespace std;
int main()
{
	int WIMT_i=0,WIMT_l;
	float WIMT_x,WIMT_s=0;
	cout<<"ingrese el limite WIMT_l="; cin>>WIMT_l;
	do{

	cout<<"ingrese el numero CSNR_x="; cin>>WIMT_x;
	WIMT_i=WIMT_i+1;
	WIMT_s=WIMT_s+WIMT_x;



	}while(WIMT_i<WIMT_l);
	cout<<"Se ingresaron "<<WIMT_l<<" numeros "<< "que sumaron "<<WIMT_s<<endl;
	return 0;
}
