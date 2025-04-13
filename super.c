#include <stdio.h>

int main() {
    // Variáveis da Carta 1
    char nome1[100];
    int populacao1;
    float area1, pib1;

    // Variáveis da Carta 2
    char nome2[100];
    int populacao2;
    float area2, pib2;

    // Entrada dos dados da Carta 1
    printf("Digite o nome da cidade da Carta 1:\n");
    scanf("%s", nome1);

    printf("Digite a população da Carta 1:\n");
    scanf("%d", &populacao1);

    printf("Digite a área da Carta 1:\n");
    scanf("%f", &area1);

    printf("Digite o PIB da Carta 1:\n");
    scanf("%f", &pib1);

    // Entrada dos dados da Carta 2
    printf("\nDigite o nome da cidade da Carta 2:\n");
    scanf("%s", nome2);

    printf("Digite a população da Carta 2:\n");
    scanf("%d", &populacao2);

    printf("Digite a área da Carta 2:\n");
    scanf("%f", &area2);

    printf("Digite o PIB da Carta 2:\n");
    scanf("%f", &pib2);

    // Exibir densidade e PIB per capita
    float densidade1 = populacao1 / area1;
    float densidade2 = populacao2 / area2;

    float pibPerCapita1 = pib1 / populacao1;
    float pibPerCapita2 = pib2 / populacao2;

    printf("\n--- Resultados ---\n");
    printf("Cidade 1 (%s):\n", nome1);
    printf("Densidade populacional: %.2f\n", densidade1);
    printf("PIB per capita: %.2f\n", pibPerCapita1);

    printf("\nCidade 2 (%s):\n", nome2);
    printf("Densidade populacional: %.2f\n", densidade2);
    printf("PIB per capita: %.2f\n", pibPerCapita2);

    // Comparação por População
    printf("\n--- Comparando pela População ---\n");
    if (populacao1 > populacao2) {
        printf("A cidade %s venceu! (População maior)\n", nome1);
    } else if (populacao2 > populacao1) {
        printf("A cidade %s venceu! (População maior)\n", nome2);
    } else {
        printf("Empate! Ambas as cidades têm a mesma população.\n");
    }

    return 0;
}
