#include <stdio.h>

int main(){

    char estado, codigo[4], cidade[40];
    int pontosTuristicos;
    float pib, area, populacao;

    // Solicitando o estado
    printf("Escolha uma letra de 'A' a 'H'\n");
    scanf(" %c", &estado);
    
    printf("Escolha um número de 01 a 04 combinando com a letra escolhida acima. EX: A01, B03\n");
    scanf(" %s", codigo);
    getchar();

    printf("Nome da cidade\n");
    fgets(cidade, sizeof(cidade), stdin);

    printf("População total da cidade\n");
    scanf(" %f", &populacao);

    printf("Área total da cidade 'km²'\n");
    scanf(" %f", &area);

    printf("PIB (Produto Interno Bruto) da cidade\n");
    scanf(" %f", &pib);

    printf("Número total de pontos turísticos da cidade\n");
    scanf(" %d", &pontosTuristicos);
    
    printf("---------- Dados da carta 1 ----------\n");
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", codigo);
    printf("Cidade: %s", cidade);
    printf("População: %.2f habitantes\n", populacao);
    printf("Área total: %.3f km²\n", area);
    printf("PIB: %.2f\n", pib);
    printf("Pontos turísticos: %d\n", pontosTuristicos);

    printf("-------------------------------------\n");

    printf("Escolha uma letra de 'A' a 'H'\n");
    scanf(" %c", &estado);
    
    printf("Escolha um número de 01 a 04 combinando com a letra escolhida acima. EX: A01, B03\n");
    scanf(" %s", codigo);
    getchar();

    printf("Nome da cidade\n");
    fgets(cidade, sizeof(cidade), stdin);

    printf("População total da cidade\n");
    scanf(" %f", &populacao);

    printf("Área total da cidade 'km²'\n");
    scanf(" %f", &area);

    printf("PIB (Produto Interno Bruto) da cidade\n");
    scanf(" %f", &pib);

    printf("Número total de pontos turísticos da cidade\n");
    scanf(" %d", &pontosTuristicos);
    
    printf("---------- Dados da carta 2 ----------\n");
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", codigo);
    printf("Cidade: %s", cidade);
    printf("População: %.2f habitantes\n", populacao);
    printf("Área total: %.3f km²\n", area);
    printf("PIB: %.2f\n", pib);
    printf("Pontos turísticos: %d\n", pontosTuristicos);

    return 0;
}