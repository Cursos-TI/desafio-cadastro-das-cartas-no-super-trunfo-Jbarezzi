#include <stdio.h>

int main() {
  char firstCardState;
  char firstCardCode[3];
  char firstCardCity[20];
  int firstCardPopulation;
  float firstCardArea;
  float firstCardPIB;
  int firstCardTouristicPoints;

  char secondCardState;
  char secondCardCode[3];
  char secondCardCity[20];
  int secondCardPopulation;
  float secondCardArea;
  float secondCardPIB;
  int secondCardTouristicPoints;

  printf("Vamos começar nosso jogo, primeiro pediremos que digite as informações da primeira carta.\n");

  printf("Digite o Estado da primeira carta: ");
  scanf("%s", &firstCardState);

  printf("Digite o Código da primeira carta: ");
  scanf("%s", &firstCardCode);

  printf("Digite o Nome da cidade da primeira carta: ");
  scanf("%s", &firstCardCity);

  printf("Digite o número de habitantes da cidade da primeira carta: ");
  scanf("%d", &firstCardPopulation);

  printf("Digite a área da cidade em quilômetros quadrados da primeira carta: ");
  scanf("%f", &firstCardArea);

  printf("Digite o Produto Interno Bruto da cidade da primeira carta: ");
  scanf("%f", &firstCardPIB);

  printf("Digite a quantidade de pontos turísticos na cidade da primeira carta: ");
  scanf("%d", &firstCardTouristicPoints);

  printf("\nAgora vamos para a segunda carta: \n");

  printf("Digite o Estado da segunda carta: ");
  scanf("%s", &secondCardState);

  printf("Digite o Código da segunda carta: ");
  scanf("%s", &secondCardCode);

  printf("Digite o Nome da cidade da segunda carta: ");
  scanf("%s", &secondCardCity);

  printf("Digite o número de habitantes da cidade da segunda carta: ");
  scanf("%d", &secondCardPopulation);

  printf("Digite a área da cidade em quilômetros quadrados da segunda carta: ");
  scanf("%f", &secondCardArea);

  printf("Digite o Produto Interno Bruto da cidade da segunda carta: ");
  scanf("%f", &secondCardPIB);

  printf("Digite a quantidade de pontos turísticos na cidade da segunda carta: ");
  scanf("%d", &secondCardTouristicPoints);

  printf("Essas são as cartas:\n");

  printf("Carta 1:\n");
  printf("Estado: %c\n", firstCardState);
  printf("Código: %s\n", firstCardCode);
  printf("Nome da Cidade: %s\n", firstCardCity);
  printf("População: %d\n", firstCardPopulation);
  printf("Área: %f km²\n", firstCardArea); 
  printf("PIB: %f bilhões de reais\n", firstCardPIB);
  printf("Número de Pontos Turísticos: %d\n", firstCardTouristicPoints);

  printf("\nCarta 2:\n");
  printf("Estado: %c\n", secondCardState);
  printf("Código: %s\n", secondCardCode);
  printf("Nome da Cidade: %s\n", secondCardCity);
  printf("População: %d\n", secondCardPopulation);
  printf("Área: %f km²\n", secondCardArea); 
  printf("PIB: %f bilhões de reais\n", secondCardPIB);
  printf("Número de Pontos Turísticos: %d\n", secondCardTouristicPoints);
  
  return 0
}