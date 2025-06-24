#include <stdio.h>

int main(){
    int altura;

    printf("Digite a altura do triangulo: ");
    scanf("%d", &altura);

    int ajuste = altura;

    unsigned long long linhaF = 1;
    unsigned long long colunaF = 1;
    unsigned long long linha_sub_colunaF = 1;

    for(int l = 0; l < altura; l++){
        for(int i = 0; i < ajuste; i++){
            printf(" ");
        }
        ajuste--;

        for(int c = 0; c < altura; c++){
            if(l - c >= 0){
                //calculando o fatorial da linha
                if (l <= 0) {
                    linhaF = 1;
                }
                else{
                    int numero = l;
                    while(numero > 0){
                      linhaF *= numero;
                      numero -= 1;
                    }
                }

                //calculando o fatorial da coluna
                if (c <= 0) {
                    colunaF = 1;
                }
                else{
                    int numero = c;
                    while(numero > 0){
                      colunaF *= numero;
                      numero -= 1;
                    }
                }

                //calculando o fatorial da linha - coluna
                if (l - c <= 0) {
                    linha_sub_colunaF = 1;
                }
                else{
                    int numero = l - c;
                    while(numero > 0){
                      linha_sub_colunaF*= numero;
                      numero -= 1;
                    }
                }

                //calculando os coeficientes binomiais
                int resultado = linhaF / (colunaF * linha_sub_colunaF);
                printf("%d ", resultado);

                // resetando os fatoriais para o proximo loop
                linhaF = 1;
                colunaF = 1;
                linha_sub_colunaF = 1;
            }
        }
        printf("\n");
    }

    return 0;
}
