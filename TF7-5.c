#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int x, y, z; 
    
    printf ("Digite um numero: ");
    scanf("%d", &x);
    printf("Digite outro numero: ");
    scanf("%d", &y);
    printf("Digite mais um numero: ");
    scanf("%d", &z);
    printf("\n\n");
    
    if (x > y && x > z) {
        printf ("%d", x);
    } else if (y > x && y > z) {
        printf ("%d", y); 
    } else {
    printf("%d", z);
    }
    return 0;
}
