#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
 
  char numero_carta[3]; //Defina o numero da carta
  char estado[2]; // escolha uma letra 
  char codigo[4]; //o código da carta é definido pelo usuario, sendo a junção de:  nuemero da carta + letra selecionada
  unsigned char cidade[50];
  int populacao;
  float area;
  float pib;
  float densidade_populacional; //populacao dividida pela area: populacao / area
  float pib_percapita; // PIB dividido pela populacao: pib / populacao
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

  float densidade_populacional; //populacao dividida pela area: populacao / area
  float pib_percapita; // PIB dividido pela populacao: pib / populacao


  densidade_populacional = populacao / area;

  pib_percapita = pib / populacao;
  
  // Área de saída de dados
  printf("\nNumero da carta: %s\n", numero_carta); //imprima o numero de carta definido
  printf("Estado: %s\n", estado); //imprima a letra definida para a carta
  printf("Código: %s%s\n", estado, numero_carta); //define o código da carta
  printf("Cidade: %s", cidade); //saida do Fgets
  printf("População: %d \n", populacao); //imprime a quantidade de moradores da cidade
  printf("Aréa: %.2f\n", area); //imprime a area da cidade
  printf("Pib: %.2f\n", pib);

  //resultado dos cauculos
  printf("Densidade populacional: %.2f\n", densidade_populacional);
  printf("Pib per capita: %.2f\n", pib_percapita);


  //carta 2


  // Área para entrada de dados
  char numero_carta2[3]; //Define a cidade
  char estado2[2];
  char codigo2[4];
  char cidade2[50];
  int populacao2;
  float area2;
  float pib2;
  float densidade_populacional2;
  float pib_percapita2;
  int turismo2;
  
  printf("\nEscolha a numeração de 01 a 04 para a carta: ");
  scanf("%s", numero_carta2); //defina o nuemro da carta

  printf("Escoolh uma letra de A a H para definir o estado: ");
  scanf("%s", estado2); //defina a letra para o estado

  printf("Cidade: ");
  getchar(); //limpa o buffer (\n) e permite com que a entrada de dados seja liberada
  fgets(cidade2, sizeof(cidade2), stdin); //utilizado para ler frases inteiras

  printf("População: "); 
  scanf ("%d", &populacao2); //usuario preenche a informarção

  printf("Aréa: ");
  scanf ("%f", &area2); //usuario insere a area da cidade

  printf ("Pib: ");
  scanf("%f", &pib2);
  
  // Área de saída de dados
  printf("\nNumero da carta: %s\n", numero_carta2); //imprima o numero de carta definido
  printf("Estado: %s\n", estado2); //imprima a letra definida para a carta
  printf("Código: %s%s\n", estado2, numero_carta2); //define o código da carta
  printf("Cidade: %s", cidade2); //saida do Fgets
  printf("População: %d \n", populacao2); //imprime a quantidade de moradores da cidade
  printf("Aréa: %f\n", area2); //imprime a area da cidade
  printf("Pib: %.2f\n", pib2);

  densidade_populacional2 = populacao / area;

  pib_percapita2 = pib / populacao;
  
  
  printf("Densidade populacional: %.2f", densidade_populacional);
  printf("Pib per capita: %.2f", pib_percapita);



  
   return 0;
 


} 
