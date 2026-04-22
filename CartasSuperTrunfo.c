#include <stdio.h>
int main(){
    int populacao, turistico, populacao1, turistico1;
    float area, pib, area1, pib1;
    char estado, estado1;
    char codigo[20], codigo1[20];
    char cidade[50], cidade1[50];

    printf("Carta 1\n");

    printf("Estado: ");
    scanf(" %c", &estado);

    printf("Código: ");
    scanf(" %s", &codigo);

    printf("Nome da Cidade: ");
    scanf(" %s", &cidade);

    printf("População Total: ");
    scanf(" %d", &populacao);

    printf("Area Total em Km²: ");
    scanf(" %f", &area);

    printf("PIB: ");
    scanf(" %f", &pib);

    printf("Pontos Turísticos: ");
    scanf(" %d", &turistico);

    printf("\n");
    printf("Carta 2\n");
    printf("Estado: ");
    scanf(" %c", &estado1);

    printf("Código: ");
    scanf(" %s", &codigo1);

    printf("Nome da Cidade: ");
    scanf(" %s", &cidade1);

    printf("População Total: ");
    scanf(" %d", &populacao1);

    printf("Area Total em Km²: ");
    scanf(" %f", &area1);

    printf("PIB: ");
    scanf(" %f", &pib1);

    printf("Pontos Turísticos: ");
    scanf(" %d", &turistico1);

    printf("--------CARTA 1-------");
    printf("Estado: %C\n", estado);
    printf("Codigo: %s\n", codigo);
    printf("Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Area Total Km²: %f\n", area);
    printf("PIB: %f\n", pib);
    printf("Pontos: %d\n", turistico);

    printf("\n");

    printf("--------CARTA 2-------\n");

    printf("Estado: %C\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Area Total Km²: %f\n", area1);
    printf("PIB: %f\n", pib1);
    printf("Pontos: %d\n", turistico1);

    return 0;
}
