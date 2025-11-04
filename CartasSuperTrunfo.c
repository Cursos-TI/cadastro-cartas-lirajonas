#include <stdio.h>

int main () {

char estado1, estado2;
char codigo1[10], codigo2[10];
char cidade1[50], cidade2[50];
int populacao1, turisticos1, populacao2, turisticos2;
float area1, pib1, area2, pib2;

  printf("Dados da primeira carta: \n");

  printf("Informe o estado (uma letra de A a H): ");
  scanf("%c", &estado1);

  printf("Informe o código da carta (de 01 a 04): ");
  scanf("%s", &codigo1);
  getchar();

  printf("Informe o nome da cidade: ");
  fgets(cidade1, 50, stdin);

  printf("Informe o tamanho da população: ");
  scanf("%d", &populacao1);

  printf("Informe a área da cidade (em Km²): ");
  scanf("%f", &area1);

  printf("Informe o PIB da cidade: ");
  scanf("%f", &pib1);

  printf("Informe a quantidade de pontos turísticos: ");
  scanf("%d", &turisticos1);
  getchar();




  printf("Dados da segunda carta: \n");

  printf("Informe o estado (uma letra de A a H): ");
  scanf("%c", &estado2);

  printf("Informe o código da carta (de 01 a 04): ");
  scanf("%s", &codigo2);
  getchar();

  printf("Informe o nome da cidade: ");
  fgets(cidade2, 50, stdin);

  printf("Informe o tamanho da população: ");
  scanf("%d", &populacao2);

  printf("Informe a área da cidade (em Km²): ");
  scanf("%f", &area2);

  printf("Informe o PIB da cidade: ");
  scanf("%f", &pib2);

  printf("Informe a quantidade de pontos turísticos: ");
  scanf("%d", &turisticos2);



  printf("Carta 1:\n");
  printf("Estado: %c\n", estado1);
  printf("Código: %c%s\n", estado1, codigo1);
  printf("Nome da Cidade: %s", cidade1);
  printf("População: %d\n", populacao1);
  printf("Área: %.2f km²\n", area1);
  printf("PIB: %.2f bilhões de reais\n", pib1);
  printf("Número de pontos turísticos: %d\n", turisticos1);
  printf("\n");


  printf("Carta 2:\n");
  printf("Estado: %c\n", estado2);
  printf("Código: %c%s\n", estado2, codigo2);
  printf("Nome da Cidade: %s", cidade2);
  printf("População: %d\n", populacao2);
  printf("Área: %.2f km²\n", area2);
  printf("PIB: %.2f bilhões de reais\n", pib2);
  printf("Número de pontos turísticos: %d\n", turisticos2);

return(0);



    
}