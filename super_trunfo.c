#include <stdio.h>

int main(){

    //Definição das variáveis das Cartas 01 e 02:
    char estado01, estado02;
    char codigo01[20], codigo02[20];
    char nome_cidade01[50], nome_cidade02[50];
    int populacao01, populacao02;
    float area01, area02;
    float pib01, pib02;
    int pontos_turisticos01, pontos_turisticos02;
    float densidadepopulacional01, densidadepopulacional02;
    float PIB_per_capita01, PIB_per_capita02;

    // Entrada dos dados da Carta 01:

    printf("*** QUALIFICAÇÃO DA CARTA 01 ***\n");
    printf("Digite a letra que representa o Estado da Carta 01 (A - H): ");
    scanf(" %c", &estado01);
    printf("Digite o código do Estado da Carta 01: ");
    scanf("%s", &codigo01);
    printf("Digite o nome da Cidade da Carta 01: ");
    scanf("%s", &nome_cidade01);
    printf("Digite a população da Carta 01: ");
    scanf("%d", &populacao01);
    printf("Digite a área da Carta 01 (km²): ");
    scanf("%f", &area01);
    printf("Digite o PIB da Carta 01: ");
    scanf("%f", &pib01);
    printf("Digite o número dos pontos turísticos da Carta 01: ");
    scanf("%d", &pontos_turisticos01);

    // Entrada dos dados da Carta 02:

    printf("*** QUALIFICAÇÃO DA CARTA 02 ***\n");
    printf("Digite a letra que representa o Estado da Carta 02 (A - H): ");
    scanf(" %c", &estado02);
    printf("Digite o código do Estado da Carta 02: ");
    scanf("%s", &codigo02);
    printf("Digite o nome da Cidade da Carta 02: ");
    scanf("%s", &nome_cidade02);
    printf("Digite a população da Carta 02: ");
    scanf("%d", &populacao02);
    printf("Digite a área da Carta 02 (km²): ");
    scanf("%f", &area02);
    printf("Digite o PIB da Carta 02: ");
    scanf("%f", &pib02);
    printf("Digite o número dos pontos turísticos da Carta 02: ");
    scanf("%d", &pontos_turisticos02);

    //Cálculo da Densidade Populacional da Carta 01 e da Carta 02:

    densidadepopulacional01 = populacao01 / area01;
    densidadepopulacional02 = populacao02 / area02;

    // Cálculo do PIB per capita da Carta 01 e da Carta 02:

    PIB_per_capita01 = pib01 / populacao01;
    PIB_per_capita02 = pib02 / populacao02;
    

    //  Exibição dos dados fornecidos pelo usuário da Carta 01 e da Carta 02

    printf("*** CARTA 01 (%s) ***\n", nome_cidade01);
    printf("Estado: %c\n", estado01);
    printf("Código: %s\n", codigo01);
    printf("Cidade: %s\n", nome_cidade01);
    printf("População: %d habitantes \n", populacao01);
    printf("Área: %.2f km²\n", area01);
    printf("PIB: %.2f\n", pib01);
    printf("Número de pontos turísticos: %d\n", pontos_turisticos01);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadepopulacional01);
    printf("PIB per capita: %.2f bilhões de reais\n", PIB_per_capita01);

    printf("*** CARTA 02 (%s) ***\n", nome_cidade02);
    printf("Estado: %c\n", estado02);
    printf("Código: %s\n", codigo02);
    printf("Cidade: %s\n", nome_cidade02);
    printf("População: %d habitantes \n", populacao02);
    printf("Área: %.2f km²\n", area02);
    printf("PIB: %.2f bilhões de reais\n", pib02);
    printf("Número de pontos turísticos: %d\n", pontos_turisticos02);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadepopulacional02);
    printf("PIB per capita é: %.2f bilhões de reais\n", PIB_per_capita02);

    return 0;
}
