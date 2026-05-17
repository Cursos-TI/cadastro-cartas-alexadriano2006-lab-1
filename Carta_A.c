#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
 
  char numero_carta[3]; //Defina o numero da carta
  char estado[2]; // escolha uma letra 
  char codigo[4]; //o código da carta é definido pelo usuario, sendo a junção de:  nuemero da carta + letra selecionada
  char cidade[50];
  unsigned long long int populacao;
  float area;
  float pib;
  float densidade_populacional; //populacao dividida pela area: populacao / area
  float pib_percapita; // PIB dividido pela populacao: pib / populacao
  int turismo;

  float super_poder; //soma as atribuições da carta

  
  // Área para entrada de dados

  printf("Escolha a numeração de 01 a 04 para a carta: ");
  scanf("%s", numero_carta); //defina o nuemro da carta

  printf("Escoolha uma letra de A a H para definir o estado: ");
  scanf("%s", estado); //defina a letra para o estado

  printf("Cidade: ");
  getchar(); //limpa o buffer (\n) e permite com que a entrada de dados seja liberada
  fgets(cidade, sizeof(cidade), stdin); //utilizado para ler frases inteiras

  printf("População: "); 
  scanf ("%llu", &populacao); //usuario preenche a informarção

  printf("Aréa: ");
  scanf ("%f", &area); //usuario insere a area da cidade

  printf ("Pib: ");
  scanf("%f", &pib);
  
  printf("Quantidade de pontos turisticos: ");
  scanf("%d", &turismo);


  densidade_populacional = populacao / area;

  pib_percapita = pib / populacao;


  super_poder = populacao + area + pib + turismo + densidade_populacional + pib_percapita + turismo;
  
  // Área de saída de dados
  printf("\nNumero da carta: %s\n", numero_carta); //imprima o numero de carta definido
  printf("Estado: %s\n", estado); //imprima a letra definida para a carta
  printf("Código: %s%s\n", estado, numero_carta); //define o código da carta
  printf("Cidade: %s", cidade); //saida do Fgets
  printf("População: %llu \n", populacao); //imprime a quantidade de moradores da cidade
  printf("Aréa: %.2f\n", area); //imprime a area da cidade
  printf("Pib: %.2f\n", pib);
  printf("Quantidade de pontos turisticos: %d\n", turismo);

  //resultado dos cauculos
  printf("Densidade populacional: %.2f", densidade_populacional);
  printf("Pib per capita: %.2f\n", pib_percapita);

  //super poder

  printf("Super poder: %.7f\n", super_poder);





  //carta 2


  // Área para entrada de dados
  char numero_carta2[3]; //Define a cidade
  char estado2[2];
  char codigo2[4];
  char cidade2[50];
  unsigned long long int populacao2;
  float area2;
  float pib2;
  float densidade_populacional2;
  float pib_percapita2;
  int turismo2;
  float super_poder2;
  
  printf("\nEscolha a numeração de 01 a 04 para a carta: ");
  scanf("%s", numero_carta2); //defina o nuemro da carta

  printf("Escolha uma letra de A a H para definir o estado: ");
  scanf("%s", estado2); //defina a letra para o estado

  printf("Cidade: ");
  getchar();//limpa o buffer (\n) e permite com que a entrada de dados seja liberada
  fgets(cidade2, sizeof(cidade2), stdin); //utilizado para ler frases inteiras

  printf("População: "); 
  scanf ("%llu", &populacao2); //usuario preenche a informarção

  printf("Aréa: ");
  scanf ("%f", &area2); //usuario insere a area da cidade

  printf ("Pib: ");
  scanf("%f", &pib2);

  printf("Quantidade de pontos turisticos: ");
  scanf("%d", &turismo2);
  
  // Área de saída de dados
  printf("\nNumero da carta: %s\n", numero_carta2);//imprima o numero de carta definido
  printf("Estado: %s\n", estado2); //imprima a letra definida para a carta
  printf("Código: %s%s\n", estado2, numero_carta2); //define o código da carta
  printf("Cidade: %s", cidade2); //saida do Fgets
  printf("População: %llu \n", populacao2); //imprime a quantidade de moradores da cidade
  printf("Aréa: %.2f\n", area2); //imprime a area da cidade
  printf("Pib: %.2f\n", pib2);
  printf("Quantidade de pontos turisticos: %d\n",turismo2);

  densidade_populacional2 = populacao2 / area2;

  pib_percapita2 = pib2 / populacao2;
  
  super_poder2 = populacao2 + area2 + pib2 + turismo2 + densidade_populacional2 + pib_percapita2 + turismo2; 

  
  printf("Densidade populacional: %.2f\n", densidade_populacional2);
  printf("Pib per capita: %.2f\n", pib_percapita);


  //super poder

  printf("Super poder: %.7f\n", super_poder2);


// tabela comparação (utilizando operadores relacionais e operadores logicos)

int comparacao;


printf("Qual atribulto deseja comparar?\n");

printf("0. Sair\n");
printf("1. População\n");
printf("2. Area\n");
printf("3. PIB\n");
printf("4. Pontos turisticos\n");
printf("5. PIB per Capita\n");
printf("6. Densidade Populacional");
printf("7. Super poder\n");

printf("Escolha de 1 a 8: ");
scanf("%d", &comparacao);

switch (comparacao)
{
case 1:
   printf("%s: %llu\n", cidade, populacao);
   printf("%s: %llu\n", cidade2, populacao2);

  /* code */ if (populacao > populacao2) {
  printf("%s Venceu!", populacao);
 } 
      else if (populacao < populacao2) {
      printf("%s Venceu!", populacao2);
      }
          else {
           printf("EMPATE!\n");
           }
break;

case 2:
   printf("%s: %f\n", cidade, area);
   printf("%s: %f\n", cidade2, area2);

  /* code */if (area > area2) {
  printf("%s Venceu!", cidade);
      }
      
      else if (area < area2)
      {
        printf("%s Venceu!", cidade2);
      }    
          else {
           printf("EMPATE!\n");
           }
break;

case 3:
printf("%S: %f\n", cidade, pib);
printf("%s: %f\n", cidade, pib2);

  /* code */if (pib > pib2) {
  printf("%s Venceu!", cidade);
 } 
      else if (pib < pib2) {
      printf("%s Venceu!", cidade2);
      }
          else {
           printf("Empate!\n");
           }
break;

case 4:
  printf("%s: %d\n", cidade, turismo);
  printf("%s: %d\n", cidade2, turismo2);

  /* code */if (turismo > turismo2) {
  printf("%s venceu!", cidade);
 } 
      else if (turismo < turismo2) {
      printf("%s venceu!", cidade2);
      }
      
          else {
           printf("Empate!");
           }
break;

case 5:\
  printf("%s: %f\n", cidade, pib_percapita);
  printf("%s: %f\n", cidade2, pib_percapita2);


  /* code */if (pib_percapita > pib_percapita2) {
  printf("%s Venceu!", cidade);
 } 
      else if (pib_percapita < pib_percapita2) {
      printf("%s Venceu!", cidade2);
      }
      
          else {
           printf("Empate!\n");
           }

  break;

case 6:
  printf("%s: %f\n", cidade, densidade_populacional);
  printf("%s: %f\n", cidade, densidade_populacional);

  /* code */if (densidade_populacional < densidade_populacional2) {
  printf("%s Venceu!", cidade);
 } 
      else if (densidade_populacional > densidade_populacional2) {
      printf("%s venceu!", cidade2);
      }
      
          else if (densidade_populacional == densidade_populacional) {
           printf("Emapate!\n");
           }

break;

case 7:
 printf("%s: %f\n", cidade, super_poder);
 printf("%s: %f\n", cidade, super_poder2);
           
 /* code */if (super_poder > super_poder2) {
  printf("%s Venceu!", cidade);
 } 
      else if (super_poder < super_poder2) {
      printf("%s Venceu!", cidade2);
      } else {
           printf("EMPATE!");
       }

break;

default:
printf("Saindo...");
break;
}


 }