#include<stdio.h>
void main(){
	int n,i;
	printf("introduzca un numero: ");
	scanf("%d",&n);
	for(i=1;i<=+n;i++){
		if(n%i==0)
		printf("los factores son: %d \n",i);
	}
}
