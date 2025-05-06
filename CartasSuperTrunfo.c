#include <stdio.h>

float calculatePopulationDensity(unsigned int population, float area)
{
  return (float) population / area;
}

float calculatePIBPerCapita(float PIB, unsigned int population)
{
  return (PIB * 1000000000.0f) / (float) population;
}

float calculateSuperPower(unsigned int population, float area, int touristicPoints, float PIBPerCapita, float populationDensity) 
{
  return (float) population + area + (float) touristicPoints + PIBPerCapita - populationDensity;
}

int calculateIntegerAttributeWinner(int firstCardAttribute, int secondCardAttribute)
{
  return firstCardAttribute > secondCardAttribute ? 1 : 0;
}

int calculateFloatAttributeWinner(float firstCardAttribute, float secondCardAttribute)
{
  return firstCardAttribute > secondCardAttribute ? 1 : 0;
}

int calculatePopulationDensityWinner(float firstCardPopulationDensity, float secondCardPopulationDensity)
{
  return firstCardPopulationDensity < secondCardPopulationDensity ? 1 : 0;
}

int getCardNumber(int winner)
{
  return winner == 1 ? 1 : 2;
}

int main()
{
  char firstCardState;
  char firstCardCode[3];
  char firstCardCity[20];
  unsigned int firstCardPopulation;
  float firstCardArea;
  float firstCardPIB;
  int firstCardTouristicPoints;
  float firstCardPopulationDensity;
  float firstCardPIBperCapita;
  float firstCardSuperPower;

  char secondCardState;
  char secondCardCode[3];
  char secondCardCity[20];
  unsigned int secondCardPopulation;
  float secondCardArea;
  float secondCardPIB;
  int secondCardTouristicPoints;
  float secondCardPopulationDensity;
  float secondCardPIBperCapita;
  float secondCardSuperPower;

  int populationWinner;
  int areaWinner;
  int PIBWinner;
  int touristicPointsWinner;
  int populationDensityWinner;
  int PIBPerCapitaWinner;
  int superPowerWinner;

  printf("Vamos começar nosso jogo, primeiro pediremos que digite as informações da primeira carta.\n");

  printf("\nDigite o Estado da primeira carta:");
  scanf("%c", &firstCardState);

  printf("Digite o Código da primeira carta: ");
  scanf(" %s", firstCardCode);

  printf("Digite o Nome da cidade da primeira carta: ");
  scanf(" %s", firstCardCity);

  printf("Digite o número de habitantes da cidade da primeira carta: ");
  scanf(" %u", &firstCardPopulation);

  printf("Digite a área da cidade em quilômetros quadrados da primeira carta: ");
  scanf(" %f", &firstCardArea);

  printf("Digite o Produto Interno Bruto da cidade da primeira carta: ");
  scanf(" %f", &firstCardPIB);

  printf("Digite a quantidade de pontos turísticos na cidade da primeira carta: ");
  scanf(" %d", &firstCardTouristicPoints);

  firstCardPopulationDensity = calculatePopulationDensity(firstCardPopulation, firstCardArea);
  firstCardPIBperCapita = calculatePIBPerCapita(firstCardPIB, firstCardPopulation);
  firstCardSuperPower = calculateSuperPower(firstCardPopulation, firstCardArea, firstCardTouristicPoints, firstCardPIBperCapita, firstCardPopulationDensity);

  printf("\nCarta 1:\n");
  printf("Estado: %c\n", firstCardState);
  printf("Código: %s\n", firstCardCode);
  printf("Nome da Cidade: %s\n", firstCardCity);
  printf("População: %u\n", firstCardPopulation);
  printf("Área: %.2f km²\n", firstCardArea);
  printf("PIB: %.2f bilhões de reais\n", firstCardPIB);
  printf("Número de Pontos Turísticos: %d\n", firstCardTouristicPoints);
  printf("Densidade Populacional: %.2f hab/km²\n", firstCardPopulationDensity);
  printf("PIB per Capita: %.2f reais\n", firstCardPIBperCapita);

  printf("\nAgora vamos para a segunda carta: \n");

  printf("\nDigite o Estado da segunda carta:");
  scanf("%c", &secondCardState);

  printf("Digite o Código da segunda carta: ");
  scanf(" %s", secondCardCode);

  printf("Digite o Nome da cidade da segunda carta: ");
  scanf(" %s", secondCardCity);

  printf("Digite o número de habitantes da cidade da segunda carta: ");
  scanf(" %u", &secondCardPopulation);

  printf("Digite a área da cidade em quilômetros quadrados da segunda carta: ");
  scanf(" %f", &secondCardArea);

  printf("Digite o Produto Interno Bruto da cidade da segunda carta: ");
  scanf(" %f", &secondCardPIB);

  printf("Digite a quantidade de pontos turísticos na cidade da segunda carta: ");
  scanf(" %d", &secondCardTouristicPoints);

  secondCardPopulationDensity = calculatePopulationDensity(secondCardPopulation, secondCardArea);
  secondCardPIBperCapita = calculatePIBPerCapita(secondCardPIB, secondCardPopulation);
  secondCardSuperPower = calculateSuperPower(secondCardPopulation, secondCardArea, secondCardTouristicPoints, secondCardPIBperCapita, secondCardPopulationDensity);

  printf("\nCarta 2:\n");
  printf("Estado: %c\n", secondCardState);
  printf("Código: %s\n", secondCardCode);
  printf("Nome da Cidade: %s\n", secondCardCity);
  printf("População: %u\n", secondCardPopulation);
  printf("Área: %.2f km²\n", secondCardArea);
  printf("PIB: %.2f bilhões de reais\n", secondCardPIB);
  printf("Número de Pontos Turísticos: %d\n", secondCardTouristicPoints);
  printf("Densidade Populacional: %.2f hab/km²\n", secondCardPopulationDensity);
  printf("PIB per Capita: %.2f reais\n", secondCardPIBperCapita);

  populationWinner = calculateIntegerAttributeWinner(firstCardPopulation, secondCardPopulation);
  areaWinner = calculateFloatAttributeWinner(firstCardArea, secondCardArea);
  PIBWinner = calculateFloatAttributeWinner(firstCardPIB, secondCardPIB);
  touristicPointsWinner = calculateIntegerAttributeWinner(firstCardTouristicPoints, secondCardTouristicPoints);
  populationDensityWinner = calculatePopulationDensityWinner(firstCardPopulationDensity, secondCardPopulationDensity);
  PIBPerCapitaWinner = calculateFloatAttributeWinner(firstCardPIBperCapita, secondCardPIBperCapita);
  superPowerWinner = calculateFloatAttributeWinner(firstCardSuperPower, secondCardSuperPower);

  printf("\nComparação de Cartas:\n");
  printf("População: Carta %i venceu (%i)\n", getCardNumber(populationWinner), populationWinner);
  printf("Área: Carta %i venceu (%i)\n", getCardNumber(areaWinner), areaWinner);
  printf("PIB: Carta %i venceu (%i)\n", getCardNumber(PIBWinner), PIBWinner);
  printf("Pontos Turísticos: Carta %i venceu (%i)\n", getCardNumber(touristicPointsWinner), touristicPointsWinner);
  printf("Densidade Populacional: Carta %i venceu (%i)\n", getCardNumber(populationDensityWinner), populationDensityWinner);
  printf("PIB per Capita: Carta %i venceu (%i)\n", getCardNumber(PIBPerCapitaWinner), PIBPerCapitaWinner);
  printf("Super Poder: Carta %i venceu (%i)\n", getCardNumber(superPowerWinner), superPowerWinner);

  return 0;
}
