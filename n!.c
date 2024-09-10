/*Hacer un programa que calculeel factorial de un numero n! = n*n-1*n-2*...*1*/
/*For*/
#include<stdio.h>
int main(){
	double res=1;
	int n, con;
	printf("Dame el valor de n\n");
	scanf("%d",&n);
	for(con=n; con>=1; con--){
		res=res *con;
	}
	printf("El factorial de %d es %.0lf",n,res);
	return 0;	
}


