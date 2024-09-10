//Directivas del procesador y Variables

#include<stdio.h> //Libreria

#define PI 3.1416 //Macro

int Y = 5; // Variable global 

int main(){
	int x = 10;//Variable local
	
	float suma = 0;
	
	suma = PI + x;
	printf("La suma es: %.4f",suma);
	
	
	return 0;
}
