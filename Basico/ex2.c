#include <stdio.h>

#define PI 3.14
int main() {
	
	float volume, raio, altura;
	
	printf("Digite o raio da lata: ");
	scanf("%f", &raio);
	
	printf("Digite a altura da lata: ");
	scanf("%f", &altura);
	
	volume = (PI * (raio * raio ))* altura;
	
	printf("O volume da lata eh: %f", volume);
	
	return 0;
}
