#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char estado[50];
  char cidade[50];
  int populacao;
  float area;
  float pib;
  int turismo;
  
  // Área para entrada de dados
  printf("Estado de São Paulo\n");

  printf("Cidade: ");
  fgets(cidade, sizeof(cidade), stdin);

  printf("População: ");
  scanf("%d", &populacao);

  printf("Aréa: ");
  scanf("%f", &area);

  printf("Pontos turisticos: ");
  scanf("%d", &turismo);

  // Área para exibição dos dados da cidade

printf("%S", cidade)

return 0;


} 
