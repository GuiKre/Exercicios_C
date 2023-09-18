#include <stdio.h>

int main(){
	
	int num = 1001, cont = 0;

    while (cont < 5) {
        if (num % 11 == 5) {
            cont++;
            if (cont == 5) {
                printf("O quinto numero maior que 1000 cuja divisao por 11 tem resto 5 eh: %d\n", num);
                break;
            }
        }
        num++;
    }
	
	
	return 0;
}
