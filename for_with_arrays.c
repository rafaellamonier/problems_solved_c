#include<stdio.h>

int main(void) {
	int i[3];
	i[0] = 1;
	i[1] = 2;
	i[2] = 3;	

	int j[5];
	int len = sizeof(j) / sizeof(j[0]);
	int count;

	for(count = 0; count < len; count++) {
		scanf("%d", &j[count]);
	}

	int count2;
	for(count2 = 0; count2 < len; count2++) {
		printf("Passada: %dº do for externo.\n\n", count2);
		printf("%d, ", j[count2]);
		for(int count3 = 0; count3 < 3; count3++) { 
			printf("Passada: %dº do for interno.\n\n", count3);
			printf("%d, ", 1);
		}
	}
}
