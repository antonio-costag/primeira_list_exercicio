#include <stdio.h>

int main() {
  // numero de arteristicos na base da arvore
  int folhas_base;
  // espessura do tronco
  int tronco_largura;
  // altura do tronco
  int tronco_altura;

  while (1) {
    printf("Digite a base das folhas da arvore: ");
    scanf("%d", &folhas_base);

    printf("Digite a largura do tronco: ");
    scanf("%d", &tronco_largura);

    printf("Digite a altura do tronco: ");
    scanf("%d", &tronco_altura);

    if (folhas_base < 3 || folhas_base % 2 == 0) {

      printf("\n\n[ERRO]A base das folhas deve ser um numero impar maior que 3\n\n");
    } 
    else if (tronco_largura < 1 || tronco_largura % 2 == 0 || tronco_largura > (folhas_base - 1) / 2) {

      printf("\n\n[ERRO]A largura do tronco deve ser um numero impar maior que 0 e menor que a metade da base das folhas\n\n");
    } 
    else if (tronco_altura < 2 || tronco_altura > (folhas_base - 1) / 2) {

      printf("\n\n[ERRO]A altura do tronco deve ser pelo menos 2 e menor que a metade da base das folhas\n\n");
    } 
    else {

      printf("\n");
      
      //Folhas da arvore
      for (int l = 0; l < folhas_base; l++) {
        for (int c = 0; c < folhas_base; c++) {
          if (l + c >= (folhas_base - 1) / 2 && c - l <= (folhas_base - 1) / 2 && l <= (folhas_base - 1) / 2) {
            printf("*");
          } 
          else if (l < (folhas_base - 1) / 2) {
            printf(" ");
          }
        }
        if (l < (folhas_base + 1) / 2) {
          printf("\n");
        }
      }

      // Tronco da arvore
      for (int l = 0; l < tronco_altura; l++) {
        for (int i = 0; i < (folhas_base - tronco_largura) / 2; i++) {
          printf(" ");
        }
        for (int c = 0; c < tronco_largura; c++) {
          printf("*");
        }
        printf("\n");
      }

      return 0;
    }
  }

  return 0;
}
