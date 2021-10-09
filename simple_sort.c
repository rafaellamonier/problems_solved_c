#include<stdio.h>

int main(){
    int a,b,c,aux;
    int v[3];
    
    scanf("%d %d %d", &v[0], &v[1], &v[2]);
   
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            if(v[i] < v[j]){
                aux = v[j];
                v[j] = v[i];
                v[i] = aux;
            }
        }
    }
    
    printf("%d\n%d\n%d\n", v[0], v[1], v[2]);
    printf("\n%d\n%d\n%d\n", a, b, c);
    return 0;
}
