#include <stdio.h>
#include <string.h>

int main() {
    // --- Variaveis da Carta 1 ---
    char nomePais1[50];
    unsigned long int populacao1;
    float area1, pib1;
    int pontosTuristicos1;
    float densidadeDemografica1;

    // --- Variaveis da Carta 2 ---
    char nomePais2[50];
    unsigned long int populacao2;
    float area2, pib2;
    int pontosTuristicos2;
    float densidadeDemografica2;

    // Variavel para o menu
    int opcao;

    // ===================================
    // === Entrada de Dados - Carta 1 ===
    // ===================================
    printf("SUPER TRUNFO - PAiSES DO MUNDO\n");


    printf("=== Cadastro da Carta 1 ===\n");
    
    printf("Digite o nome do pais: ");
    fgets(nomePais1, sizeof(nomePais1), stdin);
    nomePais1[strcspn(nomePais1, "\n")] = 0;

    printf("Digite a populacao: ");
    scanf("%lu", &populacao1);

    printf("Digite a area em km^2: ");
    scanf("%f", &area1);

    printf("Digite o PIB (em bilhoes de reais): ");
    scanf("%f", &pib1);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos1);

    // Calculo da densidade demografica da Carta 1
    densidadeDemografica1 = (float)populacao1 / area1;

    // ===================================
    // === Entrada de Dados - Carta 2 ===
    // ===================================
    getchar(); // Limpa o buffer
    
    printf("\n=== Cadastro da Carta 2 ===\n");
    
    printf("Digite o nome do pais: ");
    fgets(nomePais2, sizeof(nomePais2), stdin);
    nomePais2[strcspn(nomePais2, "\n")] = 0;

    printf("Digite a populacao: ");
    scanf("%lu", &populacao2);

    printf("Digite a area em km^2: ");
    scanf("%f", &area2);

    printf("Digite o PIB (em bilhoes de reais): ");
    scanf("%f", &pib2);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos2);

    // Calculo da densidade demografica da Carta 2
    densidadeDemografica2 = (float)populacao2 / area2;

    // ===================================
    // === Exibição das Cartas ===
    // ===================================

    printf("CARTAS CADASTRADAS\n");

    printf("\n--- Carta 1 ---\n");
    printf("Nome do Pais: %s\n", nomePais1);
    printf("Populacao: %lu habitantes\n", populacao1);
    printf("Area: %.2f km^2\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Pontos Turisticos: %d\n", pontosTuristicos1);
    printf("Densidade Demografica: %.2f hab/km^2\n", densidadeDemografica1);

    printf("\n--- Carta 2 ---\n");
    printf("Nome do Pais: %s\n", nomePais2);
    printf("Populacao: %lu habitantes\n", populacao2);
    printf("Area: %.2f km^2\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Pontos Turisticos: %d\n", pontosTuristicos2);
    printf("Densidade Demografica: %.2f hab/km^2\n", densidadeDemografica2);

    // ===================================
    // === Menu Interativo ===
    // ===================================
    printf("ESCOLHA O ATRIBUTO PARA COMPARAÇÃO\n");


    printf("\n1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Numero de Pontos Turisticos\n");
    printf("5 - Densidade Demografica\n");
    printf("\nDigite sua escolha (1-5): ");
    scanf("%d", &opcao);

    // ===================================
    // === Lógica de Comparação com Switch ===
    // ===================================
    printf("RESULTADO DA COMPARAÇÃO\n");

    switch(opcao) {
        case 1: // População
            printf("Atributo escolhido: POPULACAO\n");
            printf("========================\n");
            printf("Carta 1 - %s: %lu habitantes\n", nomePais1, populacao1);
            printf("Carta 2 - %s: %lu habitantes\n", nomePais2, populacao2);
            printf("========================\n");
            
            if (populacao1 > populacao2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", nomePais1);
                printf("   %s tem uma população maior.\n", nomePais1);
            } else if (populacao2 > populacao1) {
                printf("Resultado: Carta 2 (%s) venceu!\n", nomePais2);
                printf("   %s tem uma população maior.\n", nomePais2);
            } else {
                printf("Resultado: Empate!\n");
                printf("   As cartas têm a mesma população.\n");
            }
            break;

        case 2: // area
            printf("Atributo escolhido: AREA\n");
            printf("========================\n");
            printf("Carta 1 - %s: %.2f km^2\n", nomePais1, area1);
            printf("Carta 2 - %s: %.2f km^2\n", nomePais2, area2);
            printf("========================\n");
            
            if (area1 > area2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", nomePais1);
                printf("   %s tem uma area maior.\n", nomePais1);
            } else if (area2 > area1) {
                printf("Resultado: Carta 2 (%s) venceu!\n", nomePais2);
                printf("   %s tem uma area maior.\n", nomePais2);
            } else {
                printf("Resultado: Empate!\n");
                printf("   As cartas têm a mesma area.\n");
            }
            break;

        case 3: // PIB
            printf("Atributo escolhido: PIB\n");
            printf("========================\n");
            printf("Carta 1 - %s: %.2f bilhões de reais\n", nomePais1, pib1);
            printf("Carta 2 - %s: %.2f bilhões de reais\n", nomePais2, pib2);
            printf("========================\n");
            
            if (pib1 > pib2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", nomePais1);
                printf("   %s tem um PIB maior.\n", nomePais1);
            } else if (pib2 > pib1) {
                printf("Resultado: Carta 2 (%s) venceu!\n", nomePais2);
                printf("   %s tem um PIB maior.\n", nomePais2);
            } else {
                printf("Resultado: Empate!\n");
                printf("   As cartas têm o mesmo PIB.\n");
            }
            break;

        case 4: // Pontos Turisticos
            printf("Atributo escolhido: PONTOS TURISTICOS\n");
            printf("========================\n");
            printf("Carta 1 - %s: %d pontos turisticos\n", nomePais1, pontosTuristicos1);
            printf("Carta 2 - %s: %d pontos turisticos\n", nomePais2, pontosTuristicos2);
            printf("========================\n");
            
            if (pontosTuristicos1 > pontosTuristicos2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", nomePais1);
                printf("   %s tem mais pontos turisticos.\n", nomePais1);
            } else if (pontosTuristicos2 > pontosTuristicos1) {
                printf("Resultado: Carta 2 (%s) venceu!\n", nomePais2);
                printf("   %s tem mais pontos turisticos.\n", nomePais2);
            } else {
                printf("Resultado: Empate!\n");
                printf("   As cartas têm o mesmo numero de pontos turisticos.\n");
            }
            break;

        case 5: // Densidade Demografica (regra invertida)
            printf("Atributo escolhido: DENSIDADE DEMOGRAFICA\n");
            printf("========================\n");
            printf("Carta 1 - %s: %.2f hab/km^2\n", nomePais1, densidadeDemografica1);
            printf("Carta 2 - %s: %.2f hab/km^2\n", nomePais2, densidadeDemografica2);
            printf("========================\n");
            printf("Atenção: Neste atributo, MENOR densidade vence!\n\n");
            
            // Para densidade demografica, a regra é invertida (menor vence)
            if (densidadeDemografica1 < densidadeDemografica2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", nomePais1);
                printf("   %s tem uma densidade demografica menor.\n", nomePais1);
            } else if (densidadeDemografica2 < densidadeDemografica1) {
                printf("Resultado: Carta 2 (%s) venceu!\n", nomePais2);
                printf("   %s tem uma densidade demografica menor.\n", nomePais2);
            } else {
                printf("Resultado: Empate!\n");
                printf("   As cartas têm a mesma densidade demografica.\n");
            }
            break;

        default: // Opção invalida
            printf("ERRO: Opcao invalida!\n");
            printf("   Por favor, escolha um numero entre 1 e 5.\n");
            break;
    }

    printf("OBRIGADO POR JOGAR!\n");

    return 0;
}