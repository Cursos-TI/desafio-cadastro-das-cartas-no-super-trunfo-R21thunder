#include <stdio.h>  // Biblioteca padrão para entrada e saída de dados

int main() {
    // Declaração de variáveis para armazenar os dados das cartas
    char codigo1[4], codigo2[4];  // Códigos das cidades (ex: A01, B02)
    int populacao1, populacao2, pontos1, pontos2;  // População e pontos turísticos
    float area1, area2, pib1, pib2;  // Área e PIB

    // Cadastro da primeira carta
    printf("Cadastro da primeira carta:\n");  // Exibe mensagem para o usuário iniciar o cadastro
    printf("Código da cidade: ");  // Pede o código da cidade
    scanf("%s", codigo1);  // Lê o código da primeira carta e armazena na variável
    printf("População: ");  // Pede a população da cidade
    scanf("%d", &populacao1);  // Lê a população e armazena na variável
    printf("Área: ");  // Pede a área da cidade
    scanf("%f", &area1);  // Lê a área e armazena na variável
    printf("PIB: ");  // Pede o PIB da cidade
    scanf("%f", &pib1);  // Lê o PIB e armazena na variável
    printf("Pontos turísticos: ");  // Pede o número de pontos turísticos
    scanf("%d", &pontos1);  // Lê a quantidade de pontos turísticos e armazena na variável

    // Cadastro da segunda carta
    printf("\nCadastro da segunda carta:\n");  // Inicia o cadastro da segunda carta
    printf("Código da cidade: ");  // Pede o código da segunda cidade
    scanf("%s", codigo2);  // Lê o código da segunda carta
    printf("População: ");  // Pede a população
    scanf("%d", &populacao2);  // Lê a população da segunda carta
    printf("Área: ");  // Pede a área
    scanf("%f", &area2);  // Lê a área da segunda carta
    printf("PIB: ");  // Pede o PIB
    scanf("%f", &pib2);  // Lê o PIB da segunda carta
    printf("Pontos turísticos: ");  // Pede o número de pontos turísticos
    scanf("%d", &pontos2);  // Lê os pontos turísticos da segunda carta

    // Exibição dos dados da primeira carta
    printf("\n--- Dados da Primeira Carta ---\n");  // Título para organizar a exibição
    printf("Código: %s\n", codigo1);  // Mostra o código da cidade
    printf("População: %d\n", populacao1);  // Mostra a população
    printf("Área: %.2f\n", area1);  // Mostra a área com duas casas decimais
    printf("PIB: %.2f\n", pib1);  // Mostra o PIB com duas casas decimais
    printf("Pontos turísticos: %d\n", pontos1);  // Mostra os pontos turísticos

    // Exibição dos dados da segunda carta
    printf("\n--- Dados da Segunda Carta ---\n");  // Título para organizar a exibição
    printf("Código: %s\n", codigo2);  // Mostra o código da cidade
    printf("População: %d\n", populacao2);  // Mostra a população
    printf("Área: %.2f\n", area2);  // Mostra a área com duas casas decimais
    printf("PIB: %.2f\n", pib2);  // Mostra o PIB com duas casas decimais
    printf("Pontos turísticos: %d\n", pontos2);  // Mostra os pontos turísticos

    return 0;  // Fim do programa
}
