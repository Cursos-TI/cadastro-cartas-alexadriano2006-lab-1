#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
 
  char numero_carta[3]; //Define a cidade
  char estado[2];
  char codigo[4];
  char cidade[50];
  int populacao;
  float area;
  float pib;
  int turismo;
  
  // Área para entrada de dados
  
  printf("Escolha a numeração de 01 a 04 para a carta: ");
  scanf("%s", numero_carta); //defina o nuemro da carta

  printf("Escoolh uma letra de A a H para definir o estado: ");
  scanf("%s", estado); //defina a letra para o estado

  printf("Cidade: ");
  getchar(); //limpa o buffer (\n) e permite com que a entrada de dados seja liberada
  fgets(cidade, sizeof(cidade), stdin); //utilizado para ler frases inteiras

  printf("População: "); 
  scanf ("%d", &populacao); //usuario preenche a informarção

  printf("Aréa: ");
  scanf ("%f", &area); //usuario insere a area da cidade

  printf ("Pib: ");
  scanf("%f", &pib);
  
  // Área de saída de dados
  printf("\nNumero da carta: %s\n", numero_carta); //imprima o numero de carta definido
  printf("Estado: %s\n", estado); //imprima a letra definida para a carta
  printf("Código: %s%s\n", estado, numero_carta); //define o código da carta
  printf("Cidade: %s", cidade); //saida do Fgets
  printf("População: %d \n", populacao); //imprime a quantidade de moradores da cidade
  printf("Aréa: %f\n", area); //imprime a area da cidade
  printf("Pib: %.2f \n", pib);


  //carta 2

  
  // Área para entrada de dados
  
  printf("\nEscolha a numeração de 01 a 04 para a carta: ");
  scanf("%s", numero_carta); //defina o nuemro da carta

  printf("Escoolh uma letra de A a H para definir o estado: ");
  scanf("%s", estado); //defina a letra para o estado

  printf("Cidade: ");
  getchar(); //limpa o buffer (\n) e permite com que a entrada de dados seja liberada
  fgets(cidade, sizeof(cidade), stdin); //utilizado para ler frases inteiras

  printf("População: "); 
  scanf ("%d", &populacao); //usuario preenche a informarção

  printf("Aréa: ");
  scanf ("%f", &area); //usuario insere a area da cidade

  printf ("Pib: ");
  scanf("%f", &pib);
  
  // Área de saída de dados
  printf("\nNumero da carta: %s\n", numero_carta); //imprima o numero de carta definido
  printf("Estado: %s\n", estado); //imprima a letra definida para a carta
  printf("Código: %s%s\n", estado, numero_carta); //define o código da carta
  printf("Cidade: %s", cidade); //saida do Fgets
  printf("População: %d \n", populacao); //imprime a quantidade de moradores da cidade
  printf("Aréa: %f\n", area); //imprime a area da cidade
  printf("Pib: %.2f\n", pib);


  
   return 0;
 


} 
