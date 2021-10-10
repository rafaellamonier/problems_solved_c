#include<stdio.h>

int main() {
	int a, b, c, d;
	int soma;

	scanf("%d %d %d %d", &a, &b, &c, &d);

	if(a>b && a>c && a>d){
		soma = b+c+d;
		printf("A soma entre os tres menores números é %d\n", soma);
	}else if(b>a && b>c && b>d){
		soma = a+c+d;
		printf("A soma entre os tres menores números é %d\n", soma);
	}else if(c>a && c>b && c>d){
		soma = a+b+d; 
		printf("A soma entre os tres menores números é %d\n", soma);
	}else if(d>a && d>b && d>c){
		soma = a+b+c;  
		printf("A soma entre os tres menores números é %d\n", soma);
	}

	// solução mais légivel
	int numero_um, numero_dois, numero_tres, numero_quatro, soma_solucao_dois;

	printf("Digite 4 números: \n");
	scanf("%d %d %d %d", &numero_um, &numero_dois, &numero_tres, &numero_quatro);
	
	if(numero_um>numero_dois && numero_um>numero_tres && numero_um>numero_quatro){
		soma_solucao_dois = numero_dois+numero_tres+numero_quatro;
		printf("A soma entre os tres menores números é %d\n", soma_solucao_dois);
	}else if(numero_dois>numero_um && numero_dois>numero_tres && numero_dois>numero_quatro){
		soma_solucao_dois = numero_um+numero_tres+numero_quatro;
		printf("A soma entre os tres menores números é %d\n", soma_solucao_dois);
	}else if(numero_tres>numero_um && numero_tres>numero_dois && numero_tres>numero_quatro){
		soma_solucao_dois = numero_um+numero_dois+numero_quatro; 
		printf("A soma entre os tres menores números é %d\n", soma_solucao_dois);
	}else if(numero_quatro>numero_um  && numero_quatro>numero_dois && numero_quatro>numero_tres){
		soma_solucao_dois = numero_um+numero_dois+numero_tres;  
		printf("A soma entre os tres menores números é %d\n", soma_solucao_dois);
	}
	
	return 0;
}
