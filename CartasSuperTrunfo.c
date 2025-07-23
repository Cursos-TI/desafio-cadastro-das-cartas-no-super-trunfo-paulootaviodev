#include <stdio.h>
#include <string.h>

int main() {
    // Definição das variáveis:
    char estado_1, estado_2;
    char codigo_1[5], codigo_2[5];
    char nome_1[32], nome_2[32];
    unsigned long int populacao_1, populacao_2;
    unsigned int pontos_turisticos_1, pontos_turisticos_2;
    double area_1, area_2;
    double pib_1, pib_2;
    float densidade_1, densidade_2, pib_per_capita_1, pib_per_capita_2;
    double super_poder_1, super_poder_2;

    // Cadastro da carta 1:
    printf("Digite o estado (ex: M): ");
    scanf(" %c", &estado_1);

    printf("Digite o codigo (ex: MG35): ");
    scanf("%s", codigo_1);

    // Leitura do nome da cidade (com espaços)
    printf("Digite o nome da cidade: ");
    while (getchar() != '\n');
    fgets(nome_1, sizeof(nome_1), stdin);
    nome_1[strcspn(nome_1, "\n")] = '\0';  // Remove o '\n' final, se houver

    printf("Digite a população: ");
    scanf("%lu", &populacao_1);

    printf("Digite a quantidade de pontos turisticos: ");
    scanf("%u", &pontos_turisticos_1);

    printf("Digite a area da cidade: ");
    scanf("%lf", &area_1);

    printf("Digite o PIB da cidade: ");
    scanf("%lf", &pib_1);

    densidade_1 = (float) populacao_1 / area_1;
    pib_per_capita_1 = (float) pib_1 / populacao_1;
    super_poder_1 = (double) populacao_1 + area_1 + pib_1 + pontos_turisticos_1 + pib_per_capita_1 + ((float) 1.0 / densidade_1);

    // Exibição dos dados da carta 1:
    printf("\n--- Dados da Cidade ---\n");
    printf("Estado: %c\n", estado_1);
    printf("Codigo: %s\n", codigo_1);
    printf("Nome da cidade: %s\n", nome_1);
    printf("Populacao: %lu\n", populacao_1);
    printf("Area: %.2lf\n", area_1);
    printf("PIB: %.2lf\n", pib_1);
    printf("Numero de pontos turisticos: %u\n", pontos_turisticos_1);
    printf("Densidade populacional: %.2f hab/km²\n", densidade_1);
    printf("PIB per capita: %.2f reais\n", pib_per_capita_1);
    printf("Super Poder: %.2lf\n\n", super_poder_1);

    // Cadastro da carta 2:
    printf("Digite o estado (ex: M): ");
    scanf(" %c", &estado_2);

    printf("Digite o codigo (ex: MG35): ");
    scanf("%s", codigo_2);

    // Leitura do nome da cidade (com espaços)
    printf("Digite o nome da cidade: ");
    while (getchar() != '\n');
    fgets(nome_2, sizeof(nome_2), stdin);
    nome_2[strcspn(nome_2, "\n")] = '\0';  // Remove o '\n' final, se houver

    printf("Digite a população: ");
    scanf("%lu", &populacao_2);

    printf("Digite a quantidade de pontos turisticos: ");
    scanf("%u", &pontos_turisticos_2);

    printf("Digite a area da cidade: ");
    scanf("%lf", &area_2);

    printf("Digite o PIB da cidade: ");
    scanf("%lf", &pib_2);

    densidade_2 = (float) populacao_2 / area_2;
    pib_per_capita_2 = (float) pib_2 / populacao_2;
    super_poder_2 = (double) populacao_2 + area_2 + pib_2 + pontos_turisticos_2 + pib_per_capita_2 + ((float) 1.0 / densidade_2);

    // Exibição dos dados da carta 1:
    printf("\n--- Dados da Cidade ---\n");
    printf("Estado: %c\n", estado_2);
    printf("Codigo: %s\n", codigo_2);
    printf("Nome da cidade: %s\n", nome_2);
    printf("Populacao: %lu\n", populacao_2);
    printf("Area: %.2lf\n", area_2);
    printf("PIB: %.2lf\n", pib_2);
    printf("Numero de pontos turisticos: %u\n", pontos_turisticos_2);
    printf("Densidade populacional: %.2f hab/km²\n", densidade_2);
    printf("PIB per capita: %.2f reais\n", pib_per_capita_2);
    printf("Super Poder: %.2lf\n\n", super_poder_2);

    printf("\n--- Comparação ---\n");
    printf("População (C1 > C2): %d\n", populacao_1 > populacao_2);
    printf("Área (C1 > C2): %d\n", area_1 > area_2);
    printf("PIB (C1 > C2): %d\n", pib_1 > pib_2);
    printf("Pontos Turísticos (C1 > C2): %d\n", pontos_turisticos_1 > pontos_turisticos_2);
    printf("Densidade Populacional (C1 < C2): %d\n", densidade_1 < densidade_2);
    printf("PIB per Capita (C1 > C2): %d\n", pib_per_capita_1 > pib_per_capita_2);
    printf("Super Poder (C1 > C2): %d\n", super_poder_1 > super_poder_2);

    return 0;
}
