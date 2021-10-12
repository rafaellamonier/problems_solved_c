#include<stdio.h>
#include<math.h>

int main(){
	double a, b, c;
	scanf("%lf%lf%lf", &a, &b, &c);

	// não forma triangulo
	if (a >= (b + c)) {
		printf("NAO FORMA UM TRIANGULO\n");
	} else if ( pow(a, 2) == (pow(b, 2) + pow(c, 2)) ){
		printf("TRIANGULO RETANGULO\n");
	} else if ( pow(a, 2) > (pow(b, 2) + pow(c, 2)) ){
		printf("TRIANGULO OBTUSANGULO\n");
	}else if( pow(a, 2) < (pow(b, 2) + pow(c, 2)) ){
		printf("TRIANGULO ACUTANGULO\n");
	}
	if (a == b && b == c) {
		printf("TRIANGULO EQUILATERO");
	} else if (a == b || b == c) {
		printf("TRIANGULO ISOSCELES");
	}

	return 0;
}
