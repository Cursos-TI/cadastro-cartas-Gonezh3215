#include <stdio.h>

int main()
{

  // Declaração de variáveis para carta um, estão escritas sem o numeral a frente.

  int populacao, numeroPontosturisticos;
  float area, pib, densidadePopulacional, pibPerCapita, superCarta;
  char estado[20] = "", codigo[10] = "", nomeCidade[20] = "";

  // Declaração de variáveis para carta dois, essas sim estão escritas com o numeral a frente com um underline.

  int populacao_2, numeroPontosturisticos_2;
  float area_2, pib_2, densidadePopulacional_2, pibPerCapita_2, superCarta_2;
  char estado_2[20] = "", codigo_2[10], nomeCidade_2[20] = "";

  printf("=== Sistema de cadastro de estados. ===\n"); // Esse printf é somente para o inicio do código.
  printf("=== Digite os dados para a carta um.\n");
  // Processo de digitação do usuário, cada dado escrito pelo usuário.
  printf("Estado: \n\n");
  scanf("%s", estado);

  printf("Codigo: \n\n");
  scanf("%s", codigo);

  printf("Nome da cidade: \n\n");
  scanf("%s", nomeCidade);

  printf("População: \n\n");
  scanf("%d", &populacao);

  printf("Área: \n\n");
  scanf("%f", &area);

  printf("PIB: \n\n");
  scanf("%f", &pib);

  printf("Número de pontos turisticos: \n\n");
  scanf("%d", &numeroPontosturisticos);

  // Cálculo de Densidade Populacional
  densidadePopulacional = (float)populacao / area;

  // Cálculo de PIB per Capita
  pibPerCapita = pib / (float)populacao;

  printf("=== Digite os dados para carta dois. \n\n");

  printf("Estado: \n\n");
  scanf("%s", estado_2);

  printf("Codigo: \n\n");
  scanf("%s", codigo_2);

  printf("Nome da cidade: \n\n");
  scanf("%s", nomeCidade_2);

  printf("População: \n\n");
  scanf("%d", &populacao_2);

  printf("Área: \n\n");
  scanf("%f", &area_2);

  printf("PIB: \n\n");
  scanf("%f", &pib_2);

  printf("Número de pontos turisticos: \n\n");
  scanf("%d", &numeroPontosturisticos_2);

  // Cálculo de Densidade Populacional
  densidadePopulacional_2 = (float)populacao_2 / area_2;

  // Cálculo de PIB per Capita
  pibPerCapita_2 = pib_2 / (float)populacao_2;

  // saida de dados das cartas um e dois.

  printf("Carta 1: \n\n");
  printf("Estado:%s \n\n", estado);
  printf("Código:%s \n\n", codigo);
  printf("Nome da Cidade: %s \n\n", nomeCidade);
  printf("População:%d \n\n", populacao);
  printf("Área: %f km²\n\n", area);
  printf("PIB: %f bilhões de reais\n\n", pib);
  printf("Número de pontos Turísticos: %d\n\n", numeroPontosturisticos);
  printf("Densidade Populacional: %.2fhab/km²\n\n", densidadePopulacional);
  printf("PIB per Capita: %f reais\n\n", pibPerCapita);

  printf("Carta 2: \n\n");
  printf("Estado:%s \n\n", estado_2);
  printf("Código:%s \n\n", codigo_2);
  printf("Nome da Cidade: %s \n\n", nomeCidade_2);
  printf("População:%d \n\n", populacao_2);
  printf("Área: %f km²\n\n", area_2);
  printf("PIB: %f bilhões de reais\n\n", pib_2);
  printf("Número de pontos Turísticos: %d\n\n", numeroPontosturisticos_2);
  printf("Densidade Populacional: %.2fhab/km²\n\n", densidadePopulacional_2);
  printf("PIB per Capita: %f reais\n\n", pibPerCapita_2);

  // Cálculo de super carta

  superCarta = ((float)populacao + area + pib + (float)numeroPontosturisticos + pibPerCapita + densidadePopulacional);
  superCarta_2 = ((float)populacao_2 + area_2 + pib_2 + (float)numeroPontosturisticos_2 + pibPerCapita_2 + densidadePopulacional_2);

  // Comparação entre as cartas.
  printf("\n=== Comparação entre as cartas ===\n");

  if (populacao_2 > populacao)
    printf("População: A carta dois venceu.(0)\n");
  else if (populacao_2 < populacao)
    printf("População: A carta um venceu.(1)\n");
  else
    printf("População: Empate.\n");

  if (area_2 > area)
    printf("Área: A carta dois venceu.(0)\n");
  else if (area_2 < area)
    printf("Área: A carta um venceu.(1)\n");
  else
    printf("Área: Empate.\n");

  if (pib_2 > pib)
    printf("PIB: A carta dois venceu.(0)\n");
  else if (pib_2 < pib)
    printf("PIB: A carta um venceu.(1)\n");
  else
    printf("PIB: Empate.\n");

  if (numeroPontosturisticos_2 > numeroPontosturisticos)
    printf("Número de pontos turisticos: A carta dois venceu.(0)\n");
  else if (numeroPontosturisticos_2 < numeroPontosturisticos)
    printf("Número de pontos turisticos: A carta um venceu.(1)\n");
  else
    printf("Número de pontos turisticos: Empate.\n");

  if (pibPerCapita_2 > pibPerCapita)
  {
    printf("PIB per capita: A carta dois venceu. (0)\n");
  }
  else if (pibPerCapita_2 < pibPerCapita)
  {
    printf("PIB per capita: A carta um venceu.(1)\n");
  }
  else
    printf("PIB per capita: Empate.\n");

  if (densidadePopulacional_2 < densidadePopulacional)
  {
    printf("Densidade populacional: A carta dois venceu.(0)\n");
  }
  else if (densidadePopulacional_2 > densidadePopulacional)
  {
    printf("Densidade populacional: A carta um venceu.(1)\n");
  }
  else
    printf("Densidade populacional: Empate.\n");

  if (superCarta > superCarta_2)
  {
    printf("Super carta: A carta um venceu.(1)\n");
  }
  else if (superCarta < superCarta_2)
  {
    printf("Super carta: A carta dois venceu.(0)\n");
  }
  else
    printf("Super carta: Empate.\n");
  return 0;
}