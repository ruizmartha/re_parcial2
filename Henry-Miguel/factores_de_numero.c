#include<stdio.h>
void main(){
	int num,i=1,a;
	
	printf("Ingrese el numero ");
	scanf("%d",&num);
	
	while(i<=num){
		if(num%i==0){	
			printf("%d\n",i);
		}
	i++;
	}
}
