#include <stdio.h>

int main() {
    // Variáveis para armazenar os dados das duas cartas (RS e SC)
    int populacao1, populacao2;     // População dos estados
    float area1, area2;             // Área dos estados
    float pib1, pib2;               // PIB dos estados
    int pontos_turisticos1, pontos_turisticos2; // Pontos turísticos dos estados

    // Cadastro da primeira carta (Rio Grande do Sul)
    printf("Primeira carta - Rio Grande do Sul:\n");

    // Atribuindo dados do Rio Grande do Sul
    populacao1 = 11377239;     // População do Rio Grande do Sul
    area1 = 281748.5;         // Área do Rio Grande do Sul em km²
    pib1 = 620.6;             // PIB do Rio Grande do Sul em bilhões de reais
    pontos_turisticos1 = 15;  // Pontos turísticos no Rio Grande do Sul

    // Cadastro da segunda carta (Santa Catarina)
    printf("Segunda carta - Santa Catarina:\n");

    // Atribuindo dados de Santa Catarina
    populacao2 = 7338473;      // População de Santa Catarina
    area2 = 95346.2;          // Área de Santa Catarina em km²
    pib2 = 450.5;             // PIB de Santa Catarina em bilhões de reais
    pontos_turisticos2 = 20;  // Pontos turísticos em Santa Catarina

    // Exibição dos dados cadastrados
    printf("\nDados cadastrados:\n");

    // Exibe os dados da carta do Rio Grande do Sul
    printf("\nPrimeira carta (Rio Grande do Sul):\n");
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: R$ %.2f bilhões\n", pib1);
    printf("Número de pontos turísticos: %d\n", pontos_turisticos1);

    // Exibe os dados da carta de Santa Catarina
    printf("\nSegunda carta (Santa Catarina):\n");
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: R$ %.2f bilhões\n", pib2);
    printf("Número de pontos turísticos: %d\n", pontos_turisticos2);

    return 0; // Fim do programa
}
