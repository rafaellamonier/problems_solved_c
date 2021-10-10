#include<stdio.h>

int main(){
    int a,b,c;
    int temp;
    // int x, y, z, temp;
    int v[3];

    scanf("%d %d %d", &a, &b, &c);
    v[0] = a;
    v[1] = b;
    v[2] = c;
    
    // solução usando condicional
    /*
    if (x>y) {
        temp = x;
        x = y;
        y = temp;
    }else if (x>z) {
        temp = x;
        x = z;
        z = temp;
    }else if (y>z) {
        temp = y;
        y = z;
        z = temp;
    }
    */

    // solução usando for
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            if(v[i]<v[j]){
                temp = v[i];
                v[i] = v[j];
                v[j] = temp;
            }
        }
    }

    // printf("\n%d\n%d\n%d\n", x, y, z);
    printf("\n%d\n%d\n%d\n", v[0], v[1], v[2]);
    
    return 0;
}
