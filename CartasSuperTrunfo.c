#include <stdio.h>

int main() {
    // 8 // Área para definição das variáveis
    
    // --- Variáveis da Carta 1 ---
    char estado_1;
    int num_cidade_1;
    char nome_cidade_1[50];
    float populacao_1; // Entrada
    float area_1;      // Entrada
    float pib_1;       // Entrada
    int turisticos_1;  // Entrada
    
    // VARIÁVEIS CALCULADAS PARA CARTA 1
    float densidade_1;    
    float pib_percapita_1;
    float super_poder_1; // NOVO: Super Poder
    
    // --- Variáveis da Carta 2 ---
    char estado_2;
    int num_cidade_2;
    char nome_cidade_2[50];
    float populacao_2; // Entrada
    float area_2;      // Entrada
    float pib_2;       // Entrada
    int turisticos_2;  // Entrada
    
    // VARIÁVEIS CALCULADAS PARA CARTA 2
    float densidade_2;    
    float pib_percapita_2;
    float super_poder_2; // NOVO: Super Poder
    
    // --- Variável para Comparação ---
    int resultado_comparacao; // Onde 1 = Carta 1 Ganhou, 0 = Carta 2 Ganhou/Empatou
    
    // Variável para tentar consumir o ENTER entre as leituras.
    char enter_dummy;

    printf("===== Cadastro de Cartas Super Trunfo (Nível Mestre) =====\n");
    
    // ===========================================
    // // Área para entrada de dados
    // ===========================================

    // --- CADASTRO DA CARTA 1 ---
    printf("\n--- Inserir Dados da Carta 1 ---\n");
    // (Entradas sequenciais omitidas aqui por serem idênticas ao código anterior)
    
    printf("Sigla do Estado (A a H, ex: A): ");
    scanf(" %c", &estado_1); 

    printf("Numero da Cidade (1 a 4, ex: 1): ");
    scanf("%d", &num_cidade_1);
    scanf("%c", &enter_dummy); 

    printf("Nome da Cidade (UMA palavra, ex: SAOPAULO): ");
    scanf("%49s", nome_cidade_1); 
    
    printf("Populacao (em milhoes, ex: 12.325): ");
    scanf("%f", &populacao_1);
    scanf("%c", &enter_dummy); 

    printf("Area (em km2, ex: 1521.11): ");
    scanf("%f", &area_1);
    scanf("%c", &enter_dummy); 

    printf("PIB (em bilhoes, ex: 699.28): ");
    scanf("%f", &pib_1);
    scanf("%c", &enter_dummy); 

    printf("Numero de Pontos Turisticos (ex: 50): ");
    scanf("%d", &turisticos_1);
    scanf("%c", &enter_dummy); 

    // ===========================================
    // CÁLCULOS DA CARTA 1
    // ===========================================
    densidade_1 = populacao_1 / area_1;
    pib_percapita_1 = pib_1 / populacao_1;
    
    // NOVO: Cálculo do Super Poder 1
    // Usa a inversão da Densidade Populacional (1 / (densidade * 1000.0))
    // para que quanto menor a densidade original, maior seja a pontuação.
    super_poder_1 = populacao_1 + area_1 + pib_1 + pib_percapita_1 + 
                    (1.0 / (densidade_1 * 1000.0)) + turisticos_1; 
    // FIM DOS CÁLCULOS PARA CARTA 1

    // --- CADASTRO DA CARTA 2 ---
    printf("\n--- Inserir Dados da Carta 2 ---\n");
    // (Entradas sequenciais omitidas aqui por serem idênticas ao código anterior)

    printf("Sigla do Estado (A a H, ex: B): ");
    scanf(" %c", &estado_2);

    printf("Numero da Cidade (1 a 4, ex: 1): ");
    scanf("%d", &num_cidade_2);
    scanf("%c", &enter_dummy); 
    
    printf("Nome da Cidade (UMA palavra, ex: RIODEJANEIRO): ");
    scanf("%49s", nome_cidade_2);

    printf("Populacao (em milhoes, ex: 6.748): ");
    scanf("%f", &populacao_2);
    scanf("%c", &enter_dummy); 

    printf("Area (em km2, ex: 1202.25): ");
    scanf("%f", &area_2);
    scanf("%c", &enter_dummy); 

    printf("PIB (em bilhoes, ex: 300.50): ");
    scanf("%f", &pib_2);
    scanf("%c", &enter_dummy); 

    printf("Numero de Pontos Turisticos (ex: 30): ");
    scanf("%d", &turisticos_2);
    scanf("%c", &enter_dummy); 

    // ===========================================
    // CÁLCULOS DA CARTA 2
    // ===========================================
    densidade_2 = populacao_2 / area_2;
    pib_percapita_2 = pib_2 / populacao_2;
    
    // NOVO: Cálculo do Super Poder 2
    super_poder_2 = populacao_2 + area_2 + pib_2 + pib_percapita_2 + 
                    (1.0 / (densidade_2 * 1000.0)) + turisticos_2;
    // FIM DOS CÁLCULOS PARA CARTA 2

    // ===========================================
    // COMPARAÇÃO SIMPLES (PIB Per Capita) - NÍVEL MESTRE
    // ===========================================
    // Operador Relacional: Se a comparação for VERDADEIRA, o resultado é 1. Se for FALSA, 0.
    resultado_comparacao = pib_percapita_1 > pib_percapita_2;
    
    // ===========================================
    // // Área para exibição dos dados da cidade
    // ===========================================
    printf("\n\n===== Saída de Dados - Cartas Cadastradas =====\n");
    
    // Exibição da Carta 1
    printf("\n--- Carta 1 (Código: %c%d) ---\n", 
           estado_1, num_cidade_1);
    printf("Nome: %s\n", nome_cidade_1);
    printf("Populacao: %.2f milhoes\n", populacao_1);
    printf("Area: %.2f km2\n", area_1);
    printf("Densidade Demografica: %.2f hab/km2\n", densidade_1 * 1000.0);
    printf("PIB: %.2f bilhoes\n", pib_1);
    printf("PIB Per Capita: %.2f bilhoes/milhao\n", pib_percapita_1); 
    printf("P. Turisticos: %d\n", turisticos_1);
    printf("Super Poder: %.2f\n", super_poder_1); // NOVO: Exibição Super Poder

    // Exibição da Carta 2
    printf("\n--- Carta 2 (Código: %c%d) ---\n", 
           estado_2, num_cidade_2);
    printf("Nome: %s\n", nome_cidade_2);
    printf("Populacao: %.2f milhoes\n", populacao_2);
    printf("Area: %.2f km2\n", area_2);
    printf("Densidade Demografica: %.2f hab/km2\n", densidade_2 * 1000.0);
    printf("PIB: %.2f bilhoes\n", pib_2);
    printf("PIB Per Capita: %.2f bilhoes/milhao\n", pib_percapita_2); 
    printf("P. Turisticos: %d\n", turisticos_2);
    printf("Super Poder: %.2f\n", super_poder_2); // NOVO: Exibição Super Poder
    
    printf("\nCadastro concluido com sucesso.\n");
    
    // Exibição do Resultado da Comparação
    printf("\n===== RESULTADO DA COMPARAÇÃO (PIB PER CAPITA) =====\n");
    printf("Resultado (1 = Carta 1 Vence, 0 = Carta 2 Vence/Empata): %d\n", 
           resultado_comparacao);

    return 0;
}