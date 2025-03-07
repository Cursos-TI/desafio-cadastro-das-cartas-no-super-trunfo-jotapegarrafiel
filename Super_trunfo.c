#include <stdio.h>

int main(){

    char estado, estado2, codigo[4], codigo2[4] , cidade2[40] ,cidade[40];
    int pontosTuristicos, pontosTuristicos2;
    float pib, pib2, area, area2 ,populacao, populacao2;

    // Solicitando os dados da primeira carta primeira carta
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

    // Solicitando os dados da segunda carta
    printf("Escolha uma letra de 'A' a 'H'\n");
    scanf(" %c", &estado2);
    
    printf("Escolha um número de 01 a 04 combinando com a letra escolhida acima. EX: A01, B03\n");
    scanf(" %s", codigo2);
    getchar();

    printf("Nome da cidade\n");
    fgets(cidade2, sizeof(cidade2), stdin);

    printf("População total da cidade\n");
    scanf(" %f", &populacao2);

    printf("Área total da cidade 'km²'\n");
    scanf(" %f", &area2);

    printf("PIB (Produto Interno Bruto) da cidade\n");
    scanf(" %f", &pib2);

    printf("Número total de pontos turísticos da cidade\n");
    scanf(" %d", &pontosTuristicos2);
    
    printf("---------- Dados da carta 1 ----------\n");
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", codigo);
    printf("Cidade: %s", cidade);
    printf("População: %.2f habitantes\n", populacao);
    printf("Área total: %.3f km²\n", area);
    printf("PIB: %.2f\n", pib);
    printf("Pontos turísticos: %d\n", pontosTuristicos);
    
    printf("---------- Dados da carta 2 ----------\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s", cidade2);
    printf("População: %.2f habitantes\n", populacao2);
    printf("Área total: %.3f km²\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos turísticos: %d\n", pontosTuristicos2);

    return 0;
}