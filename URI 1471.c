#include <stdio.h>

#define VOLUNTARIOS 10001

int main (void) {
    int foram, voltaram, retornaram[VOLUNTARIOS], i, mergulhadorQueVoltou;

    for (i = 0; i < VOLUNTARIOS; i++) {
        retornaram[i] = 0;
    }

    while (scanf("%d %d", &foram, &voltaram) == 2) {
        if (foram == voltaram) {
            // clear
            for (i = 1; i <= voltaram; i++) {
                scanf("%d", &mergulhadorQueVoltou);
            }

            printf("*");
        }
        else {
            for (i = 1; i <= voltaram; i++) {
                scanf("%d", &mergulhadorQueVoltou);

                // set
                retornaram[mergulhadorQueVoltou] = 1;
            }

            for (i = 1; i <= foram; i++) {
                if (!retornaram[i]) {
                    printf("%d ", i);
                }

                // reset
                retornaram[i] = 0;
            }
        }

        printf("\n");
    }

    return 0;
}