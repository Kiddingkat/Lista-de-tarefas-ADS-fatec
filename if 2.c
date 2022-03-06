#include <stdio.h>
#include <locale.h>

int main(void)
{
	setlocale(LC_ALL, "Portuguese");
	
	float number, BTokay, BTnop;
	
	printf("Um número de 0 a 9: ");
	scanf("%f", &number);
	
	if (number > 0 < 9)
	{
		printf("Esse número não se encontra na faixa");
		scanf("%f", &BTnop);
	}
	else (number <= 0 >= 9);
	{
		printf("Este número se encontra nessa faixa");
	    scanf("%f", &BTokay);
	}

	
	//Receber um número e verificar se ele esta na faixa de 0 à 9. Se sim, mostre uma mensagem afirmativa, caso contrário mostre uma mensagem indicando que o número não se encontra na faixa. 

		return 0;
}
