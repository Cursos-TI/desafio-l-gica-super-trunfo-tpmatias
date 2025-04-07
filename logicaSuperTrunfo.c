#include <stdio.h>

typedef struct {
    char nome[50];
    int populacao;
    float area, pib;
} Carta;

int main() {
    Carta c1, c2;

    printf("Carta 1:\n");
    printf("Nome: ");
    scanf("%s", c1.nome);
    printf("População: ");
    scanf("%d", &c1.populacao);
    printf("Área: ");
    scanf("%f", &c1.area);
    printf("PIB: ");
    scanf("%f", &c1.pib);

    printf("\nCarta 2:\n");
    printf("Nome: ");
    scanf("%s", c2.nome);
    printf("População: ");
    scanf("%d", &c2.populacao);
    printf("Área: ");
    scanf("%f", &c2.area);
    printf("PIB: ");
    scanf("%f", &c2.pib);

    int op;
    do {
        printf("\nMenu:\n1. População\n2. Área\n3. PIB\n4. Sair\n");
        printf("Escolha: ");
        scanf("%d", &op);

        if (op == 1) {
            if (c1.populacao > c2.populacao) printf("\n%s venceu!\n", c1.nome);
            else printf("\n%s venceu!\n", c2.nome);
        } else if (op == 2) {
            if (c1.area > c2.area) printf("\n%s venceu!\n", c1.nome);
            else printf("\n%s venceu!\n", c2.nome);
        } else if (op == 3) {
            if (c1.pib > c2.pib) printf("\n%s venceu!\n", c1.nome);
            else printf("\n%s venceu!\n", c2.nome);
        }
    } while (op != 4);

    return 0;
}

