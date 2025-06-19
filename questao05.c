#include <stdio.h>

int main(){
    int altura;
    int tipo_triangulo;

    printf("Digite a altura do triangulo: ");
    scanf("%d", &altura);

    printf("1 - Cheio\n");
    printf("2 - Vazio\n");
    printf("Digite o tipo de triangulo:");
    scanf("%d", &tipo_triangulo);

    if(tipo_triangulo == 1){
        // Triangulo Cheio
        for(int l = 0; l < altura; l++){
            for(int c = 0; c < altura; c++){
                if(l >= c){
                    printf("*");
                }
                else{
                    printf(" ");
                }
            }
            printf("\n");
        }
    }
    else if(tipo_triangulo == 2){
        // Triangulo Vazio
        for(int l = 0; l < altura; l++){
            for(int c = 0; c < altura; c++){
                if(l - c == 0 || c == 0 || l == altura - 1){
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