//Tipos de datos

#include<stdio.h>
int main(){
	
	char a = 'e'; //Tama�o = 1byte Rango: 0..255
	short b = -15; //tama�o= 2bytes Rango: -128...127
	int c = 1024;//tama�o= 2bytes Rango:  -32768...32767
	unsigned int d = 128; //tama�o =2bytes Rango: 0...65535
	long e = 123556; //tama�o = 4bytes
	float f = 15.678; //tama�o = 4bytes
	double m= 1231546.63945684; //tama�o = 4bytes
		
	printf("El elemento es: %.lf",m);
}
