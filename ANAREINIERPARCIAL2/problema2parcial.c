#include<stdio.h>
void main ()
{
	int f;
	float c;
	for (f=0;f<=300;f++)
	{
		c=(f-32)/1.8;
		if (f%20==0)
  	printf("%d--> %.2f\n",f,c);
    } 
}
