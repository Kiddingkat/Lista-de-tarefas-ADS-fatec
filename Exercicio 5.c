#include <stdio.h>
#include <stdlib.h>

      int main(void){ 

    float espaco_percorrido, tempo_gasto, velocidade_media = 0; 

     printf("Espaco percorrido(em quilometros): "); 
     scanf("%f", &espaco_percorrido); 
     
     printf("Tempo gasto(em minutos): "); 
	 scanf("%f", &tempo_gasto);
 
	 velocidade_media = (espaco_percorrido/tempo_gasto)*60; 
   
     printf("%0.2f KM/H", velocidade_media); 
    return 0;    
}
