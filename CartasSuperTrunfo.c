#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades

    // --- Variáveis da Carta 1 ---
    char estado_1;
    int num_cidade_1;
    char nome_cidade_1[50];
    float populacao_1;
    float area_1;
    float pib_1;
    int turisticos_1;
    
    // --- Variáveis da Carta 2 ---
    char estado_2;
    int num_cidade_2;
    char nome_cidade_2[50];
    float populacao_2;
    float area_2;
    float pib_2;
    int turisticos_2;
    
    // Variável para tentar consumir o ENTER entre as leituras.
    char enter_dummy;

    printf("===== Cadastro de Duas Cartas Super Trunfo (Nível Novato) =====\n");
  
    
    // Área para entrada de dados
  
    // CADASTRO DA CARTA 1

    printf("\n--- Inserir Dados da Carta 1 ---\n");
    
    printf("Sigla do Estado (A a H, ex: A): ");
    // Nota: O espaço antes de %c ignora quebras de linha/espaços anteriores.
    scanf(" %c", &estado_1); 

    printf("Numero da Cidade (1 a 4, ex: 1): ");
    scanf("%d", &num_cidade_1);
    // Consumir o ENTER que fica no buffer após o %d
    scanf("%c", &enter_dummy); 

    printf("Nome da Cidade (UMA palavra, ex: SAOPAULO): ");
    // O %s sozinho já ignora a maioria dos espaços/quebras de linha
    scanf("%49s", nome_cidade_1); 
    
    printf("Populacao (em milhoes, ex: 12.325): ");
    scanf("%f", &populacao_1);
    scanf("%c", &enter_dummy); // Consome o ENTER após o %f

    printf("Area (em km2, ex: 1521.11): ");
    scanf("%f", &area_1);
    scanf("%c", &enter_dummy); // Consome o ENTER após o %f

    printf("PIB (em bilhoes, ex: 699.28): ");
    scanf("%f", &pib_1);
    scanf("%c", &enter_dummy); // Consome o ENTER após o %f

    printf("Numero de Pontos Turisticos (ex: 50): ");
    scanf("%d", &turisticos_1);
    scanf("%c", &enter_dummy); // Consome o ENTER após o %d

    // CADASTRO DA CARTA 2
 
    printf("\n--- Inserir Dados da Carta 2 ---\n");
    
    printf("Sigla do Estado (A a H, ex: B): ");
    // Nota: O espaço antes de %c ignora quebras de linha/espaços anteriores.
    scanf(" %c", &estado_2);

    printf("Numero da Cidade (1 a 4, ex: 1): ");
    scanf("%d", &num_cidade_2);
    scanf("%c", &enter_dummy); // Consome o ENTER após o %d
    
    printf("Nome da Cidade (UMA palavra, ex: RIODEJANEIRO): ");
    scanf("%49s", nome_cidade_2);

    printf("Populacao (em milhoes, ex: 6.748): ");
    scanf("%f", &populacao_2);
    scanf("%c", &enter_dummy); // Consome o ENTER após o %f

    printf("Area (em km2, ex: 1202.25): ");
    scanf("%f", &area_2);
    scanf("%c", &enter_dummy); // Consome o ENTER após o %f

    printf("PIB (em bilhoes, ex: 300.50): ");
    scanf("%f", &pib_2);
    scanf("%c", &enter_dummy); // Consome o ENTER após o %f

    printf("Numero de Pontos Turisticos (ex: 30): ");
    scanf("%d", &turisticos_2);
    scanf("%c", &enter_dummy); // Consome o ENTER após o %d


    // Área para exibição dos dados da cidade

    printf("\n\n===== Saída de Dados - Cartas Cadastradas =====\n");
    
    // Exibição da Carta 1
    printf("\n--- Carta 1 (Código: %c%d) ---\n", 
           estado_1, num_cidade_1);
    printf("Nome: %s\n", nome_cidade_1);
    printf("Populacao: %.2f milhoes\n", populacao_1);
    printf("Area: %.2f km2\n", area_1);
    printf("PIB: %.2f bilhoes\n", pib_1);
    printf("P. Turisticos: %d\n", turisticos_1);

    // Exibição da Carta 2
    printf("\n--- Carta 2 (Código: %c%d) ---\n", 
           estado_2, num_cidade_2);
    printf("Nome: %s\n", nome_cidade_2);
    printf("Populacao: %.2f milhoes\n", populacao_2);
    printf("Area: %.2f km2\n", area_2);
    printf("PIB: %.2f bilhoes\n", pib_2);
    printf("P. Turisticos: %d\n", turisticos_2);
    
    printf("\nCadastro concluido com sucesso.\n");

    
    return 0
} 
