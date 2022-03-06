#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void)
{
   setlocale(LC_ALL, "Portuguese");
	
   int m,d,a;

    do{
    printf ("Entre com o dia [1,31]: ");
    scanf ("%d", &d);
    }while(d<1||d>31);
    
    do{
    printf ("Entre com o mes [1,12]: ");
    scanf ("%d", &m);
    }while(m<1||m>12);
    
    do{
    printf ("Entre com o ano [1900,2100]: ");
    scanf ("%d", &a);
    }while(a<1900||a>2100);
    
    if(a%4==0 || a%100!=0 || a%400==0)
    
      printf ("\nO ano %d e bissexto.\n", a);          
     
     printf ("\nData: %d/%d/%d \n\n", d,m,a);
                  
system("PAUSE");
return 0;
}
