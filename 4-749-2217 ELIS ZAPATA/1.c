#include <stdio.h>

void main (){
	int num=1, v, i;
	
	do{
		
		printf ("\n\n introduzca un numero o (0) para salir = ");
		scanf ("%d", &v);
		
		for (i=v; i>0; i=i-1){
	
		printf ("\n %d", i);
		}
	num=num-1;

	}while (v!=0);
}
