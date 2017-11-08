#include<stdio.h>
#define CNT 20
void main(){
	float cf;
	int i;
	printf("						LA TABLA ES: \n");
	while(i<=300){
		cf=(i-32)/1.8;
		printf("El numero de Celsius %d a Fahrenheit: \t%.2f",i, cf);	
		i=i+CNT;
		printf("\n");	
	}
}

