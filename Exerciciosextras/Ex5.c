#include <stdio.h>

int main(){
	
	int i, sexo;
    double altura, maiorAltura = 0, menorAltura = 9999, somaAlturaMulheres = 0, somaAlturaPopulacao = 0;
    int totalMulheres = 0, totalHomens = 0;

    for (i = 0; i < 50; i++) {
        printf("Digite a altura (em metros) da pessoa %d: ", i + 1);
        scanf("%lf", &altura);

        printf("Digite o sexo (0 = masculino, 1 = feminino, 2 = nao declarado) da pessoa %d: ", i + 1);
        scanf("%d", &sexo);

        somaAlturaPopulacao += altura;

        if (altura > maiorAltura) {
            maiorAltura = altura;
        }

        if (altura < menorAltura) {
            menorAltura = altura;
        }

        if (sexo == 1) {
            somaAlturaMulheres += altura;
            totalMulheres++;
        } else if (sexo == 0) { 
            totalHomens++;
        }
    }

    double mediaAlturaMulheres = (totalMulheres > 0) ? somaAlturaMulheres / totalMulheres : 0;
    double mediaAlturaPopulacao = somaAlturaPopulacao / 50;
    double percentualHomens = (totalHomens / 50.0) * 100;

    printf("\nEstatisticas:\n");
    printf("Maior altura encontrada: %.2lf metros\n", maiorAltura);
    printf("Menor altura encontrada: %.2lf metros\n", menorAltura);
    printf("Media de altura das mulheres: %.2lf metros\n", mediaAlturaMulheres);
    printf("Media de altura da populacao: %.2lf metros\n", mediaAlturaPopulacao);
    printf("Percentual de homens na populacao: %.2lf%%\n", percentualHomens);

	return 0;
}
