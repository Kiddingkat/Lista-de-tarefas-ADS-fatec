#include <stdio.h>

int main(){
    int Idade=0;

    printf("Digite idade:");
    scanf("%d",&Idade);

    if(Idade>18 && Idade<=65){
        printf("jovem\n");
    }
    else if(Idade>=16 && Idade<=18 || Idade>65){
        printf("Criança ou Idoso\n");
    }
    else
    {
        printf("Erro\n");
    }

    system("pause");
    return 0;
}
