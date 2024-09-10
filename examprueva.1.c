#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define MAX_DESECHOS 10
#define MAX_CADENA 50

// Estructura para almacenar desechos y su tipo correcto
typedef struct {
    char nombre[MAX_CADENA];
    char tipo[MAX_CADENA];
} Desecho;

// Funci�n para seleccionar un desecho aleatorio
Desecho seleccionarDesecho(Desecho desechos[], int cantidad) {
    int indice = rand() % cantidad;
    return desechos[indice];
}

// Funci�n para jugar un nivel
int jugarNivel(Desecho desechos[], int cantidad, int vidas, int puntos_correcta, int vidas_incorrecta, int objetivo) {
    int puntos = 0;
    int correctas = 0;
    char respuesta[MAX_CADENA];
    
    for (int i = 0; i < MAX_DESECHOS && vidas > 0; i++) {
        Desecho desecho = seleccionarDesecho(desechos, cantidad);
        printf("Clasifica el desecho: %s\n", desecho.nombre);
        printf("Introduce el tipo de contenedor (pl�stico, papel, org�nico, etc.): ");
        scanf("%s", respuesta);
        
        if (strcmp(respuesta, desecho.tipo) == 0) {
            puntos += puntos_correcta;
            correctas++;
            printf("�Correcto! +%d puntos.\n", puntos_correcta);
        } else {
            vidas -= vidas_incorrecta;
            printf("Incorrecto. -%d vida(s). Te quedan %d vidas.\n", vidas_incorrecta, vidas);
        }

        if (vidas <= 0) {
            printf("Has perdido todas tus vidas.\n");
            break;
        }
    }

    // Evaluaci�n del objetivo del nivel
    if (correctas >= objetivo) {
        printf("�Has pasado el nivel! Clasificaste %d desechos correctamente.\n", correctas);
        return 1; // Pas� el nivel
    } else {
        printf("No alcanzaste el objetivo. Clasificaste %d desechos correctamente.\n", correctas);
        return 0; // No pas� el nivel
    }
}

int main() {
    srand(time(NULL));

    // Nivel 1
    Desecho desechos_nivel_1[] = {
        {"Botella de pl�stico", "pl�stico"},
        {"Peri�dico", "papel"},
        {"C�scara de pl�tano", "org�nico"}
    };

    // Nivel 2
    Desecho desechos_nivel_2[] = {
        {"Botella de vidrio", "vidrio"},
        {"Tel�fono m�vil", "electr�nico"},
        {"Bater�a", "bater�as"},
        {"Caja de cart�n", "cart�n"}
    };

    // Nivel 3
    Desecho desechos_nivel_3[] = {
        {"Ordenador", "residuos electr�nicos"},
        {"�cido", "qu�micos peligrosos"},
        {"Panel solar", "reciclaje especializado"}
    };

    int vidas = 5;

    printf("�Bienvenido al juego de clasificaci�n de desechos!\n");

    // Jugar Nivel 1
    if (!jugarNivel(desechos_nivel_1, 3, vidas, 10, 1, 7)) {
        printf("Fin del juego.\n");
        return 0;
    }

    // Jugar Nivel 2
    if (!jugarNivel(desechos_nivel_2, 4, vidas, 15, 1, 8)) {
        printf("Fin del juego.\n");
        return 0;
    }

    // Jugar Nivel 3
    if (!jugarNivel(desechos_nivel_3, 3, vidas, 20, 2, 9)) {
        printf("Fin del juego.\n");
        return 0;
    }

    printf("�Felicidades! Completaste todos los niveles.\n");
    return 0;
}

