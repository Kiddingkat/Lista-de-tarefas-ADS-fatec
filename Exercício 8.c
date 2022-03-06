
#include<stdio.h>
#include<stdlib.h>
int main(void)
{
 
  float notat, notap, media;
  //Entrada de dados
  printf("Digite a primeira nota do aluno: ");
  scanf("%f",&notat);
  
  printf("Digite a segunda nota do aluno: ");
  scanf("%f",&notap);
  
 
  media = (notat + 0.60/100 + notap + 0.40/100) / 2;

  printf("Media do aluno = %.1f\n",media);
  
  system("pause");
  return 0;
}
