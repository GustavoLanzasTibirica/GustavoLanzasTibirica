#include <stdio.h>

#define TAM_MAX_LIN 10

#define TAM_MAX_COL 10

 

main(){

int lin, col;

float notas [TAM_MAX_LIN] [TAM_MAX_COL], media;

 

for (lin=0; lin<TAM_MAX_LIN; lin++) {

  media=0;

  for (col=0; col<TAM_MAX_COL; col++)

      media+=notas[lin][col];

      printf(“A média do aluno %d foi de %.2f\n”, lin+1, (float)media/TAM_MAX_COL);

}

}
