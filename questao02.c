#include <stdio.h>

int main(){
  int altura_bruta;

  printf("Digite a altura do triengulo: ");
  scanf("%d", &altura_bruta);

  if(altura_bruta < 2){
    printf("Altura deve ser maior ou igual a 2.\n");
    return 0;
  }

  //corrigindo a altura pra fazer uma matriz cmpativel com a pirâmide
  int altura = altura_bruta * 2 - 1;
  //achando um valor negativo que quando chegar no topo da pirâmide vai ser igual a 1
  int correcao = ((altura - 1) / 2) - 1;
  //esse valor va crescer
  int ajuste_cres = -correcao;
  //esse valor vai descrescer ate chegar no valor de "correcao"
  int ajuste_desc = 1;

  printf("\n");

  for (int l = 0; l < altura; l++) {
    for (int c = 0; c < altura; c++) {
      //criando a pirâmide
        if (l + c >= (altura - 1) / 2 && c - l <= (altura - 1) / 2 &&
            l <= (altura - 1) / 2) {
              //fazendo minhas operações para gerar os valores
            if(ajuste_cres < 1){
                printf("%d  ", l + ajuste_cres);
            }
            else{
                printf("%d  ", l + ajuste_desc);
            }
        }else{
            printf("   ");
        }
      //parando de crescer o ajuste_cres e começando a descer o ajuste_desc
      if (ajuste_cres < 1) {
        ajuste_cres++;
      } else {
        ajuste_desc--;
      }
    }
    //resetando os ajustes para um novo ciclo
    ajuste_cres = -correcao;
    ajuste_desc = 1;
    printf("\n\n");
  }

  return 0;
}
