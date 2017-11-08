#include<stdio.h>
void main(){
	int n, i=1;
	printf("ingrese el numero: \t ");
	scanf("%d", &n);
	printf("El factorial del numero es: \n ");
	while(i<=n){
		if (n%i==0){
			printf("%d\n",i);	
		}
		i++;
	}
}
