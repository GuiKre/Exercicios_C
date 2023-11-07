#include <stdio.h>

// tambem funciona com valores[]
void preenche(float *valores, int qtd) {
  for(int i = 0; i < qtd; i++) {
    printf("Digite o valor %d: ", i);
    scanf("%f", &valores[i]);
  }
}

// tambem funciona com valores[]
float calc_media(float *valores, int qtd) {
  
  float soma = 0.0;
 
  for(int i = 0; i < qtd; i++) {
    soma += valores[i];
  }
 
  return soma / qtd;
}

// passagem por valor
void imprimeElemento(float num) {
  printf("Elemento: %f\n", num);  
}
// passagem por referencia
void editaElemento(float *num) {
  *num = 1000000.0;
}

int main () {
  
  int tamanho;

  printf("Tamanho desejado: ");
  scanf("%i", &tamanho);
  
  float valores[tamanho], media;

  /* ----------- passagem de vetor completo ---------- */
  // passar somente o nome do vetor
  // alteracoes realizadas na funcao sao feitas direto na memoria,
  // entao tem efeito na main (assim como em passagem por referencia)
  preenche(valores, tamanho);
   
  media = calc_media(valores, tamanho);
   
  printf("\nMedia: %.2f\n", media);

  /* ----------- passagem de parte do vetor ---------- */
  // passar o nome do vetor e o indice desejado
  // passar por valor ou por referencia, dependendo do que é 
  // feito na funcao
  
  // passagem de parametro por valor
  imprimeElemento(valores[3]);

  // passagem de parametro por referencia
  editaElemento(&valores[3]);

  imprimeElemento(valores[3]);
   
  return 0;
}
