#include <stdio.h>

int main() {
    char codigo[5], cidade[50], estado[3];
    float populacao, pib;
    int pontosTuristicos;

    // Solicitar o código da carta
    printf("Código da carta. Exemplo (A01): ");
    scanf("%4s", codigo);  // Lê até 4 caracteres para evitar overflow
    getchar();  // Limpar o '\n' deixado no buffer após o scanf

    // Solicitar o estado
    printf("Estado (exemplo: SP): ");
    scanf("%2s", estado);  // Lê até 2 caracteres para o código do estado
    getchar();  // Limpar o '\n' deixado no buffer após o scanf

    // Solicitar o nome da cidade
    printf("Nome da cidade: ");
    scanf("%49s", cidade);  // Lê até 49 caracteres para evitar overflow no nome da cidade

    // Solicitar a população
    printf("Total da população (em milhões): ");
    scanf("%f", &populacao);

    // Solicitar o número de pontos turísticos
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos);

    // Solicitar o PIB
    printf("PIB (em bilhões): ");
    scanf("%f", &pib);

    // Exibir os dados
    printf("\n--- Dados da Carta ---\n");
    printf("Código da carta: %s\n", codigo);
    printf("Estado: %s\n", estado);
    printf("Cidade: %s\n", cidade);
    printf("População: %.2f milhões\n", populacao);  // Exibe a população com 2 casas decimais
    printf("Pontos turísticos: %d\n", pontosTuristicos);
    printf("PIB: %.2f bilhões\n", pib);  // Exibe o PIB com 2 casas decimais

    return 0;
}
