#include <stdio.h>
#include <string.h> // Para usar strcspn com fgets

// O foco deste desafio é a comparação de UM atributo.
// Vamos escolher a População para a comparação principal.

int main() {
    // --- Variáveis da Carta 1 ---
    char estado1;
    char codigo1[4];
    char nomeCidade1[50];
    unsigned long int populacao1; // unsigned long int para populacoes grandes
    float area1, pib1;           // area em km^2, pib em bilhoes de reais
    int pontosTuristicos1;
    float densidade1, pibPerCapita1, superPoder1;

    // --- Variáveis da Carta 2 ---
    char estado2;
    char codigo2[4];
    char nomeCidade2[50];
    unsigned long int populacao2;
    float area2, pib2;
    int pontosTuristicos2;
    float densidade2, pibPerCapita2, superPoder2;

    // ===================================
    // === Entrada de Dados (Reaproveitada do Desafio Anterior) ===
    // ===================================

    // Entrada da Carta 1
    printf("=== Cadastro da Carta 1 ===\n");
    printf("Digite o estado (A-H): ");
    scanf(" %c", &estado1);

    printf("Digite o codigo da carta (ex: A01): ");
    scanf("%s", codigo1);

    getchar(); // limpa o buffer do Enter após o scanf("%s")

    printf("Digite o nome da cidade: ");
    fgets(nomeCidade1, sizeof(nomeCidade1), stdin);
    // Remove o '\n' lido pelo fgets, se existir
    nomeCidade1[strcspn(nomeCidade1, "\n")] = 0;

    printf("Digite a populacao: ");
    scanf("%lu", &populacao1);

    printf("Digite a area em km^2: ");
    scanf("%f", &area1);

    printf("Digite o PIB (em bilhoes de reais): ");
    scanf("%f", &pib1);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos1);

    // Entrada da Carta 2
    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Digite o estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Digite o codigo da carta (ex: B02): ");
    scanf("%s", codigo2);

    getchar(); // limpa o buffer do Enter

    printf("Digite o nome da cidade: ");
    fgets(nomeCidade2, sizeof(nomeCidade2), stdin);
    // Remove o '\n' lido pelo fgets, se existir
    nomeCidade2[strcspn(nomeCidade2, "\n")] = 0;

    printf("Digite a populacao: ");
    scanf("%lu", &populacao2);

    printf("Digite a area em km^2: ");
    scanf("%f", &area2);

    printf("Digite o PIB (em bilhoes de reais): ");
    scanf("%f", &pib2);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos2);

    // ===================================
    // === Cálculos de Atributos Secundários ===
    // ===================================

    // Cálculo para Carta 1
    densidade1 = (float)populacao1 / area1;
    // PIB per capita: (PIB em R$) / Populacao
    pibPerCapita1 = (pib1 * 1000000000.0f) / populacao1; 
    // Super Poder: Soma de atributos (apenas para exibição, não usado na comparação final)
    superPoder1 = (float)populacao1 + area1 + pib1 + pontosTuristicos1 +
                  pibPerCapita1 + (1.0f / densidade1);

    // Cálculo para Carta 2
    densidade2 = (float)populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000.0f) / populacao2;
    superPoder2 = (float)populacao2 + area2 + pib2 + pontosTuristicos2 +
                  pibPerCapita2 + (1.0f / densidade2);

    // ===================================
    // === Exibição das Cartas (Opcional, mas útil para Usabilidade) ===
    // ===================================

    printf("\n--- Carta 1 ---\n");
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("Estado: %c, Codigo: %s\n", estado1, codigo1);
    printf("Populacao: %lu\n", populacao1);
    printf("Area: %.2f km^2\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Pontos Turisticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km^2\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);
    printf("Super Poder: %.2f\n", superPoder1);

    printf("\n--- Carta 2 ---\n");
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("Estado: %c, Codigo: %s\n", estado2, codigo2);
    printf("Populacao: %lu\n", populacao2);
    printf("Area: %.2f km^2\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Pontos Turisticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km^2\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);
    printf("Super Poder: %.2f\n", superPoder2);

    // ===================================
    // === Lógica de Comparação (Foco do Desafio) ===
    // ===================================

    // REQUISITO DO DESAFIO: Comparar apenas UM atributo.
    // Atributo escolhido no código: POPULAÇÃO.
    printf("\n===================================\n");
    printf("=== Comparacao de Cartas (Atributo: Populacao) ===\n");
    printf("Carta 1 - %s (%c): %lu\n", nomeCidade1, estado1, populacao1);
    printf("Carta 2 - %s (%c): %lu\n", nomeCidade2, estado2, populacao2);
    
    // Para População, o maior valor vence.
    if (populacao1 > populacao2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
    } else if (populacao2 > populacao1) {
        printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
    } else {
        printf("Resultado: Empate! As cartas tem a mesma populacao.\n");
    }
    printf("===================================\n");


    /*
    // Para cumprir o requisito de focar em UM atributo, as demais
    // comparações foram comentadas. Caso queira usá-las, basta
    // descomentar.

    // Comparações de outros atributos (Comentadas para foco no requisito)
    // if (area1 > area2)
    //     printf("Area: Carta 1 venceu (1)\n");
    // else
    //     printf("Area: Carta 2 venceu (0)\n");

    // if (pib1 > pib2)
    //     printf("PIB: Carta 1 venceu (1)\n");
    // else
    //     printf("PIB: Carta 2 venceu (0)\n");

    // if (pontosTuristicos1 > pontosTuristicos2)
    //     printf("Pontos Turisticos: Carta 1 venceu (1)\n");
    // else
    //     printf("Pontos Turisticos: Carta 2 venceu (0)\n");

    // // menor densidade vence
    // if (densidade1 < densidade2)
    //     printf("Densidade Populacional: Carta 1 venceu (1)\n");
    // else
    //     printf("Densidade Populacional: Carta 2 venceu (0)\n");

    // if (pibPerCapita1 > pibPerCapita2)
    //     printf("PIB per Capita: Carta 1 venceu (1)\n");
    // else
    //     printf("PIB per Capita: Carta 2 venceu (0)\n");

    // if (superPoder1 > superPoder2)
    //     printf("Super Poder: Carta 1 venceu (1)\n");
    // else
    //     printf("Super Poder: Carta 2 venceu (0)\n");
    */

    return 0;
}