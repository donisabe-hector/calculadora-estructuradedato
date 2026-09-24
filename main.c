#include <stdio.h>

int main() {
    int opcion;
    float num1, num2;
    float resultado;
    
    float *ptrResultado = NULL;

    do {
        printf("\n==SISTEMA CALCULADORA - ESTRUCTURA DE DATOS==\n");
        printf("1. Realizar Suma\n");
        printf("2. Realizar Resta\n");
        printf("3. Realizar Multiplicacion\n");
        printf("4. Realizar Division\n");
        printf("5. Ver ultimo valor almacenado en memoria\n");
        printf("6. Salir del programa\n");
        printf("Ingrese el numero de la opcion que desea: ");
        scanf("%d", &opcion);

        if (opcion >= 1 && opcion <= 4) {
            printf("Ingrese el primer valor: ");
            scanf("%f", &num1);
            printf("Ingrese el segundo valor: ");
            scanf("%f", &num2);
        }

        switch (opcion) {
            case 1:
                resultado = num1 + num2;
                ptrResultado = &resultado;
                printf("Resultado obtenido: %.2f\n", resultado);
                break;

            case 2:
                resultado = num1 - num2;
                ptrResultado = &resultado;
                printf("Resultado obtenido: %.2f\n", resultado);
                break;

            case 3:
                resultado = num1 * num2;
                ptrResultado = &resultado;
                printf("Resultado obtenido: %.2f\n", resultado);
                break;

            case 4:
                if (num2 != 0) {
                    resultado = num1 / num2;
                    ptrResultado = &resultado;
                    printf("Resultado obtenido: %.2f\n", resultado);
                } else {
                    printf("Atencion: No es posible dividir por cero.\n");
                }
                break;

            case 5:
                if (ptrResultado != NULL) {
                    printf("Ultimo dato guardado: %.2f\n", *ptrResultado);
                    printf("Ubicacion en memoria: %p\n", (void*)ptrResultado);
                } else {
                    printf("Sin datos previos en memoria.\n");
                }
                break;

            case 6:
                printf("Cerrando programa...\n");
                break;

            default:
                printf("Opcion invalida, por favor intente de nuevo.\n");
                break;
        }

    } while (opcion != 6);

    return 0;
}
