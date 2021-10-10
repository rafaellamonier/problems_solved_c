#include <stdio.h>

int main() {
	double n1, n2, n3, n4, exame, nota_final;
	int p1 = 2, p2 = 3, p3 = 4, p4 = 1, soma;
	soma = (p1 + p2 + p3 + p4);

	scanf("%lf %lf %lf %lf", &n1, &n2, &n3, &n4);
	
	double media = (n1*p1 + n2*p2 + n3*p3 + n4*p4)/soma;

	printf("Media: %.1lf \n", media);

	if(media >= 7){
		printf("Aluno aprovado.\n");
	}else if(media <= 5){
		printf("Aluno reprovado.\n");
	}else if(media > 5 && media < 6.9){
		printf("Aluno em exame\n");
		scanf("%lf", &exame);
		printf("Nota do exame: \n%.1lf", exame);
		nota_final = (media + exame) / 2;
		if(nota_final >= 5){
			printf("Aluno aprovado.\n");
		}else{
			printf("Aluno reprovado.\n");
		}
		printf("Final de media: %.1lf\n", nota_final);
	}



	return 0;
}

