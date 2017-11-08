#include <stdio.h> //Noemi Bonilla, Greyci Gonzalez
void main () {
	int cont=20, f=0;
	float ce;
	for (f=0; f<301; f=f+cont)
	{
		ce=(f-32)/1.8;
		printf("%d --> %.2f\n", f, ce);
	}
}
