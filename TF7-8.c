#include <stdio.h>

#include <stdlib.h>

void recebe(float altura,char sexo)

{

float ideal;

if(sexo=='M')

{

ideal=(72.7 * altura )- 58;

printf("\nO peso ideal é: %f",ideal);

}

else

if(sexo=='F')

{

ideal=(62.1 * altura) - 44.7;

printf("\nO peso ideal é: %f",ideal);

}

}

int main()

{

float altura;

char sexo;

printf("Informe qual é a sua altura: ");

scanf("%f", &altura);

printf("\n");

printf("Informe o sexo M para Masculino e F para Feminino: ");

scanf("%s", &sexo);

recebe(altura,sexo);

printf("\n \n");

}
