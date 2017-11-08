#include<stdio.h>
//levy Castillo 8-923-1709 , Alan Moran 2-743-743
void main ()
{
	int n,a ;
	
	 printf("introduzca un valor entero\n");
	 scanf("%d",& n);
	 
	 for(a=1;a<=n;a++)
	 {
	 if(n%a==0)
	 {	
	 	printf("los factores son:%d\n",a,n);
    } 
}
}
