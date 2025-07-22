#include <stdio.h>

int main() {
    // Definição das variáveis:
    char estado_1, estado_2;
    char codigo_1[5], codigo_2[5];
    char nome_1[20], nome_2[20];
    unsigned long int populacao_1, populacao_2;
    unsigned int pontos_turisticos_1, pontos_turisticos_2;
    double area_1, area_2;
    double pib_1, pib_2;
    double densidade_1, densidade_2, pib_per_capita_1, pib_per_capita_2;
    double super_poder_1, super_poder_2;

    // Cadastro da carta 1:
    printf("Digite o estado (ex: M): ");
    scanf(" %c", &estado_1);

    printf("Digite o codigo (ex: MG35): ");
    scanf("%s", &codigo_1);

    printf("Digite o nome da cidade: ");
    scanf("%s", &nome_1);

    printf("Digite a população: ");
    scanf("%lu", &populacao_1);

    printf("Digite a quantidade de pontos turisticos: ");
    scanf("%u", &pontos_turisticos_1);

    printf("Digite a area da cidade: ");
    scanf("%lf", &area_1);

    printf("Digite o PIB da cidade: ");
    scanf("%lf", &pib_1);

    densidade_1 = (double) populacao_1 / area_1;
    pib_per_capita_1 = (double) pib_1 / populacao_1;
    super_poder_1 = (double) populacao_1 + area_1 + pib_1 + pontos_turisticos_1 + pib_per_capita_1 + ((double) 1.0 / densidade_1);

    // Exibição dos dados da carta 1:
    printf("\n--- Dados da Cidade ---\n");
    printf("Estado: %c\n", estado_1);
    printf("Codigo: %s\n", codigo_1);
    printf("Nome da cidade: %s\n", nome_1);
    printf("Populacao: %lu\n", populacao_1);
    printf("Area: %.2lf\n", area_1);
    printf("PIB: %.2lf\n", pib_1);
    printf("Numero de pontos turisticos: %u\n", pontos_turisticos_1);
    printf("Densidade populacional: %.2lf hab/km²\n", densidade_1);
    printf("PIB per capita: %.2lf reais\n", pib_per_capita_1);
    printf("Super Poder: %.2lf\n\n", super_poder_1);

    // Cadastro da carta 2:
    printf("Digite o estado (ex: M): ");
    scanf(" %c", &estado_2);

    printf("Digite o codigo (ex: MG35): ");
    scanf("%s", &codigo_2);

    printf("Digite o nome da cidade: ");
    scanf("%s", &nome_2);

    printf("Digite a população: ");
    scanf("%lu", &populacao_2);

    printf("Digite a quantidade de pontos turisticos: ");
    scanf("%u", &pontos_turisticos_2);

    printf("Digite a area da cidade: ");
    scanf("%lf", &area_2);

    printf("Digite o PIB da cidade: ");
    scanf("%lf", &pib_2);

    densidade_2 = (double) populacao_2 / area_2;
    pib_per_capita_2 = (double) pib_2 / populacao_2;
    super_poder_2 = (double) populacao_2 + area_2 + pib_2 + pontos_turisticos_2 + pib_per_capita_2 + ((double) 1.0 / densidade_2);

    // Exibição dos dados da carta 1:
    printf("\n--- Dados da Cidade ---\n");
    printf("Estado: %c\n", estado_2);
    printf("Codigo: %s\n", codigo_2);
    printf("Nome da cidade: %s\n", nome_2);
    printf("Populacao: %lu\n", populacao_2);
    printf("Area: %.2lf\n", area_2);
    printf("PIB: %.2lf\n", pib_2);
    printf("Numero de pontos turisticos: %u\n", pontos_turisticos_2);
    printf("Densidade populacional: %.2lf hab/km²\n", densidade_2);
    printf("PIB per capita: %.2lf reais\n", pib_per_capita_2);
    printf("Super Poder: %.2lf\n\n", super_poder_2);

    int populacao_3 = (int) populacao_2 > populacao_1;
    int pontos_turisticos_3 = (int) pontos_turisticos_2 > pontos_turisticos_1;
    int area_3 = (int) area_2 > area_1;
    int pib_3 = (int) pib_2 > pib_1;
    int densidade_3 = (int) densidade_2 < densidade_1, pib_per_capita_3 = (int) pib_per_capita_2 > pib_per_capita_1;
    int super_poder_3 = (int) super_poder_2 > super_poder_1;

    printf("\n--- Comparação ---\n");
    printf("Populacao: Carta %d venceu (%d)\n", populacao_3 + 1, populacao_3);
    printf("Area: Carta %d venceu (%d)\n", area_3 + 1, area_3);
    printf("PIB: Carta %d venceu (%d)\n", pib_3 + 1, pib_3);
    printf("Numero de pontos turisticos: Carta %d venceu (%d)\n", pontos_turisticos_3 + 1, pontos_turisticos_3);
    printf("Densidade populacional: Carta %d venceu (%d)\n", densidade_3 + 1, densidade_3);
    printf("PIB per capita: Carta %d venceu (%d)\n", pib_per_capita_3 + 1, pib_per_capita_3);
    printf("Super Poder: Carta %d venceu (%d)\n", super_poder_3 + 1, super_poder_3);

    return 0;
}
