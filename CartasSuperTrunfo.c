#include <stdio.h>

int main() {
    // Declaração das variáveis da Carta 1
    char estado1;
    char codigo1[5];
    char nome1[50];
    int populacao1;
    float area1;
    float pib1;
    int turismo1;

    // Declaração das variáveis da Carta 2
    char estado2;
    char codigo2[5];
    char nome2[50];
    int populacao2;
    float area2;
    float pib2;
    int turismo2;

    // Entrada de dados da Carta 1
    printf("=== Cadastro da Carta 1 ===\n");
    printf("Digite o estado (A-H): ");
    scanf(" %c", &estado1);

    printf("Digite o codigo (ex: A01): ");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade (sem espacos): ");
    scanf("%s", nome1);

    printf("Digite a populacao: ");
    scanf("%d", &populacao1);

    printf("Digite a area (km²): ");
    scanf("%f", &area1);

    printf("Digite o PIB (em bilhoes): ");
    scanf("%f", &pib1);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &turismo1);

    // Entrada de dados da Carta 2
    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Digite o estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Digite o codigo (ex: B02): ");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade (sem espacos): ");
    scanf("%s", nome2);

    printf("Digite a populacao: ");
    scanf("%d", &populacao2);

    printf("Digite a area (km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB (em bilhoes): ");
    scanf("%f", &pib2);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &turismo2);

    // Exibição dos dados da Carta 1
    printf("\n--- CARTA 1 ---\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nome1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", turismo1);

    // Exibição dos dados da Carta 2
    printf("\n--- CARTA 2 ---\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nome2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", turismo2);

    return 0;
}

