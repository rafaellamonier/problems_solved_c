#include<stdio.h>
#include<math.h>

int main() {
	int inteiro;

	printf("Digite um número inteiro: \n");
	scanf("%d", &inteiro);

	if (inteiro%5 == 0 && inteiro%3 == 0) {
		printf("O número %d é divisível por 5 e por 3 ao mesmo tempo!\n", inteiro);
	}else{
		printf("O número %d não é divisível por 5 e 3 ao mesmo tempo!\n", inteiro);
	}

	return 0;
}
