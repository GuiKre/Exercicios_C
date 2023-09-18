#include <stdio.h>

int main(){
	
	int N, i, d = 1;
    double H = 0.0;

    printf("Digite um valor inteiro N: ");
    scanf("%d", &N);

    if (N <= 0) {
        printf("O valor de N deve ser um inteiro positivo.\n");
        return 1;
    }
	printf("H=1");
    for (i = 1; i <= N; i++) {
        H += 1.0 / i;
        printf("+1/%d", d);
        d++;
    }

    printf("\nO valor de H eh: %.2lf\n", H);
	
	return 0;
}
