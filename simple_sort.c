#include<stdio.h>

int main(void) {
	int list_sort[3]; 
	int len = sizeof(list_sort) / sizeof(list_sort[0]);

	// read elements
	int i;
	for(i = 0; i < len; i++) {
		scanf("%1d", &list_sort[i]);			
	}

	int j;
	for(j = 2; j >= 0; j--) {
		printf("%d\n", list_sort[j]);			
	}

	printf("\n");

	int k;
	for(k = 0; k < len; k++) {
		printf("%d\n", list_sort[k]); 
	}
}
