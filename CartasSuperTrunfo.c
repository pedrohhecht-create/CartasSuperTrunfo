#include <stdio.h>

int main(){
    printf("Desafio SuperTrunfo!\n");
    
    printf("NÍVEL NOVATO\n");

    printf("CARTA 1\n");

    char estado1 = 'A';
    char codigo1[4] = "A01";
    char cidade1[50] = "Sao Paulo";
    int populacao1 = 12325000;
    float area1 = 1521.11;
    float PIB1 = 699.28;
    int pontosturisticos1 = 50;

    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhoes\n", PIB1);
    printf("Pontos Turisticos: %d\n", pontosturisticos1);

    printf("CARTA 2\n");


    char estado2 = 'B';
    char codigo2[4] = "B02";
    char cidade2[50] = "Rio de Janeiro";
    int populacao2 = 6748000;
    float area2 = 1200.25;
    float PIB2 = 300.50;
    int pontosturisticos2 = 30;

    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhoes\n", PIB2);
    printf("Pontos Turisticos: %d\n", pontosturisticos2);
    

    return 0;
} 


