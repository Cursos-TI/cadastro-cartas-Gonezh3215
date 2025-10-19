#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
 
  /*Declarando variáveis*/
    char estado[30] = "";
    char codigo[10] = "";
    char nome[50] = "";
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
   
    // Declarando variáveis de outro estado
    char estado2[30] = "";
    char codigo2[10] = "";
    char nome2[50] = "";
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
  // Área para entrada de dados
  printf("Digite os dados referentes ao estado. \n");
    printf("Estado: \n");
    scanf("%s", estado);

    printf("Codigo: \n");
    scanf("%s", codigo);

    printf("Nome da cidade: \n");
    scanf("%s", nome);

    printf("Populacao: \n");
    scanf("%d", &populacao);

    printf("Area: \n");
    scanf("%f", &area);

    printf("PIB: \n");
    scanf("%f", &pib);

    printf("Numero de pontos turisticos: \n");
    scanf("%d", &pontosTuristicos);

    //Entrada de dados do usuário, segundo estado

    printf("Estado: \n");
    scanf("%s", estado2);

    printf("Codigo: \n");
    scanf("%s", codigo2);

    printf("Nome da cidade: \n");
    scanf("%s", nome2);

    printf("Populacao: \n");
    scanf("%d", &populacao2);

    printf("Area: \n");
    scanf("%f", &area2);

    printf("PIB: \n");
    scanf("%f", &pib2);

    printf("Numero de pontos turisticos: \n");
    scanf("%d", &pontosTuristicos2);
  // Área para exibição dos dados da cidade
  /*Mostrando as informações na tela do usuário*/
    printf("\n=== Carta 1 ===\n");
    printf("Estado: %s\n", estado);
    printf("Codigo: %s\n", codigo);
    printf("Nome da Cidade: %s\n", nome);
    printf("Populacao: %d\n", populacao * 1000);
    printf("Area: %.2f km²\n", area);
    printf("PIB: %.2f bilhoes de reais\n", pib);
    printf("Numero de pontos turisticos: %d\n", pontosTuristicos);

     /*Mostrando as informações na tela do usuário2*/
    printf("\n=== Carta 2 ===\n");
    printf("Estado: %s\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nome2);
    printf("Populacao: %d\n", populacao2 * 1000);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de pontos turisticos: %d\n", pontosTuristicos2);

return 0;
} 
