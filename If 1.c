#include <stdio.h>
#include <locale.h>

int main(void)
{
	setlocale(LC_ALL, "Portuguese");
	
	float number, negative, positive;
	
	printf("Um n�mero: ");
	scanf("%f", &number);
	
	if (number < 0)
	{
		printf("seu n�mero � negativo");
		scanf("%f", &negative);
	}
	else (number > 0);
	{
		printf("seu n�mero � positivo");
		scanf("%f", &positive);
	};
	
	//Receber um n�mero e informar se ele � negativo ou n�o � negativo. 
		return 0;
}

