#include <stdio.h>

int main() {
    int numeros[40];
    int i, ceros = 0, negativos = 0, positivos = 0, suma_positivos = 0;

    // Pedimos al usuario que ingrese los 40 números
    printf("Ingrese 40 números enteros:\n");
    for (i = 0; i < 40; i++) {
        scanf("%d", &numeros[i]);
    }

    // Contamos los ceros, negativos y positivos, y sumamos los positivos
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

    // Imprimimos los resultados
    printf("\nResultados:\n");
    printf("Cantidad de ceros: %d\n", ceros);
    printf("Cantidad de negativos: %d\n", negativos);
    printf("Cantidad de positivos: %d\n", positivos);
    printf("Suma de los positivos: %d\n", suma_positivos);

    return 0;
}
