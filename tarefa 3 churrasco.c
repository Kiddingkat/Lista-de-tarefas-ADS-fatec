#include <stdio.h>
#include <locale.h>

int main(void)
{
	setlocale(LC_ALL, "Portuguese");
	float NM, NW, NC, tempochurras, linguica, vinagrete, frango, paodealho, refrigerante, gelo,
	carne, queijocoalho, cerveja, vinho;
	
	printf("quantidade de homens: ");
	scanf("%f", &NM);
	printf("quantidade de mulheres: ");
	scanf("%f", &NW);
	printf("quantidade de crianças: ");
	scanf("%f", &NC);
	printf("Duração do churrasco em horas ");
	scanf("%f", &tempochurras);
	
	linguica = (NM*0.0200+ NW*0.0300 + NC*0.0150) * tempochurras;

	frango = (NM*0.0200+ NW*0.0300 + NC*0.0150) * tempochurras;
	
	carne = (NM*0.0200+ NW*0.0300 + NC*0.00150) * tempochurras;
	
	queijocoalho = NM+ NW + (NC/2); tempochurras/2;
	
	cerveja = NW + (NM/6);
	
	vinho = NW + (NM/8);
	
	paodealho = NM+ NW + (NC/2); tempochurras/2;
	
	vinagrete = NM+ NW + (NC/2); tempochurras/2;
	
	gelo = NM+ NW + (NC/8); tempochurras/2;
	
	refrigerante = NM+ (NW/6); tempochurras/2;
	
	printf(" linguiça %.3f KG", linguica);
    printf(" \nfrango: %.3f KG", frango);
	printf(" \nqueijo coalho %.f unidades", queijocoalho);
	printf(" \ncerveja %.f unidades", cerveja);
	printf(" \nvinho %.f unidades", vinho);
	printf(" \npão de alho %.f unidades", paodealho);
	printf(" \nvinagrete %.f unidades", vinagrete);
	printf(" \ngelo %.f unidades", gelo);
	printf(" \nrefrigerante %.f unidades", refrigerante);
	
    return 0;
}
	
	
