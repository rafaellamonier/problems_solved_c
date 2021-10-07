#include <stdio.h>

int main() {
	int numbers_of_days, years = 0, months = 0, days = 0, i;

	printf("Digite um número:\n");
	scanf("%d", &numbers_of_days);

	// process datas with loop for
	// years = 365 months = 30 days = 1
	for(i = 0; numbers_of_days > 0; i++) {
		if(numbers_of_days >= 365) {
			years++;
			numbers_of_days -= 365;
		}else if(numbers_of_days >= 30){
			months++;
			numbers_of_days -= 30;
		}else if(numbers_of_days >= 1){
			days++;
			numbers_of_days -= 1;
		}
	}

	printf("%d ano(s)\n", years);
	printf("%d mes(es)\n", months);
	printf("%d dia(s)\n", days);

	
	return 0;
}	
