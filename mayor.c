#include <stdio.h>
int main(){
	/*variables de entrada*/
	float a=0;
	float b=0;
	float c=0;
	
	/*variables de salida*/
	float m=0;
	float resultado=0;
	
	/*dar valores*/
	printf("\n Ingrese el primer valor: \n \t");
	scanf(" %f",&a);
	printf("\n Ingrese el segundo valor: \n \t");
	scanf(" %f",&b);
	printf("\n Ingrese el tercer valor: \n \t");
	scanf(" %f",&c);
	
	/*buscar el mayor para a*/
	if(a<b) {
	m=b;
	}//if
	else {
	m=a;
	}//else
	
	/*buscar el mayor para b*/
	if(b<c) {
	resultado=c;
	}//if
	if(b>c) {
			resultado=b;
	}
	
	/*buscar el mayor para c*/
	if(c<a) {
	m=a;
	}//if
	else {
		m=c;
	}//else
	
	/*resultado*/
	if(resultado>m) {
		printf("\n El valor mayor es: %f \n",resultado);
	}
	else {
		printf("\n El valor mayor es: %f \n",m);
	}
	return 0;
}//main