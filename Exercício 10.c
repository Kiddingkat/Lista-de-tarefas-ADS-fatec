#include <stdio.h>
#include <stdlib.h>


int main()
 {
    int ano, vida;
    
    printf ("\nDigite o ano de nascimento: ");
    scanf ("%d", &ano);
    
    vida = ano * 365;
    
    printf("\nseu tempo de vida em dias= %.i", vida);
    
    return 0;
}
