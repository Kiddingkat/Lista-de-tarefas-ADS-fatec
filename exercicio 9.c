#include <stdio.h>
#include <stdlib.h>

main(){

float bruto, desconto, liquido;

printf("Digite o salario bruto: ");
scanf("%f",&bruto);

desconto = bruto - 0.36/100;

printf("O seu salário vai ser: %.f", desconto);
scanf("%f",&desconto);

return 0;
}
