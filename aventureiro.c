#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

int main() {
    setlocale(LC_ALL,"Portuguese");
    srand(time(NULL));

    int carta1, carta2, tur1, tur2;
    float popu1, popu2, area1, area2, pib1, pib2, dp1, dp2, pc1, pc2, valor1, valor2;
    
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
    
    printf("###Jogo de Super trunfo###\n\n");
    printf("Digite qual atributo da carta você quer usar:\n");
    printf("1. Pontos turísticos\n");
    printf("2. População\n");
    printf("3. Área\n");
    printf("4. PIB\n");
    printf("5. Densidade populacional\n");
    printf("6. PIB per capita\n");
    scanf("%d", &carta1);
    
    carta2 = carta1;

    switch (carta1) {
        case 1 :
            printf("Pontos turísticos de São Paulo: %d\n", tur1);
            valor1 = tur1;
            break;
        case 2 :
            printf("População de São Paulo: %.0f\n", popu1);
            valor1 = popu1;
            break;
        case 3 :
            printf("Área de São Paulo: %.0f\n", area1);
            valor1 = area1;
            break;
        case 4 :
            printf("PIB de São Paulo: %.0f\n", pib1);
            valor1 = pib1;
            break;
        case 5 :
            printf("Densidade populacional de São Paulo: %.2f\n", dp1);
            valor1 = dp1;
            break;
        case 6 :
            printf("PIB per capita de São Paulo: %.2f\n", pc1);
            valor1 = pc1;
            break;
        default:
            printf("Essa opção não é válida!\n");
            return 1;
    }

    switch (carta2) {
        case 1 :
            printf("Pontos turísticos do Rio de janeiro: %d\n", tur2);
            valor2 = tur2;
            break;
        case 2 :
            printf("População do Rio de janeiro: %.0f\n", popu2);
            valor2 = popu2;
            break;
        case 3 :
            printf("Área do Rio de janeiro: %.0f\n", area2);
            valor2 = area2;
            break;
        case 4 :
            printf("PIB do Rio de janeiro: %.0f\n", pib2);
            valor2 = pib2;
            break;
        case 5 :
            printf("Densidade populacional do Rio de janeiro: %.2f\n", dp2);
            valor2 = dp2;
            break;
        case 6 :
            printf("PIB per capita do Rio de janeiro: %.2f\n", pc2);
            valor2 = pc2;
            break;
    }

    if (carta1 == 5) { 
        if (valor1 == valor2) {
            printf("O jogo empatou\n");
        } else if (valor1 < valor2) {
            printf("Você venceu, parabéns!!\n");
        } else {
            printf("Infelizmente você perdeu\n");
        }
    }
    if (carta1 == 6) { 
        if (valor1 == valor2) {
            printf("O jogo empatou\n");
        } else if (valor1 < valor2) {
            printf("Você venceu, parabéns!!\n");
        } else {
            printf("Infelizmente você perdeu\n");
    }
    } else {
        if (valor1 == valor2) {
            printf("O jogo empatou\n");
        } else if (valor1 > valor2) {
            printf("Você venceu, parabéns!!\n");
        } else {
            printf("Infelizmente você perdeu\n");
        }
    }

    return 0;
}