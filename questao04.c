#include <stdio.h>

int main(){
    int altura;
    int tipo_quadrado;

    printf("Digite a altura do quadrado: ");
    scanf("%d", &altura);

    printf("1 - Cheio\n");
    printf("2 - Vazio\n");
    printf("Digite o tipo de quadrado:");
    scanf("%d", &tipo_quadrado);

    if(tipo_quadrado == 1){
        // Triangulo Cheio
        for(int l = 0; l < altura; l++){
            for(int c = 0; c < altura; c++){
                printf("*");
            }
            printf("\n");
        }
    }
    else if(tipo_quadrado == 2){
        // Triangulo Vazio
        for(int l = 0; l < altura; l++){
            for(int c = 0; c < altura; c++){
                if(l == 0 || l == altura - 1 || c == 0 || c == altura - 1){
                    printf("*");
                }
                else{
                    printf(" ");
                }
            }
            printf("\n");
        }
    }
    else{
        printf("Valor invalido\n");
    }

    return 0;
}
