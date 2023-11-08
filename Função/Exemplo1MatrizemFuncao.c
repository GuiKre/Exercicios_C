#include <stdio.h>

// constantes
#define NLINHAS 3
#define NCOLUNAS 3

void preencherMatriz(int matriz[NLINHAS][NCOLUNAS]) {
  int l, c;
  
  for(l = 0; l < NLINHAS; l++) {
    for(c = 0; c < NCOLUNAS; c++) {
      printf("Entre com o elemento matriz[%d][%d]: ", l, c);
      scanf("%d", &matriz[l][c]);
    }
  }
}

void exibirMatriz(int matriz[NLINHAS][NCOLUNAS]) {
  int l, c;

  printf("Matriz completa: \n");
  
  for(l = 0; l < NLINHAS; l++) {
    for(c = 0; c < NCOLUNAS; c++) {
      printf("%3d ", matriz[l][c]); // %3d para formata��o da impress�o com 3 espa�os
    }
    printf("\n");
  }
}

void exibirElemento(int elemento) {

  printf("Ultimo elemento: %d \n", elemento);
  
}

void multiplicarElemento(int *elemento) {

  *elemento = *elemento * 3;
  
  printf("Ultimo elemento multiplicado por 3: %d \n", *elemento);
  
}

int main() {
  
  int matriz[NLINHAS][NCOLUNAS];

  /* ------------ preenche matriz completa ------------ */
  preencherMatriz(matriz);

  /* -------------- exibe matriz completa ------------- */
  // altera��es realizadas na fun��o s�o feitas direto na mem�ria,
  // ent�o tem efeito na main (assim como em passagem por refer�ncia)
  exibirMatriz(matriz);

  /* --------- passagem de elemento por valor --------- */
  // -1 porque quero o �ltimo elemento da matriz, neste caso, matriz[2][2]
  exibirElemento(matriz[NLINHAS - 1][NCOLUNAS - 1]);

  /* ------- passagem de elemento por refer�ncia ------ */
  // lembrar de utilizar & na chamada e * na fun��
  o
  multiplicarElemento(&matriz[2][2]);

  return 0;
}
