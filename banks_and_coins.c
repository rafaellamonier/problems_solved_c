#include <stdio.h>

int main() {
    int notas100, notas50, notas20, notas10, notas5, notas2;
    int moedas1, moedas50, moedas25, moedas10, moedas05, moedas01;
    double n;
    
    scanf("%lf", &n);
    int notas = n;
    int moedas = (n - notas) * 100;

    if( (moedas * 1000) % 10 == 9 ){
        moedas++;
    }
    
    // process notas
    notas100 = notas / 100;
    notas = notas % 100;
    notas50 = notas / 50;
    notas = notas % 50;
    notas20 = notas / 20;
    notas = notas % 20;
    notas10 = notas / 10;
    notas = notas % 10;
    notas5 = notas / 5;
    notas = notas % 5;
    notas2 = notas / 2;
    notas = notas % 2;
    
    // process moedas
    moedas1 = notas / 1;
    notas = notas % 1;
    moedas50 = moedas / 50;
    moedas = moedas % 50;
    moedas25 = moedas / 25;
    moedas = moedas % 25;
    moedas10 = moedas / 10;
    moedas = moedas % 10;
    moedas05 = moedas / 5;
    moedas = moedas % 5;
    moedas01 = moedas / 1;
    
    printf("NOTAS:\n");

    printf("%d nota(s) de R$ 100.00\n", notas100);
    printf("%d nota(s) de R$ 50.00\n", notas50);
    printf("%d nota(s) de R$ 20.00\n", notas20);
    printf("%d nota(s) de R$ 10.00\n", notas10);
    printf("%d nota(s) de R$ 5.00\n", notas5);
    printf("%d nota(s) de R$ 2.00\n", notas2);
    
    printf("MOEDAS:\n");

    printf("%d moeda(s) de R$ 1.00\n", moedas1);
    printf("%d moeda(s) de R$ 0.50\n", moedas50);
    printf("%d moeda(s) de R$ 0.25\n", moedas25);
    printf("%d moeda(s) de R$ 0.10\n", moedas10);
    printf("%d moeda(s) de R$ 0.05\n", moedas05);
    printf("%d moeda(s) de R$ 0.01\n", moedas01);

    return 0;
}
