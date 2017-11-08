#include <stdio.h> //Noemi Bonilla, Greyci Gonzales
void main ()
{
int v;
 	printf ("Introduzca un valor \n");
     scanf ("%d", &v);
     printf ("\n La sucecion del numero es:\n");
   do
   {
   	printf ("%d\n", v);
     v--;
	}while (v>0);
}
