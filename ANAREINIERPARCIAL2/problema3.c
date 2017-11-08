#include<stdio.h>
void main()
{
	int n, i=1;
	printf("Introduzca un numero:\n");
	scanf("%d",&n);
	printf("El numero %d es divisible por\n",n);
	while(i<=n){
		if (n%i==0){
			printf("%d\n",i);
			
		}
		i++;
	}
}
