#include <stdio.h>

int main(){
    int altura;

    printf("Digite a largura central do losango: ");
    scanf("%d", &altura);

    // nois dois codigos eu so corto as pontras de um quadrado pra chegar no losango
    if(altura % 2 == 0){
        //Losango de altura par
        /*
         xx
        xxxx
        xxxx
         xx
        */
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
        //Losango de altura impar
        /*
         x
        xxx
         x
        */
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
