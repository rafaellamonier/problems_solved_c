#include <stdio.h>

int main() {
	int code_product, quanty_product;
	float total;

	scanf("%d", &code_product);
	scanf("%d", &quanty_product);

	switch(code_product) {
		case 1:	
			total = quanty_product * 4.0;
			printf("Total: R$ %.2f \n", total);
			break;
		case 2:
			total = quanty_product * 4.50;
			printf("Total: R$ %.2f \n", total);
			break;
		case 3:
			total = quanty_product * 5.00;
			printf("Total: R$ %.2f \n", total);
			break;
		case 4:
			total = quanty_product * 2.00;
			printf("Total: R$ %.2f \n", total);
			break;
		case 5:
			total = quanty_product * 1.50;
			printf("Total: R$ %.2f \n", total);
			break;
	}

	return 0;
}
