#include<stdio.h>
void main (){
	int f=0,c=20;
	float cel;
	printf("la tabla fahrenheit\n");
	while (f<301){
		cel=(f-32)/1.8;
		printf("%d\t%.2f", f,cel);
		f=f+c;
		printf("\n");
	}
}
