#include <stdio.h>//Noemi Bonilla, Greyci Gonzales
void main () {
	int num, i, a;
	printf("Introduzca un numero entero positivos:\t");
	scanf("%d", &num);
	printf("Los factores del %d son:\n", num);
	for(i=1; i<=num; i++)
	{
		if(num%i==0)
		{
			printf("%d\n", i);
		}
	}
}
