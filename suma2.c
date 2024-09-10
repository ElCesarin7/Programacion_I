#include <stdio.h>
int main()


{
	int num1, num2, i, res=0;
	printf("Dame el primer numero: \n");
	scanf("%d",&num1);
	printf("Dame el segundo numero: \n");
	scanf("%d",&num2);
	for(i = 0; i < num2; i++){
	res += 1;
	}
	printf("Resultado de la suma es: %d",res);
	return 0;
}

