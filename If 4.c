#include<stdio.h>
#include<stdlib.h>

int main(void)
{
  float nota1, nota2, media;
  
  printf("Digite a primeira nota do aluno: ");
  scanf("%f",&nota1);
  
  printf("Digite a segunda nota do aluno: ");
  scanf("%f",&nota2);
  
  media = (nota1 + nota2) / 2;
  
  printf("Media do aluno = %.1f\n",media);
  
  if (media >= 5)
  {
  	printf("Aprovado");
  	scanf("%f", &media );
  }
  else (media < 5);
  {
  	printf("reprovado");
  	scanf("%f", &media);
  }
  //Calcular a média de um aluno em um semestre com duas provas, onde M = (P1 + P2) / 2. Se a média for maior ou igual a 5 escreva “aprovado”, senão calcule e mostre quanto faltou para atingir 5. 
  system("pause");
  return 0;
}
