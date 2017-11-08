//Cristofer Caballero y Manuel Rosario
#include<stdio.h>
void main(){
	int a=3;
	printf("introduzca el numero entero\n");
	scanf("%d",&a);
	printf("\n");
	
	do
	{
		if (a%1==0)
		{
			printf("%d\n",a);
		}
		a--;
	}
	while (a>0);
}
