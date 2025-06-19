#include <stdio.h>

int Fatorial(int numero);

int main(){
    int altura;

    printf("Digite a altura do triangulo: ");
    scanf("%d", &altura);

    int ajuste = altura;

    for(int l = 0; l < altura; l++){
        for(int i = 0; i < ajuste; i++){
            printf(" ");
        }
        ajuste--;
        
        for(int c = 0; c < altura; c++){
            if(l - c >= 0){
                int resultado = Fatorial(l) / (Fatorial(c) * Fatorial(l - c));
                printf("%d ", resultado);
            }
        }
        printf("\n");
    }

    return 0;
}
int Fatorial(int numero){
    int resultado = 1;

    if (numero <= 0) {
        return 1;
    }
    else{
        do
        {
            resultado *= numero;
            numero -= 1;
        } while (numero > 0);
        return resultado;
    }
}
