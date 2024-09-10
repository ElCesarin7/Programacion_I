#include <stdio.h>

int main(){
    int n,n1,n2,ite;

    printf("Dame el primer numero: \n");
    scanf("%d",&n1);
    printf("Dame el segundo numero: \n");
    scanf("%d",&n2);

    ite = 0;

    for(n1; n1< n2; n1++){
        n1++;
        ite++;
        n = n + n1;

        printf("iteracion %d:\n El numero es: %d \n\n", &ite, &n);
    }



    return 0;
}

