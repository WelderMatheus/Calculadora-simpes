#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main() {
    int opcao;
    float resultado ,num1, num2;

    printf("digite numero 1: \n");
    scanf("%f", &num1);
    printf("digite numero 2: \n");
    scanf("%f", &num2);

    printf("escolha uma opcao: \n 1 - somar   \n 2 - subtrair  \n 3 - dividir   \n 4 - multiplicar \n");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1: resultado = num1 + num2;
            printf("a soma e %2.f", resultado);
            break;

        case 2: resultado = num1 - num2;
            printf("a subtracao e %2.f", resultado);
            break;

        case 3: resultado = num1 / num2;
            printf("a divisao e %2.f", resultado);
            break;

        case 4: resultado = num1 * num2;
            printf("a multiplicacao e %2.f", resultado);
            break;

        default: printf("opcao invalida");
            break;
    }
    return 0;

    }

