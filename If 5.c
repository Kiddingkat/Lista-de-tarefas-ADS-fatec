#include <stdio.h>

     void main ( ) 
{
     
	 int x,y;
     printf ("Informe o primeiro numero\n");
     scanf ("%d",&x);
     
    printf ("Informe o 2 numero\n");
    scanf ("%d",&y);

    if (x > y)
    {
    printf ("%d e maior que %d",x,y);
	}
    else
    if (y > x)
    {
    printf ("%d e maior que %d",y,x);
	};
}


