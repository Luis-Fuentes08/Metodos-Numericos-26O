#include <stdio.h>
#include <stdlib.h>

void limpiarBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

int main() {
    int opcion;
    double a, b, resultado;

    do {
      
        printf("1. Suma\n");
        printf("2. Resta\n");
        printf("3. Multiplicación\n");
        printf("4. División\n");
        printf("5. Salir\n");
        printf("Seleccione una opción (1-5): ");

        // Validación de entrada no numérica en la opción del menú
        if (scanf("%d", &opcion) != 1) {
            printf("\n[ERROR] Entrada inválida. Por favor, ingrese un número del 1 al 5.\n");
            limpiarBuffer();
            continue;
        }

        if (opcion == 5) {
            printf("\nSaliendo de la calculadora. ¡Hasta luego!\n");
            break;
        }

        if (opcion < 1 || opcion > 5) {
            printf("\n[ERROR] Opción no válida. Elija un número entre 1 y 5.\n");
            continue;
        }

        // Lectura del primer número con validación
        printf("Ingrese el primer número: ");
        if (scanf("%lf", &a) != 1) {
            printf("\n[ERROR] Entrada no válida. Debe ingresar un valor numérico.\n");
            limpiarBuffer();
            continue;
        }

        // Lectura del segundo número con validación
        printf("Ingrese el segundo número: ");
        if (scanf("%lf", &b) != 1) {
            printf("\n[ERROR] Entrada no válida. Debe ingresar un valor numérico.\n");
            limpiarBuffer();
            continue;
        }

        // Operaciones
        switch (opcion) {
            case 1:
                resultado = a + b;
                printf("\nEl resultado: %.17f + %.17f = %.17f\n", a, b, resultado);
                break;
            case 2:
                resultado = a - b;
                printf("\nEl resultado es: %.17f - %.17f = %.17f\n", a, b, resultado);
                break;
            case 3:
                resultado = a * b;
                printf("\nEl resultado: %.17f * %.17f = %.17f\n", a, b, resultado);
                break;
            case 4:
                // Validación de división entre cero
                if (b == 0.0) {
                    printf("\n[ERROR] No se puede dividir entre cero. Intente de nuevo.\n");
                } else {
                    resultado = a / b;
                    printf("\nEl resultado es: %.17f / %.17f = %.17f\n", a, b, resultado);
                }
                break;
        }

    } while (opcion != 5);

    return 0;
}