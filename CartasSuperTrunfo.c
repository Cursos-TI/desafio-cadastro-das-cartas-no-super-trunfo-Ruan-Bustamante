#include <stdio.h>

int main(){
    struct Carta // Define estruta das cartas com as suas variáveis
    {
        char nome[50];
        char estado;
        char codigo[4];
        unsigned long int populacao;
        float area;
        float pib;
        int num_ponto_tur;
        float dens_pop;
        float pib_per_capta;
        float super_poder;
    };
    
    // Começo do programa
    printf("Bem vindo ao Super Trunfo de Países!\n\n");

    struct Carta carta1; // Definindo a primeira carta

    printf("Vamos definir os valores da carta 1\n");

    printf("Digite o nome da cidade:\n");
    scanf("%s", carta1.nome);

    printf("Digite o estado da cidade:\n");
    scanf(" %c", &carta1.estado);

    printf("Digite o codigo da cidade:\n");
    scanf("%s", carta1.codigo);

    printf("Digite a população da cidade:\n");
    scanf("%lu", &carta1.populacao);

    printf("Digite a area da cidade:\n");
    scanf("%f", &carta1.area);

    printf("Digite o PIB da cidade:\n");
    scanf("%f", &carta1.pib);

    printf("Digite o numero de pontos turisticos da cidade:\n");
    scanf("%i", &carta1.num_ponto_tur);

    // Calculos para a carta1
    carta1.dens_pop = carta1.populacao / carta1.area;
    carta1.pib_per_capta = carta1.pib / carta1.populacao;
    carta1.super_poder = (float)carta1.populacao + carta1.area + carta1.pib + (float)carta1.num_ponto_tur + carta1.pib_per_capta + (1.0f / carta1.dens_pop);

    struct Carta carta2; // Definindo a segunda carta

    printf("Vamos definir os valores da carta 2\n");

    printf("Digite o nome da cidade:\n");
    scanf("%s", carta2.nome);

    printf("Digite o estado da cidade:\n");
    scanf(" %c", &carta2.estado);

    printf("Digite o codigo da cidade:\n");
    scanf("%s", carta2.codigo);

    printf("Digite a população da cidade:\n");
    scanf("%lu", &carta2.populacao);

    printf("Digite a area da cidade:\n");
    scanf("%f", &carta2.area);

    printf("Digite o PIB da cidade:\n");
    scanf("%f", &carta2.pib);

    printf("Digite o numero de pontos turisticos da cidade:\n");
    scanf("%i", &carta2.num_ponto_tur);

    // Calculos para a carta2
    carta2.dens_pop = carta2.populacao / carta2.area;
    carta2.pib_per_capta = carta2.pib / carta2.populacao;
    carta2.super_poder = (float)carta2.populacao + carta2.area + carta2.pib + (float)carta2.num_ponto_tur + carta2.pib_per_capta + (1.0f / carta2.dens_pop);

    // Exibição dos dados das cartas
    printf("\nOk! Então temos a carta 1 com esses dados:\n");
    printf("Nome da cidade: %s\n", carta1.nome);
    printf("Estado: %c\n", carta1.estado);
    printf("Codigo: %s\n", carta1.codigo);
    printf("População: %lu\n", carta1.populacao);
    printf("Area: %.2f km2\n", carta1.area);
    printf("PIB: %.2f bilhoes de reais\n", carta1.pib);
    printf("Numero de pontos turisticos: %i\n", carta1.num_ponto_tur);
    printf("Densidade Populacional: %.2f\n", carta1.dens_pop);
    printf("PIB per capta: %.2f\n", carta1.pib_per_capta);
    printf("SUPER PODER: %.2f\n", carta1.super_poder);

    printf("\nE temos a carta 2 com esses dados:\n");
    printf("Nome da cidade: %s\n", carta2.nome);
    printf("Estado: %c\n", carta2.estado);
    printf("Codigo: %s\n", carta2.codigo);
    printf("População: %lu\n", carta2.populacao);
    printf("Area: %.2f km2\n", carta2.area);
    printf("PIB: %.2f bilhoes de reais\n", carta2.pib);
    printf("Numero de pontos turisticos: %i\n", carta2.num_ponto_tur);
    printf("Densidade Populacional: %.2f\n", carta2.dens_pop);
    printf("PIB per capta: %.2f\n", carta2.pib_per_capta);
    printf("SUPER PODER: %.2f\n", carta2.super_poder);

    // Comparação dos valores das cartas
    printf("\n\nComparando as cartas:\n");
    printf("População: Carta1 venceu (%d)\n", carta1.populacao > carta2.populacao);
    printf("Area: Carta1 venceu (%d)\n", carta1.area > carta2.area);
    printf("PIB: Carta1 venceu (%d)\n", carta1.pib > carta2.pib);
    printf("Ponstos Turisticos: Carta1 venceu (%d)\n", carta1.num_ponto_tur > carta2.num_ponto_tur);
    printf("Densidade Populacional: Carta1 venceu (%d)\n", carta1.dens_pop < carta2.dens_pop);
    printf("PIB per capta: Carta1 venceu (%d)\n", carta1.pib_per_capta > carta2.pib_per_capta);
    printf("SUPER PODER: Carta1 venceu (%d)\n", carta1.super_poder > carta2.super_poder);

    return 0;
}
