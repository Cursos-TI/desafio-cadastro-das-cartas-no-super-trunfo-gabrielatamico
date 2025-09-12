#include <stdio.h>

int main () {
    char estado1[3], estado2[3];        
    char codigo_carta1[5], codigo_carta2[5]; 
    char cidade1[50], cidade2[50];      
    unsigned long int populacao1, populacao2;
    float area1, area2; 
    float PIB1, PIB2;
    int pontos_turisticos1, pontos_turisticos2;
    float densidade_populacional1, densidade_populacional2; 
    float PIB_per_capita1, PIB_per_capita2;  
    float super_poder1, super_poder2;

    // primeira carta
    printf("Insira os dados da primeira carta. \n");

    printf("Escolha e digite uma letra de 'A' a 'H': \n");
    scanf("%s", estado1);

    printf("Digite a primeira letra do estado escolhida seguida de um numero de '01' a '04': \n");
    scanf("%s", codigo_carta1);

    printf("Informe o nome da cidade escolhida: \n");
    scanf("%s", cidade1);

    printf("Informe o numero de habitantes da cidade: \n");
    scanf("%lu", &populacao1);

    printf("Informe a area da cidade em km²: \n");
    scanf("%f", &area1);

    printf("Informe o PIB da cidade: \n");
    scanf("%f", &PIB1);

    printf("Informe quantos pontos turisticos a cidade possui: \n");
    scanf("%d", &pontos_turisticos1);

    // calculos carta 1
    densidade_populacional1 = populacao1 / area1;
    PIB_per_capita1 = PIB1 / populacao1;
    super_poder1 = (float)populacao1 + area1 + PIB1 + (float)pontos_turisticos1 + PIB_per_capita1 + densidade_populacional1;

    // segunda carta
    printf("\nInsira os dados da segunda carta. \n");

    printf("Escolha e digite uma letra de 'A' a 'H': \n");
    scanf("%s", estado2);

    printf("Digite a primeira letra do estado escolhida seguida de um numero de '01' a '04': \n");
    scanf("%s", codigo_carta2);

    printf("Informe o nome da cidade escolhida: \n");
    scanf("%s", cidade2);

    printf("Informe o numero de habitantes da cidade: \n");
    scanf("%lu", &populacao2);

    printf("Informe a area da cidade em km²: \n");
    scanf("%f", &area2);

    printf("Informe o PIB da cidade: \n");
    scanf("%f", &PIB2);

    printf("Informe quantos pontos turisticos a cidade possui: \n");
    scanf("%d", &pontos_turisticos2);

    // calculos carta 2
    densidade_populacional2 = populacao2 / area2;
    PIB_per_capita2 = PIB2 / populacao2;
    super_poder2 = (float)populacao2 + area2 + PIB2 + (float)pontos_turisticos2 + PIB_per_capita2 + densidade_populacional2;

    // imprimindo os resultados
    printf("\nCarta 1:\n");
    printf("Estado: %s \n", estado1);
    printf("Codigo: %s \n", codigo_carta1);
    printf("Cidade: %s \n", cidade1);
    printf("Populacao: %lu \n", populacao1);
    printf("Area: %.2f km² \n", area1);
    printf("PIB: %.2f \n", PIB1);
    printf("Pontos Turisticos: %d \n", pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/km² \n", densidade_populacional1);
    printf("PIB per Capita: %.2f \n", PIB_per_capita1);

    printf("\nCarta 2:\n");
    printf("Estado: %s \n", estado2);
    printf("Codigo: %s \n", codigo_carta2);
    printf("Cidade: %s \n", cidade2);
    printf("Populacao: %lu \n", populacao2);
    printf("Area: %.2f km² \n", area2);
    printf("PIB: %.2f \n", PIB2);
    printf("Pontos Turisticos: %d \n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km² \n", densidade_populacional2);
    printf("PIB per Capita: %.2f \n", PIB_per_capita2);

    
    //comparacao de cartas

    printf("\n Comparacao de cartas (Atributo: Populacao): \n");
    
    if (populacao1 > populacao2)
    {
        printf("Carta 1 - %s: %lu \n", cidade1, populacao1);
        printf("Carta 2 - %s: %lu \n", cidade2, populacao2);
        printf("Resultado: Carta 1: %s venceu! \n", cidade1 );
    } else {
        printf("Carta 1 - %s: %lu \n", cidade1, populacao1);
        printf("Carta 2 - %s: %lu \n", cidade2, populacao2);
        printf("Resultado: Carta 2: %s venceu! \n", cidade2);
    }
    

    return 0;
}




