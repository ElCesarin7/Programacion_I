#include <stdio.h>

int main() {
    int numeros[40];
    int i, ceros = 0, negativos = 0, positivos = 0, suma_positivos = 0;
    int resultado_scanf;
    char buffer[100]; // Buffer para leer l�neas de entrada y verificar caracteres no num�ricos

    /* Pedimos al usuario que ingrese los 40 n�meros */
    printf("Ingrese 40 numeros enteros:\n");
    for (i = 0; i < 40; i++) {
        while (1) {
            printf("Ingrese el numero %d: ", i + 1);
            fgets(buffer, sizeof(buffer), stdin); // Leer una l�nea de entrada

            // Intentar leer el n�mero entero de la entrada
            resultado_scanf = sscanf(buffer, "%d", &numeros[i]);

            // Verificar si se leyeron correctamente y si no hay caracteres restantes
            if (resultado_scanf == 1 && buffer[strcspn(buffer, "\n")] == '\0') {
                break;  // Salir del bucle si la entrada es v�lida
            } else {
                printf("Entrada inv�lida. Por favor, ingrese un n�mero entero.\n");
            }
        }
    }

    /* Contamos los ceros, negativos y positivos, y sumamos los positivos */
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

    /* Imprimimos los resultados */
    printf("\nResultados:\n");
    printf("Cantidad de ceros: %d\n", ceros);
    printf("Cantidad de negativos: %d\n", negativos);
    printf("Cantidad de positivos: %d\n", positivos);
    printf("Suma de los positivos: %d\n", suma_positivos);

    return 0;
}

