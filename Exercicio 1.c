#include<stdio.h>
#include<stdlib.h>
int main(void)
{
  
  float nota1, nota2, media;
  
  
  printf("\n primeira nota:");
  scanf("%f",&nota1);
  
  printf("\n segunda nota:");
  scanf("%f",&nota2);
  
  
  media = (nota1 + nota2) / 2;
  

  printf("\n Media = %.1f\n",media);
  
  system("pause");
  return 0;
}
