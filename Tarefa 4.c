#include <stdio.h>
#include <locale.h>

int main(void)
{
    float ht, vh, salario, boni1, boni2;

 
    printf("HORAS TRABALHADAS ......: "); 
	scanf("%f", &ht);
	
    printf("VALOR DA HORA ..........: "); 
	scanf("%f", &vh);
	
    salario = ht * vh;
    
    printf("SEU SALARIO BASE:R$ %.2f", salario);
       
    if ( salario < 1500)
    {
       boni1 = salario + salario *0.15;
       
       printf("\nSALARIO COM BONIFICACAO:R$ %2f", boni1);
       scanf("%f", &boni1);
       scanf("%f", &salario);
	}

    if (salario > 1500);
    {
       boni2 = salario + salario * 0.05;
       
       printf("\nSALARIO COM BONIFICACAO:R$ %2f", boni2);
       scanf("%f", &boni2);
       scanf("%f", &salario);

	}
	return 0;
}


