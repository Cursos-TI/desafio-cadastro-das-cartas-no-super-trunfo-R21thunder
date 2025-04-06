#include <stdio.h>
#include <string.h>

int main() {
    // Carta 1
    char estado1, codigo1[10], nome1[50];
    unsigned long int populacao1;
    float area1, pib1;
    int pontos1;
    float densidade1, pibPerCapita1, superPoder1;

    // Carta 2
    char estado2, codigo2[10], nome2[50];
    unsigned long int populacao2;
    float area2, pib2;
    int pontos2;
    float densidade2, pibPerCapita2, superPoder2;

    // Entrada Carta 1
    printf("CARTA 1:\n");
    printf("Digite a sigla do Estado (ex: SP): ");
    scanf(" %c", &estado1);
    getchar(); // limpa o buffer

    printf("Digite o Código da Carta: ");
    scanf("%s", codigo1);
    getchar(); // limpa o buffer

    printf("Digite o Nome completo da Cidade: ");
    fgets(nome1, sizeof(nome1), stdin);
    nome1[strcspn(nome1, "\n")] = '\0'; // remove o \n

    printf("Digite a População: ");
    scanf("%lu", &populacao1);

    printf("Digite a Área (km²): ");
    scanf("%f", &area1);

    printf("Digite o PIB (em bilhões de reais): ");
    scanf("%f", &pib1);

    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%d", &pontos1);
    getchar(); // << ESSA LINHA É ESSENCIAL

    // Entrada Carta 2
    printf("\nCARTA 2:\n");
    printf("Digite a sigla do Estado (ex: RJ): ");
    scanf(" %c", &estado2);
    getchar(); // limpa o buffer

    printf("Digite o Código da Carta: ");
    scanf("%s", codigo2);
    getchar(); // limpa o buffer

    printf("Digite o Nome completo da Cidade: ");
    fgets(nome2, sizeof(nome2), stdin);
    nome2[strcspn(nome2, "\n")] = '\0';

    printf("Digite a População: ");
    scanf("%lu", &populacao2);

    printf("Digite a Área (km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB (em bilhões de reais): ");
    scanf("%f", &pib2);

    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%d", &pontos2);
    getchar(); // << ESSENCIAL TAMBÉM

    // Cálculos
    densidade1 = populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000) / populacao1;

    densidade2 = populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000) / populacao2;

    superPoder1 = (float)populacao1 + area1 + (pib1 * 1000000000) + pontos1 + pibPerCapita1 + (1.0f / densidade1);
    superPoder2 = (float)populacao2 + area2 + (pib2 * 1000000000) + pontos2 + pibPerCapita2 + (1.0f / densidade2);
    
    // Comparação
    printf("\n🧠 COMPARAÇÃO DE CARTAS:\n");

    printf("População: Carta 1 venceu (%d)\n", populacao1 > populacao2);
    printf("Área: Carta 1 venceu (%d)\n", area1 > area2);
    printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", pontos1 > pontos2);
    printf("Densidade Populacional (menor vence): Carta 1 venceu (%d)\n", densidade1 < densidade2);
    printf("PIB per Capita: Carta 1 venceu (%d)\n", pibPerCapita1 > pibPerCapita2);
    printf("Super Poder: Carta 1 venceu (%d)\n", superPoder1 > superPoder2);

    return 0;
}
