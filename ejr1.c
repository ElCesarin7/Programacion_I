#include <stdio.h>

int main() {
	
	//Declaras variables
	
    int numeros[40];
    int i, ceros = 0, negativos = 0, positivos = 0, suma_positivos = 0;

    /* Pedimos al usuario que ingrese los 40 números*/

    printf("Llenemos el arreglo con 40 digitos");
	

    for (i = 0; i < 40; i++){
    	
    	printf("Ingrese el número %d:\n", i+1);
    	
    	scanf("%d", &numeros[i]);
    	
    }

 	for (i = 0; i < 40; i++){
    	
    		if ((numeros[i] >= 'A' && numeros[i] <= 'Z') || (numeros[i] >= 'a' && numeros[i] <= 'z')){

			printf("Caracter incorrecto, ingrese solo números");
			break;
			
			}
			else {
			 for (i = 0; i < 40; i++) {
		        if (numeros[i] == 0) {
		            ceros++;
		        } else if (numeros[i] < 0) {
		            negativos++;
		        } else {
		            positivos++;
		            suma_positivos += numeros[i];
		        }
		    }
		
		    /* Imprimimos los resultados*/
		    printf("\nResultados:\n");
		    printf("Cantidad de ceros: %d\n", ceros);
		    printf("Cantidad de negativos: %d\n", negativos);
		    printf("Cantidad de positivos: %d\n", positivos);
		    printf("Suma de los positivos: %d\n", suma_positivos);
					}
    	
    }
	


    /*Contamos los ceros, negativos y positivos, y sumamos los positivos*/
   

    return 0;
}
