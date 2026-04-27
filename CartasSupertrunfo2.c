#include <stdio.h>
int main(){
    int populacao, turistico, populacao2, turistico2;
    float area, pib, area2, pib2;
    char estado, estado2;
    char codigo[20], codigo2[20];
    char cidade[50], cidade2[50];
    float densidade, densidade2, pibper, pibper2;
    

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

    densidade = (float) populacao / area;
    pibper = (float) pib / populacao;


    printf("\n");
    printf("Carta 2\n");
    printf("Estado: ");
    scanf(" %c", &estado2);

    printf("Código: ");
    scanf(" %s", &codigo2);

    printf("Nome da Cidade: ");
    scanf(" %s", &cidade2);

    printf("População Total: ");
    scanf(" %d", &populacao2);

    printf("Area Total em Km²: ");
    scanf(" %f", &area2);

    printf("PIB: ");
    scanf(" %f", &pib2);

    printf("Pontos Turísticos: ");
    scanf(" %d", &turistico2);

    densidade2 = (float) populacao2 / area2;
    pibper2 = (float) pib2 / populacao2;


    printf("--------CARTA 1-------\n");
    printf("Estado: %C\n", estado);
    printf("Codigo: %s\n", codigo);
    printf("Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Area Total Km²: %f\n", area);
    printf("PIB: %f\n", pib);
    printf("Pontos: %d\n", turistico);
    printf("Densidade: %f\n", densidade);
    printf("PIB Per capta: %f\n", pibper);

    printf("\n");

    printf("--------CARTA 2-------\n");

    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Area Total Km²: %f\n", area2);
    printf("PIB: %f\n", pib2);
    printf("Pontos: %d\n", turistico2);
    printf("Densidade: %f\n", densidade2);
    printf("PIB Per capta: %f\n", pibper2);

    return 0;
}
