#include <stdio.h>

void main (){
	int  i;
	float c=0;
	
	printf (" programa que calcula de fahrenheit a celsius");
	
	
	for (i=0; i<=300; i=i+20){
		
		c=(i-32)/1.8;
		
		printf ("\n %d F------>  %.2f C", i, c);
	
	}
	
}
