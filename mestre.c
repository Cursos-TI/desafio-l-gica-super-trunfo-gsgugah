#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

int main() {
    setlocale(LC_ALL,"Portuguese");

    int escolha1, escolha2, escop1, escop2, tur1, tur2;
    float popu1, popu2, area1, area2, pib1, pib2, dp1, dp2, pc1, pc2, valor1, valor2, valor3, valor4, escot1, escot2;

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
    printf("Digite 2 atributos diferentes da sua carta para você usar contra o seu oponente:\n\n");
    printf("!Carta São Paulo!\n");
    printf("1. Pontos turísticos = 36\n");
    printf("2. População = 11045000\n");
    printf("3. Área = 1521\n");
    printf("4. PIB = 2719751\n");
    printf("5. Densidade populacional = 7261,67\n");
    printf("6. PIB per capita = 0,25\n");
    scanf("%d", &escolha1);

    escop1 = escolha1;

    switch (escolha1) {
        case 1:
            valor1 = tur1;
            break;
        case 2:
            valor1 = popu1;
            break;
        case 3:
            valor1 = area1;
            break;
        case 4:
            valor1 = pib1;
            break;
        case 5:
            valor1 = dp1;
            break;
        case 6:
            valor1 = pc1;
            break;
        default:
            printf("Essa opção não é válida!\n");
            return 1;
    }

    printf("Agora digite o segundo valor: \n");
    printf("1. Pontos turísticos = 36\n");
    printf("2. População = 11045000\n");
    printf("3. Área = 1521\n");
    printf("4. PIB = 2719751\n");
    printf("5. Densidade populacional = 7261,67\n");
    printf("6. PIB per capita = 0,25\n");
    scanf("%d", &escolha2);

    if (escolha1 == escolha2) {
        printf("O valor não pode ser igual!!\n");
        return 0;
    }

    escop2 = escolha2;

    switch (escolha2) {
        case 1:
            valor2 = tur1;
            break;
        case 2:
            valor2 = popu1;
            break;
        case 3:
            valor2 = area1;
            break;
        case 4:
            valor2 = pib1;
            break;
        case 5:
            valor2 = dp1;
            break;
        case 6:
            valor2 = pc1;
            break;
        default:
            printf("Essa opção não é válida!\n");
            return 1;
    }

    switch (escop1) {
        case 1:
            valor3 = tur2;
            break;
        case 2:
            valor3 = popu2;
            break;
        case 3:
            valor3 = area2;
            break;
        case 4:
            valor3 = pib2;
            break;
        case 5:
            valor3 = dp2;
            break;
        case 6:
            valor3 = pc2;
            break;
    }

    switch (escop2) {
        case 1:
            valor4 = tur2;
            break;
        case 2:
            valor4 = popu2;
            break;
        case 3:
            valor4 = area2;
            break;
        case 4:
            valor4 = pib2;
            break;
        case 5:
            valor4 = dp2;
            break;
        case 6:
            valor4 = pc2;
            break;
    }

    escot1 = valor1 + valor2;
    printf("A soma dos seus atributos é de: %.f\n", escot1);

    escot2 = valor3 + valor4;
    printf("A soma dos atributos do oponente é de: %.f\n", escot2);

    if (escolha1 == 5 || escolha2 == 5 || escolha1 == 6 || escolha2 == 6) {
        if (escot1 == escot2) {
            printf("O jogo empatou!\n");
        } else if (escot1 < escot2) {
            printf("Você venceu!\n");
        } else {
            printf("Você perdeu!\n");
        }
    } else {
        if (escot1 == escot2) {
            printf("O jogo empatou\n");
        } else if (escot1 > escot2) {
            printf("Você venceu, parabéns!!\n");
        } else {
            printf("Infelizmente você perdeu\n");
        }
    }

    return 0;
}