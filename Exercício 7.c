#include <stdio.h>
#include <stdlib.h>

main(){

float horastrabalhadas, horasextras, salario;

printf("horas trabalhadas: ");
scanf("%f",&horastrabalhadas);

printf("horas extras: ");
scanf("%f",&horasextras);

salario = horastrabalhadas *10 + horasextras * 15;

printf("O seu sal�rio vai ser: %.2f",salario);

return 0;
}
