#include <stdio.h>
#include <locale.h>

int main(void)
{
	setlocale(LC_ALL, "Portuguese");
	
	float number, BTokay, BTnop;
	
	printf("Um n�mero de 0 a 9: ");
	scanf("%f", &number);
	
	if (number > 0 < 9)
	{
		printf("Esse n�mero n�o se encontra na faixa");
		scanf("%f", &BTnop);
	}
	else (number <= 0 >= 9);
	{
		printf("Este n�mero se encontra nessa faixa");
	    scanf("%f", &BTokay);
	}

	
	//Receber um n�mero e verificar se ele esta na faixa de 0 � 9. Se sim, mostre uma mensagem afirmativa, caso contr�rio mostre uma mensagem indicando que o n�mero n�o se encontra na faixa. 

		return 0;
}
