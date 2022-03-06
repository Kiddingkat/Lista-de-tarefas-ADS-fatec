#include <stdio.h>
#include <locale.h>

int main(void)
{
	setlocale(LC_ALL, "Portuguese");
	
	float num1, num2, total;
	
	printf ("Informe o primeiro numero\n");
    scanf ("%f",&num1);
     
    printf ("Informe o 2 numero\n");
    scanf ("%f",&num2);
    
    total = (num1 / num2);
    
    printf("Resultado: ");
    scanf("%f", &total);
    if (num2 = 0)
    {
    	printf("denominador diferente de zero");
	};

}
