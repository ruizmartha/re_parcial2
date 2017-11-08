#include<stdio.h>
void main(){
	int i, num;
	
	printf("Ingrese el numero: ");
	scanf("%d", &num);
	
	for (i=num; i>=1; i--){
		printf("%d \n", i);
		num--;
	}
}
