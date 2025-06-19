#include <stdio.h>

int main(){
    int altura;

    printf("Digite a altura do triengulo: ");
    scanf("%d", &altura);

    if(altura % 2 == 0){
        //triangulo de altura par
        for (int l = 0; l < altura; l++) {
            for (int c = 0; c < altura; c++) {
                if (l + c >= (altura - 1) / 2 && c - l <= (altura) / 2 &&
                    c + l <= (altura - 1) + ((altura) / 2) && l - c <= (altura) / 2) {
                    printf("x");
                } else {
                    printf(" ");
                }
            }
        printf("\n");
        }
    }else{
        //triangulo de altura impar
        for (int l = 0; l < altura; l++) {
            for (int c = 0; c < altura; c++) {
                if (l + c >= (altura - 1) / 2 &&
                    c + l <= (altura - 1) + ((altura - 1) / 2) &&
                    l - c <= (altura - 1) / 2 && c - l <= (altura - 1) / 2) {
                    printf("x");
                } else {
                    printf(" ");
                }
            }
            printf("\n");
        }
    }

    return 0;
}