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
    
    struct Carta carta1 = { // Definindo a primeira carta com valores pré-definidos
        .nome = "São Paulo",
        .estado = "A",
        .codigo = "A01",
        .populacao = 12325000,
        .area = 1521.11,
        .pib = 699.28,
        .num_ponto_tur = 50
    };

    // Calculos para a carta1
    carta1.dens_pop = carta1.populacao / carta1.area;
    carta1.pib_per_capta = carta1.pib / carta1.populacao;
    carta1.super_poder = (float)carta1.populacao + carta1.area + carta1.pib + (float)carta1.num_ponto_tur + carta1.pib_per_capta + (1.0f / carta1.dens_pop);

    struct Carta carta2 = { // Definindo a segunda carta com valores pré-definidos
        .nome = "Rio de Janeiro",
        .estado = "B",
        .codigo = "B02",
        .populacao = 6748000,
        .area = 1200.25,
        .pib = 300.5,
        .num_ponto_tur = 30,
    };

    // Calculos para a carta2
    carta2.dens_pop = carta2.populacao / carta2.area;
    carta2.pib_per_capta = carta2.pib / carta2.populacao;
    carta2.super_poder = (float)carta2.populacao + carta2.area + carta2.pib + (float)carta2.num_ponto_tur + carta2.pib_per_capta + (1.0f / carta2.dens_pop);

    int escolha_usuario;

    printf("*** Bem vindo ao Super Trunfo Paises! ***\n\n");
    printf("Escolha um atributo para a batalha:\n");
    printf("1 - População\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Ponstos Turisticos\n");
    printf("5 - Densidade Populacional\n");
    printf("6 - PIB per capta\n");
    printf("7 - SUPER PODER\n");
    printf("Digite o número da sua escolha: ");
    scanf("%d", &escolha_usuario);
    printf("\n***Resultado da batalha***\n");

    // Exibe os dados para comparação
    switch (escolha_usuario)
    {
    case 1: //População (Maior vence)
        printf("Atributo: População\n");
        printf("Valores: Carta 1 (%lu) x Carta 2 (%lu)\n", carta1.populacao, carta2.populacao);
        if (carta1.populacao > carta2.populacao) {
            printf("Vencedor: Carta 1 (%s)!\n", carta1.nome);
        } else if (carta1.populacao < carta2.populacao) {
            printf("Vencedor: Carta 2 (%s)!\n", carta2.nome);
        } else {
            printf("Resultado: Empate!!\n");
        }
        break;
    case 2: //Area (Maior vence)
        printf("Atributo: Área\n");
        printf("Valores: Carta 1 (%.2f km2) x Carta 2 (%.2f km2)\n", carta1.area, carta2.area);
        if (carta1.area > carta2.area) {
            printf("Vencedor: Carta 1 (%s)!\n", carta1.nome);
        } else if (carta1.area < carta2.area) {
            printf("Vencedor: Carta 2 (%s)!\n", carta2.nome);
        } else {
            printf("Resultado: Empate!!\n");
        }
        break;
    case 3: //PIB (Maior vence)
        printf("Atributo: PIB\n");
        printf("Valores: Carta 1 (%.2f Bilhões) x Carta 2 (%.2f Bilhões)\n", carta1.pib, carta2.pib);
        if (carta1.pib > carta2.pib) {
            printf("Vencedor: Carta 1 (%s)!\n", carta1.nome);
        } else if (carta1.pib < carta2.pib) {
            printf("Vencedor: Carta 2 (%s)!\n", carta2.nome);
        } else {
            printf("Resultado: Empate!!\n");
        }
        break;
    case 4: //Número de Pontos Turísticos (Maior vence)
        printf("Atributo: Número de Pontos Turísticos\n");
        printf("Valores: Carta 1 (%d) x Carta 2 (%d)\n", carta1.num_ponto_tur, carta2.num_ponto_tur);
        if (carta1.num_ponto_tur > carta2.num_ponto_tur) {
            printf("Vencedor: Carta 1 (%s)!\n", carta1.nome);
        } else if (carta1.num_ponto_tur < carta2.num_ponto_tur) {
            printf("Vencedor: Carta 2 (%s)!\n", carta2.nome);
        } else {
            printf("Resultado: Empate!!\n");
        }
        break;
    case 5: //Densidade Populacional (Menor vence)
        printf("Atributo: Densidade Populacional\n");
        printf("Valores: Carta 1 (%.2f hab/km2) x Carta 2 (%.2f hab/km2)\n", carta1.dens_pop, carta2.dens_pop);
        if (carta1.dens_pop < carta2.dens_pop) {
            printf("Vencedor: Carta 1 (%s)!\n", carta1.nome);
        } else if (carta1.dens_pop > carta2.dens_pop) {
            printf("Vencedor: Carta 2 (%s)!\n", carta2.nome);
        } else {
            printf("Resultado: Empate!!\n");
        }
        break;
    case 6: //PIB per Capita (Maior vence)
        printf("Atributo: PIB per Capita\n");
        printf("Valores: Carta 1 (%.2f Reais) x Carta 2 (%.2f Reais)\n", carta1.pib_per_capta, carta2.pib_per_capta);
        if (carta1.pib_per_capta > carta2.pib_per_capta) {
            printf("Vencedor: Carta 1 (%s)!\n", carta1.nome);
        } else if (carta1.pib_per_capta < carta2.pib_per_capta) {
            printf("Vencedor: Carta 2 (%s)!\n", carta2.nome);
        } else {
            printf("Resultado: Empate!!\n");
        }
        break;
    case 7: //SUPER PODER (Maior vence)
        printf("Atributo: SUPER PODER\n");
        printf("Valores: Carta 1 (%.2f) x Carta 2 (%.2f)\n", carta1.super_poder, carta2.super_poder);
        if (carta1.super_poder > carta2.super_poder) {
            printf("Vencedor: Carta 1 (%s)!\n", carta1.nome);
        } else if (carta1.super_poder < carta2.super_poder) {
            printf("Vencedor: Carta 2 (%s)!\n", carta2.nome);
        } else {
            printf("Resultado: Empate!!\n");
        }
        break;
    
    default:
        printf("Erro: Opção Inválida!! Por favor, reinicie e escolha um número de 1 a 7.\n");
        break;
    }

    return 0;
}
