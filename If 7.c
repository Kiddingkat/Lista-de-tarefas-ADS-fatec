#include <stdio.h>
 
int main(void)
{
	int codigo;
	
	float salario_atual, novo_salario, valor_aumento;
	
	printf("Digite o codigo do cargo: ");
	scanf("%d", &codigo);
	printf("Digite o salario atual: R$ ");
	scanf("%f", &salario_atual);
	
	if(codigo == 101)
		valor_aumento = salario_atual * 0.10;
	else if(codigo == 102)
		valor_aumento = salario_atual * 0.20;
	else if(codigo == 103)
		valor_aumento = salario_atual * 0.30;
	else
		printf("\nCODIGO INVALIDO!\n");
	
	novo_salario = valor_aumento + salario_atual;
	

	printf("SALARIO ATUAL ......: R$ %10.2f\n", salario_atual);
	printf("VALOR DO AUMENTO ...: R$ %10.2f\n", valor_aumento);
	printf("NOVO SALARIO .......: R$ %10.2f\n", novo_salario);
	
	return(0);
}
