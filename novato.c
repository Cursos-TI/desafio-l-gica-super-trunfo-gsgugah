#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{   setlocale(LC_ALL,"Portuguese");
    int tur1, tur2;
    float popu1, popu2, area1, area2, pib1, pib2, dp1, dp2, pc1, pc2;

    tur1 = 36;
    tur2 = 58;
    popu1 = 11045000;
    popu2 = 6211000;
    area1 = 1521;
    area2 = 1200;
    pib1 = 2719751;
    pib2 = 949301;
    dp1 = popu1 / area1;
    dp2 = popu2 / area2;
    pc1 = pib1 / popu1;
    pc2 = pib2 / popu2;

    printf("Carta1 - São Paulo (SP) : %.f\n", area1);
    printf("Carta2 - Rio de Janeiro (RJ) : %.f\n", area2);

    if (area1 > area2) {
        printf("Resultado: Carta 1 (São Paulo) venceu!\n");
    } else {
        printf("Resultado: Carta 2 (Rio de Janeiro) venceu!\n");
    }

    return 0;
}