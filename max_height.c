#include <stdio.h>
#define altura_maxima 2.55

typedef struct {
	float peso;
	float altura;
} peso_altura;

int main(void) {
	peso_altura pessoa1;

	puts("Digite seu peso:");
	scanf("%f", &pessoa1.peso);

	puts("Digite sua altura:");
	scanf("%f", &pessoa1.altura);
	
	printf("peso: %.2f;\naltura: %.2f.\n", pessoa1.peso, pessoa1.altura);

	if (pessoa1.altura>altura_maxima) printf("Altura acima da máxima!\n");
	else printf("Altura ainda não ultrapassou a máxima!\n");
	
}
