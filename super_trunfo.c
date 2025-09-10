#include <stdio.h>
 int main () {
    char estado1[2], estado2[2];
    char codigo_carta1[4], codigo_carta2[4];
    char cidade1[20], cidade2[20];
    int populacao1, populacao2;
    float area1, area2; 
    float PIB1, PIB2;
    int pontos_turisticos1, pontos_turisticos2;


//primeira carta

    printf("Insira os dados da primeira carta. \n");

    printf("Escolha e digite uma letra de 'A' a 'H', para representar um dos oito estados: \n");
    scanf("%s", estado1);

    printf("Digite a primeira letra do estado escolhido seguida de um numero de '01' a '04': \n");
    scanf("%s", codigo_carta1);

    printf("Informe o nome da cidade escolhida: \n");
    scanf("%s", cidade1);

    printf("Informe o numero de habitantes da cidade: \n");
    scanf("%d", &populacao1);

    printf("Informe a area da cidade em quilometros quadrados: \n");
    scanf("%f", &area1);

    printf("Informe o PIB da cidade: \n");
    scanf("%f", &PIB1);

    printf("Informe quantos pontos turisticos da cidade escolhida possui: \n");
    scanf("%d", &pontos_turisticos1);

//segunda carta

    printf("Insira os dados da segunda carta. \n");

    printf("Escolha e digite uma letra de 'A' a 'H', para representar um dos oito estados: \n");
    scanf("%s", estado2);

    printf("Digite a primeira letra do estado escolhido seguida de um numero de '01' a '04': \n");
    scanf("%s", codigo_carta2);

    printf("Informe o nome da cidade escolhida: \n");
    scanf("%s", cidade2);

    printf("Informe o numero de habitantes da cidade: \n");
    scanf("%d", &populacao2);

    printf("Informe a area da cidade em quilometros quadrados: \n");
    scanf("%f", &area2);

    printf("Informe o PIB da cidade: \n");
    scanf("%f", &PIB2);

    printf("Informe quantos pontos turisticos da cidade escolhida possui: \n");
    scanf("%d", &pontos_turisticos2);

//imprimindo os resultados

    printf("Carta 1: \n");
    printf("Estado: %s \n", estado1);
    printf("Codigo: %s \n", codigo_carta1);
    printf("Nome da Cidade: %s \n", cidade1);
    printf("Populacao: %d \n", populacao1);
    printf("Area: %.2f \n", area1);
    printf("PIB: %.2f \n", PIB1);
    printf("Numero de Pontos Turisticos: %d \n", pontos_turisticos1);

    printf("Carta 2: \n");
    printf("Estado: %s \n", estado2);
    printf("Codigo: %s \n", codigo_carta2);
    printf("Nome da Cidade: %s \n", cidade2);
    printf("Populacao: %d \n", populacao2);
    printf("Area: %.2f \n", area2);
    printf("PIB: %.2f \n", PIB2);
    printf("Numero de Pontos Turisticos: %d \n", pontos_turisticos2);


    return 0;
 }