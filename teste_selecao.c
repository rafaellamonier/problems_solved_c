#include <stdio.h>

int main() {
	int a, b, c, d;

	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	scanf("%d", &d);

	if( b > c && 
		d > a && 
		(c + d) > (a + b) &&
		a > 0 &&
		b > 0 &&
		c > 0 &&
		d > 0){

		printf("Valores aceitos\n");
	}else{
		printf("Valores não aceitos\n");
	}

	return 0;
}

