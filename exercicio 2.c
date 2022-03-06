#include <stdio.h>
#include<stdlib.h>

int main()
{
 
 float area,base,altura;


    printf("\n base do triangulo:");
    scanf("%f",&base);
    
    printf("\n altura do triangulo:");
    scanf("%f",&altura);

 
    area=(base*altura)/2;

    printf("\narea do triângulo=%.1f\n",area);
    return 0;

}
