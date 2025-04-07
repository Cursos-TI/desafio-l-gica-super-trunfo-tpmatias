#include <stdio.h>

typedef struct {
    char nome[50];
    int populacao;
    float area, pib;
    
} Carta;

int main() {
    Carta carta1, carta2;

    printf("Carta 1:\n");
    printf("Nome: ");
    scanf("%s", carta1.nome);
    printf("População: ");
    scanf("%d", &carta1.populacao);
    printf("Área: ");
    scanf("%f", &carta1.area);
    printf("PIB: ");
    scanf("%f", &carta1.pib);

    printf("\nCarta 2:\n");
    printf("Nome: ");
    scanf("%s", carta2.nome);
    printf("População: ");
    scanf("%d", &carta2.populacao);
    printf("Área: ");
    scanf("%f", &carta2.area);
    printf("PIB: ");
    scanf("%f", &carta2.pib);

    int atributo = 1; // 1 para população, 2 para área, 3 para PIB
    if (atributo == 1) {
        if (carta1.populacao > carta2.populacao) {
            printf("\nCarta 1 (%s) venceu!\n", carta1.nome);
        } else {
            printf("\nCarta 2 (%s) venceu!\n", carta2.nome);
        }
    } else if (atributo == 2) {
        if (carta1.area > carta2.area) {
            printf("\nCarta 1 (%s) venceu!\n", carta1.nome);
        } else {
            printf("\nCarta 2 (%s) venceu!\n", carta2.nome);
        }
    } else if (atributo == 3) {
        if (carta1.pib > carta2.pib) {
            printf("\nCarta 1 (%s) venceu!\n", carta1.nome);
        } else {
            printf("\nCarta 2 (%s) venceu!\n", carta2.nome);
        }
    }

    return 0;
}

