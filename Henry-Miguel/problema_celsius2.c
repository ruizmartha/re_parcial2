#include<stdio.h>

void main(){
	int fa=0,cont=20;
	float celsius;
	
	printf("Tabla de Fahrenheit-Celsius\n\n");
	while(fa<301){
		celsius=(fa-32)/1.8;
		printf("%d\t%.2f",fa,celsius);
		fa=fa+cont;
		printf("\n");
	}
	
}
