#include <stdio.h>
#include<stdlib.h>

int main(){

  float metros=0, centimetros=0;

  printf("Metros: ");
  scanf("%f", &metros);
 
  centimetros = metros * 100;

  printf("%.1f cm", centimetros);

  return 0;
}
