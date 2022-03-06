#include <stdio.h>
#include <locale.h>

int main(void)
{
	setlocale(LC_ALL, "Portuguese");
	
	float number, negative, positive;
	
	printf("Um número: ");
	scanf("%f", &number);
	
	if (number < 0)
	{
		printf("seu número é negativo");
		scanf("%f", &negative);
	}
	else (number > 0);
	{
		printf("seu número é positivo");
		scanf("%f", &positive);
	};
	
	//Receber um número e informar se ele é negativo ou não é negativo. 
		return 0;
}

