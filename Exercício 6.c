#include <stdio.h>
#include <stdlib.h>
 
int main(void)
{
	float raio, pi=3.14, area;
	
	printf("RAIO = "); 
	scanf("%f", &raio);
 
	area = pi * raio * raio;
 
	printf("AREA = %.2f m2 \n", area);
 
	system("pause");
	return 0;
}
