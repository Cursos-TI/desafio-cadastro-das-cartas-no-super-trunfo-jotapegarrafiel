#include <stdio.h>

int main(){

    char estado, estado2, codigo[4], codigo2[4] , cidade2[40] ,cidade[40];
    int pontosTuristicos, pontosTuristicos2;
    float pib, pib2, area, area2 ,populacao, populacao2;

    // Apresentação do jogo
    printf("Bem vindo ao Super Trunfo!\n");
    printf("O jogo de cartas que testa seus conhecimentos sobre as cidades do Brasil.\n");
    printf("Você irá escolher duas cartas e comparar os atributos de cada uma delas.\n");
    printf("O jogador que tiver o maior atributo vence a rodada.\n");
    printf("O jogo acaba quando um dos jogadores ficar sem cartas.\n");
    printf("Vamos começar!\n");

    // Menu de opções
    printf("Escolha uma opção:\n");
    printf("1 - Iniciar o jogo\n");
    printf("2 - Sair do jogo\n");
    

    int opcao;
    scanf(" %d", &opcao);
    if (opcao < 1 || opcao > 2){
        printf("Opção inválida! Tente novamente.\n");
    }
    switch (opcao){
    case 1:
    // Solicitando os dados da primeira carta primeira carta
    printf("---------------------------");
    printf("Iniciando o jogo...\n");
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

    // Calculando a densidade demográfica e o PIB per capita
    float densidadeDemografica = populacao / area;
    float densidadeDemografica2 = populacao2 / area2;
    float pibPerCapita = pib / populacao;
    float pibPerCapita2 = pib2 / populacao2;
    
    printf("---------- Dados da carta 1 ----------\n");
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", codigo);
    printf("Cidade: %s", cidade);
    printf("População: %.2f habitantes\n", populacao);
    printf("Área total: %.3f km²\n", area);
    printf("PIB: %.2f\n", pib);
    printf("Pontos turísticos: %d\n", pontosTuristicos);
    printf("Densidade demográfica: %.2f habitantes/km²\n", densidadeDemografica);
    printf("PIB per capita: %.2f\n", pibPerCapita);
    
    printf("---------- Dados da carta 2 ----------\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s", cidade2);
    printf("População: %.2f habitantes\n", populacao2);
    printf("Área total: %.3f km²\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos turísticos: %d\n", pontosTuristicos2);
    printf("Densidade demográfica: %.2f habitantes/km²\n", densidadeDemografica2);
    printf("PIB per capita: %.2f\n", pibPerCapita2);

    // Comparando os atributos das cartas
    while (opcao == 1){
        printf("---------- Vamos comparar os atributos ----------\n");
        printf("Escolha qual atributo deseja comparar:\n");
        printf("1 - População\n");
        printf("2 - Área\n");
        printf("3 - PIB\n");
        printf("4 - Pontos turísticos\n");
        printf("5 - Densidade demográfica\n");
        scanf(" %d", &opcao);
        switch (opcao){
        case 1:
            if(populacao > populacao2){
                printf("O jogador 1 venceu a rodada!\n");
                printf("%f\n", populacao);
            }else if(populacao < populacao2){
                printf("O jogador 2 venceu a rodada!\n");
                printf("%f\n", populacao2);
            }else{
                printf("Empate!\n");
            }
            break;
        case 2:
            if(area > area2){
                printf("O jogador 1 venceu a rodada!\n");
                printf("%.2f\n", area);
            } else if (area < area2){
                printf("O jogador 2 venceu a rodada!\n");
                printf("%.2f\n", area2);
            } else{
                printf("Empate!\n");
            }
            break;
        case 3:
            if(pib > pib2){
                printf("O jogador 1 venceu a rodada!\n");
                printf("%.2f\n", pib);
            } else if (pib < pib2){
                printf("O jogador 2 venceu a rodada!\n");
                printf("%.2f\n", pib2);
            } else{
                printf("Empate!\n");
            }
            break;
        case 4:    
            if (pontosTuristicos > pontosTuristicos2){
                printf("O jogador 1 venceu a rodada!\n");
                printf("%d\n", pontosTuristicos);
            } else if (pontosTuristicos < pontosTuristicos2){
                printf("O jogador 2 venceu a rodada!\n");
                printf("%d\n", pontosTuristicos2);
            } else{
                printf("Empate!\n");
            }
            break;
        case 5:
            if (densidadeDemografica < densidadeDemografica2){
                printf("O jogador 1 venceu a rodada!\n");
                printf("%.2f habitantes/km²\n", densidadeDemografica);
            } else if (densidadeDemografica > densidadeDemografica2){
                printf("O jogador 2 venceu a rodada!\n");
                printf("%.2f habitantes/km²\n", densidadeDemografica2);
            } else{
                printf("Empate!\n");
            }
            break;
        return 0;
        }
        break;
        case 2:
            // Mensagem de despedida
            printf("Obrigado por jogar! Até a próxima!\n");
            printf("Desenvolvido por: João Pedro Garrafiel\n");
            return 0; 
    }
    }
    
    
}