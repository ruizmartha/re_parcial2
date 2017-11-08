#include<stdio.h>
void main(){
	int i=0 ,fin=300,cont=20;
	float c;
	while(i<=fin){
		
		c=((i-32)/1.8);
			
	printf("%d ----> %.2f \n",i,c);
	i=i+cont;
}
}
