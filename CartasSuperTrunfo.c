#include <stdio.h>

int main(){

  //Declaração de variáveis para carta um, estão escritas sem o numeral a frente. 
  
  int populacao, numeroPontosturisticos;
  float area, pib;
  char estado[20] = "", codigo[3] = "", nomeCidade[20] = "";
  
  //Declaração de variáveis para carta dois, essas sim estão escritas com o numeral a frente com um underline.
  
  int populacao_2, numeroPontosturisticos_2;
  float area_2, pib_2;
  char estado_2[20] = "", codigo_2[3], nomeCidade_2[20] = "";  

  printf("=== Sistema de cadastro de estados. ===\n"); //Esse printf é somente para o inicio do código.
  printf("=== Digite os dados para a carta um.\n");
  //Processo de digitação do usuário, cada dado escrito pelo usuário.
  printf("Estado: \n");
  scanf("%s", estado);

  printf("Codigo: \n");
  scanf("%s", codigo);

  printf("Nome da cidade: \n");
  scanf("%s", nomeCidade);  
  
  printf("População: \n");
  scanf("%d", &populacao);  
  
  printf("Área: \n");
  scanf("%f", &area);  
  
  printf("PIB: \n");
  scanf("%f", &pib);  
  
  printf("Número de pontos turisticos: \n");
  scanf("%d", &numeroPontosturisticos);  

  printf("=== Digite os dados para carta dois. \n");

  printf("Estado: \n");
  scanf("%s", estado_2);

  printf("Codigo: \n");
  scanf("%s", codigo_2);

  printf("Nome da cidade: \n");
  scanf("%s", nomeCidade_2);  
  
  printf("População: \n");
  scanf("%d", &populacao_2);  
  
  printf("Área: \n");
  scanf("%f", &area_2);  
  
  printf("PIB: \n");
  scanf("%f", &pib_2);  
  
  printf("Número de pontos turisticos: \n");
  scanf("%d", &numeroPontosturisticos_2);
  return 0;
}