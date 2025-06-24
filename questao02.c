#include <stdio.h>

int main(){
  int altura_bruta;

  printf("Digite a altura do triengulo: ");
  scanf("%d", &altura_bruta);

  if(altura_bruta < 2){
    printf("Altura deve ser maior ou igual a 2.\n");
    return 0;
  }

  int altura = altura_bruta * 2 - 1;
  int correcao = ((altura - 1) / 2) - 1;
  int ajuste_cres = -correcao;
  int ajuste_desc = 1;

  printf("\n");

  for (int l = 0; l < altura; l++) {
    for (int c = 0; c < altura; c++) {
        if (l + c >= (altura - 1) / 2 && c - l <= (altura - 1) / 2 &&
            l <= (altura - 1) / 2) {
            if(ajuste_cres < 1){
                printf("%d  ", l + ajuste_cres);
            }
            else{
                printf("%d  ", l + ajuste_desc);
            }
        }else{
            printf("   ");
        }

      if (ajuste_cres < 1) {
        ajuste_cres++;
      } else {
        ajuste_desc--;
      }
    }
    ajuste_cres = -correcao;
    ajuste_desc = 1;
    printf("\n\n");
  }

  return 0;
}
