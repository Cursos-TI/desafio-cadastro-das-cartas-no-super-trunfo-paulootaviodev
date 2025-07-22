#include <stdio.h>

int main() {
    // Definição das variáveis:
    char estado;
    char codigo[5];
    char nome[20];
    int populacao;
    int pontos_turisticos;
    float area;
    float pib;
    float densidade, pib_per_capita;

    // Cadastro da carta 1:
    printf("Digite o estado (ex: M): ");
    scanf(" %c", &estado);

    printf("Digite o codigo (ex: MG35): ");
    scanf("%s", &codigo);

    printf("Digite o nome da cidade: ");
    scanf("%s", &nome);

    printf("Digite a população: ");
    scanf("%d", &populacao);

    printf("Digite a quantidade de pontos turisticos: ");
    scanf("%d", &pontos_turisticos);

    printf("Digite a area da cidade: ");
    scanf("%f", &area);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib);

    densidade = (float) populacao / area;
    pib_per_capita = (float) pib / populacao;

    // Exibição dos dados da carta 1:
    printf("\n--- Dados da Cidade ---\n");
    printf("Estado: %c\n", estado);
    printf("Codigo: %s\n", codigo);
    printf("Nome da cidade: %s\n", nome);
    printf("Populacao: %d\n", populacao);
    printf("Area: %.2f\n", area);
    printf("PIB: %.2f\n", pib);
    printf("Numero de pontos turisticos: %d\n", pontos_turisticos);
    printf("Densidade populacional: %.2f hab/km²\n", densidade);
    printf("PIB per capita: %.2f reais\n", pib_per_capita);

    // Cadastro da carta 2:
    printf("\nDigite o estado (ex: M): ");
    scanf(" %c", &estado);

    printf("Digite o codigo (ex: MG35): ");
    scanf("%s", &codigo);

    printf("Digite o nome da cidade: ");
    scanf("%s", &nome);

    printf("Digite a população: ");
    scanf("%d", &populacao);

    printf("Digite a quantidade de pontos turisticos: ");
    scanf("%d", &pontos_turisticos);

    printf("Digite a area da cidade: ");
    scanf("%f", &area);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib);

    densidade = (float) populacao / area;
    pib_per_capita = (float) pib / populacao;

    // Exibição dos dados da carta 2:
    printf("\n--- Dados da Cidade ---\n");
    printf("Estado: %c\n", estado);
    printf("Codigo: %s\n", codigo);
    printf("Nome da cidade: %s\n", nome);
    printf("Populacao: %d\n", populacao);
    printf("Area: %.2f\n", area);
    printf("PIB: %.2f\n", pib);
    printf("Numero de pontos turisticos: %d\n", pontos_turisticos);
    printf("Densidade populacional: %.2f hab/km²\n", densidade);
    printf("PIB per capita: %.2f reais\n", pib_per_capita);

    return 0;
}
