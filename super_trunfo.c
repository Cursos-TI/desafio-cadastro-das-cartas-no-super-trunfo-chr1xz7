#include <stdio.h>

int main() {
    // Dados fixos da Carta 1
    char estado1 = 'A'; // Exemplo: Estado A
    char codigo1[] = "A01"; // Código A01
    char cidade1[] = "São Paulo"; // Nome da cidade
    int populacao1 = 12325000; // População (12.33 milhões)
    float area1 = 1521.11; // Área em km²
    float pib1 = 699.28; // PIB em bilhões
    int pontos1 = 50; // Pontos turísticos

    // Dados fixos da Carta 2
    char estado2 = 'B'; // Exemplo: Estado B
    char codigo2[] = "B02"; // Código B02
    char cidade2[] = "Rio de Janeiro"; // Nome da cidade
    int populacao2 = 6748000; // População (6.748 milhões)
    float area2 = 1200.25; // Área em km²
    float pib2 = 300.50; // PIB em bilhões
    int pontos2 = 30; // Pontos turísticos

    // Exibição dos dados da primeira carta
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos1);

    // Exibição dos dados da segunda carta
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos2);

    return 0;
}