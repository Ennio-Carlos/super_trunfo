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

    // Variaveis para os menus e comparacao
    int primeiroAtributo, segundoAtributo;
    float valorAtributo1_Carta1, valorAtributo1_Carta2;
    float valorAtributo2_Carta1, valorAtributo2_Carta2;
    float somaCarta1, somaCarta2;
    int pontosVitoriaCarta1 = 0, pontosVitoriaCarta2 = 0;

    // ===================================
    // === Entrada de Dados - Carta 1 ===
    // ===================================
    printf("SUPER TRUNFO - PAÍSES DO MUNDO\n");
    printf("NÍVEL MESTRE   \n");


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
    // === Exibicao das Cartas ===
    // ===================================

    printf(" CARTAS CADASTRADAS\n");

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
    // === Menu para Escolha do Primeiro Atributo ===
    // ===================================

    printf("ESCOLHA O PRIMEIRO ATRIBUTO\n");
    printf("\n1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Numero de Pontos Turísticos\n");
    printf("5 - Densidade Demografica\n");
    printf("\nDigite sua escolha (1-5): ");
    scanf("%d", &primeiroAtributo);

    // Validacao da primeira escolha
    while (primeiroAtributo < 1 || primeiroAtributo > 5) {
        printf("Opcao invalida! Digite um numero entre 1 e 5: ");
        scanf("%d", &primeiroAtributo);
    }

    // ===================================
    // === Menu Dinâmico para o Segundo Atributo ===
    // ===================================

    printf("ESCOLHA O SEGUNDO ATRIBUTO\n\n");

    
    // Exibe apenas as opções que não foram escolhidas
    if (primeiroAtributo != 1) printf("1 - Populacao\n");
    if (primeiroAtributo != 2) printf("2 - area\n");
    if (primeiroAtributo != 3) printf("3 - PIB\n");
    if (primeiroAtributo != 4) printf("4 - Numero de Pontos Turísticos\n");
    if (primeiroAtributo != 5) printf("5 - Densidade Demografica\n");
    
    printf("\nDigite sua escolha (diferente da anterior): ");
    scanf("%d", &segundoAtributo);

    // Validacao da segunda escolha (não pode ser igual à primeira)
    while (segundoAtributo < 1 || segundoAtributo > 5 || segundoAtributo == primeiroAtributo) {
        if (segundoAtributo == primeiroAtributo) {
            printf("Você ja escolheu esse atributo! Escolha outro: ");
        } else {
            printf("Opcao invalida! Digite um numero entre 1 e 5: ");
        }
        scanf("%d", &segundoAtributo);
    }

    // ===================================
    // === Obtencao dos Valores dos Atributos Escolhidos ===
    // ===================================
    
    // Primeiro Atributo - Carta 1
    switch(primeiroAtributo) {
        case 1: valorAtributo1_Carta1 = (float)populacao1; break;
        case 2: valorAtributo1_Carta1 = area1; break;
        case 3: valorAtributo1_Carta1 = pib1; break;
        case 4: valorAtributo1_Carta1 = (float)pontosTuristicos1; break;
        case 5: valorAtributo1_Carta1 = densidadeDemografica1; break;
    }

    // Primeiro Atributo - Carta 2
    switch(primeiroAtributo) {
        case 1: valorAtributo1_Carta2 = (float)populacao2; break;
        case 2: valorAtributo1_Carta2 = area2; break;
        case 3: valorAtributo1_Carta2 = pib2; break;
        case 4: valorAtributo1_Carta2 = (float)pontosTuristicos2; break;
        case 5: valorAtributo1_Carta2 = densidadeDemografica2; break;
    }

    // Segundo Atributo - Carta 1
    switch(segundoAtributo) {
        case 1: valorAtributo2_Carta1 = (float)populacao1; break;
        case 2: valorAtributo2_Carta1 = area1; break;
        case 3: valorAtributo2_Carta1 = pib1; break;
        case 4: valorAtributo2_Carta1 = (float)pontosTuristicos1; break;
        case 5: valorAtributo2_Carta1 = densidadeDemografica1; break;
    }

    // Segundo Atributo - Carta 2
    switch(segundoAtributo) {
        case 1: valorAtributo2_Carta2 = (float)populacao2; break;
        case 2: valorAtributo2_Carta2 = area2; break;
        case 3: valorAtributo2_Carta2 = pib2; break;
        case 4: valorAtributo2_Carta2 = (float)pontosTuristicos2; break;
        case 5: valorAtributo2_Carta2 = densidadeDemografica2; break;
    }

    // ===================================
    // === Exibicao e Comparacao dos Atributos ===
    // ===================================

    printf("RESULTADO DA COMPARACAO\n");


    // Funcao auxiliar para obter nome do atributo
    const char* nomeAtributos[] = {"", "Populacao", "Area", "PIB", "Pontos Turisticos", "Densidade Demografica"};

    // Comparacao do Primeiro Atributo
    printf("--- Primeiro Atributo: %s ---\n", nomeAtributos[primeiroAtributo]);
    printf("Carta 1 (%s): %.2f\n", nomePais1, valorAtributo1_Carta1);
    printf("Carta 2 (%s): %.2f\n", nomePais2, valorAtributo1_Carta2);
    
    // Lógica de comparacao (densidade é invertida)
    if (primeiroAtributo == 5) { // Densidade Demografica (menor vence)
        if (valorAtributo1_Carta1 < valorAtributo1_Carta2) {
            printf("✓ Carta 1 venceu este atributo!\n");
            pontosVitoriaCarta1++;
        } else if (valorAtributo1_Carta2 < valorAtributo1_Carta1) {
            printf("✓ Carta 2 venceu este atributo!\n");
            pontosVitoriaCarta2++;
        } else {
            printf("⚬ Empate neste atributo!\n");
        }
    } else { // Outros atributos (maior vence)
        if (valorAtributo1_Carta1 > valorAtributo1_Carta2) {
            printf("✓ Carta 1 venceu este atributo!\n");
            pontosVitoriaCarta1++;
        } else if (valorAtributo1_Carta2 > valorAtributo1_Carta1) {
            printf("✓ Carta 2 venceu este atributo!\n");
            pontosVitoriaCarta2++;
        } else {
            printf("⚬ Empate neste atributo!\n");
        }
    }

    // Comparacao do Segundo Atributo
    printf("\n--- Segundo Atributo: %s ---\n", nomeAtributos[segundoAtributo]);
    printf("Carta 1 (%s): %.2f\n", nomePais1, valorAtributo2_Carta1);
    printf("Carta 2 (%s): %.2f\n", nomePais2, valorAtributo2_Carta2);
    
    // Lógica de comparacao (densidade é invertida)
    if (segundoAtributo == 5) { // Densidade Demografica (menor vence)
        if (valorAtributo2_Carta1 < valorAtributo2_Carta2) {
            printf("✓ Carta 1 venceu este atributo!\n");
            pontosVitoriaCarta1++;
        } else if (valorAtributo2_Carta2 < valorAtributo2_Carta1) {
            printf("✓ Carta 2 venceu este atributo!\n");
            pontosVitoriaCarta2++;
        } else {
            printf("⚬ Empate neste atributo!\n");
        }
    } else { // Outros atributos (maior vence)
        if (valorAtributo2_Carta1 > valorAtributo2_Carta2) {
            printf("✓ Carta 1 venceu este atributo!\n");
            pontosVitoriaCarta1++;
        } else if (valorAtributo2_Carta2 > valorAtributo2_Carta1) {
            printf("✓ Carta 2 venceu este atributo!\n");
            pontosVitoriaCarta2++;
        } else {
            printf("⚬ Empate neste atributo!\n");
        }
    }

    // ===================================
    // === Calculo da Soma dos Atributos ===
    // ===================================
    somaCarta1 = valorAtributo1_Carta1 + valorAtributo2_Carta1;
    somaCarta2 = valorAtributo1_Carta2 + valorAtributo2_Carta2;


    printf("RESULTADO FINAL\n");


    printf("--- Soma dos Atributos ---\n");
    printf("Carta 1 (%s): %.2f + %.2f = %.2f\n", 
           nomePais1, valorAtributo1_Carta1, valorAtributo2_Carta1, somaCarta1);
    printf("Carta 2 (%s): %.2f + %.2f = %.2f\n", 
           nomePais2, valorAtributo1_Carta2, valorAtributo2_Carta2, somaCarta2);

    printf("\n--- Vitórias por Atributo ---\n");
    printf("Carta 1 (%s): %d vitória(s)\n", nomePais1, pontosVitoriaCarta1);
    printf("Carta 2 (%s): %d vitória(s)\n", nomePais2, pontosVitoriaCarta2);

    // ===================================
    // === Resultado Final usando Operador Ternario ===
    // ===================================
    printf("\n==================\n");
    printf("VENCEDOR: ");
    
    // Usa operador ternario para determinar o vencedor
    somaCarta1 > somaCarta2 ? printf("Carta 1 - %s!\n", nomePais1) :
    somaCarta2 > somaCarta1 ? printf("Carta 2 - %s!\n", nomePais2) :
    printf("EMPATE!\n");
    
    printf("==================\n");


    printf("OBRIGADO POR JOGAR!\n");


    return 0;
}