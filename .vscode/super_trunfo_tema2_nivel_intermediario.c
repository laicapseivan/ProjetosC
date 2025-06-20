#include <stdio.h>

int main(){

    //Declaração de variáveis: Carta 1

    //Declaração de variáveis tipo char 
    char estado1, codigo1[20], cidade1[20];

    //Declaração de variáveis tipo int 
    int pontoturistico1;

    //Declaração de variáveis tipo float 
    float areakm1, pib1, densidadepopulacional1, pibpercapita1, superpoder1;

    //Declaração de variáveis tipo unsigned long int
    unsigned long int populacao1;


    //Declaração de variáveis: Carta 2
    
    //Declaração de variáveis tipo char
    char estado2, codigo2[20], cidade2[20];

    //Declaração de variáveis tipo int 
    int pontoturistico2;

    //Declaração de variáveis tipo float 
    float areakm2, pib2, densidadepopulacional2, pibpercapita2, superpoder2;

    //Declaração de variáveis tipo unsigned long int
    unsigned long int populacao2;

    //Declaração de Variáveis Externas:
    int cartavencedora;

    //Declaração de Novas Variáveis de Comparação:
    int comparacaopopulacao;
    int comparacaoarea;
    int comparacaopib;
    int comparacaopontoturistico; 
    int comparacaodensidadepopulacional; 
    int comparacaopibpercapita;
    int comparacaosuperpoder; 

    int escolhajogador;




    //Coleta de dados: Carta 1

    printf("Insira As Informações Correspondentes da Carta 1: \n");

    printf("Insira o Estado: \n");
    //Requisição de dado de caractere único pelo especificador %c para armazenar em estado1
    scanf(" %c", &estado1);

    printf("Insira o Código: \n");
    scanf("%s", codigo1);

    printf("Insira o Nome da Cidade: \n");
    scanf("%s", cidade1);

    printf("Insira o valor da População da Cidade: \n");
    scanf("%lu", &populacao1);

    printf("Insira a Área em Quilômetros Quadrados da Cidade: \n");
    scanf("%f", &areakm1);

    printf("Insira o PIB da Cidade: \n");
    scanf("%f", &pib1);

    printf("Insira a Quantidade de Pontos Turísticos da Cidade: \n");
    scanf("%d", &pontoturistico1);

    printf("\n");



    //Coleta de dados: Carta 2

    printf("Insira As Informações Correspondentes da Carta 2: \n");

    printf("Insira o Estado: \n");
    scanf(" %c", &estado2);

    printf("Insira o Código: \n");
    scanf("%s", codigo2);

    printf("Insira o Nome da Cidade: \n");
    scanf("%s", cidade2);

    printf("Insira o valor da População da Cidade: \n");
    scanf("%lu", &populacao2);

    printf("Insira a Área em Quilômetros Quadrados da Cidade: \n");
    scanf("%f", &areakm2);

    printf("Insira o PIB da Cidade: \n");
    scanf("%f", &pib2);

    printf("Insira a Quantidade de Pontos Turísticos da Cidade: \n");
    scanf("%d", &pontoturistico2);

    printf("\n");

        //Cálculos: Carta 1

        //Cálculo de Densidade Populacional com Casting
        densidadepopulacional1 = (float) populacao1 / areakm1;

        //Cálculo de PIB per Capita
        pibpercapita1 = (float) pib1 / populacao1;


        //Cálculos: Carta 2

        //Cálculo de Densidade Populacional com Casting
        densidadepopulacional2 = (float) populacao2 / areakm2;

        //Cálculo de PIB per Capita
        pibpercapita2 = (float) pib2 / populacao2;

        //Cálculo Super Poder Carta 1
        superpoder1 = (float) populacao1 + areakm1 + pib1 + pontoturistico1 + pibpercapita1 + 
                                                               ( 1 / densidadepopulacional1);

        //Cálculo Super Poder Carta 2
        superpoder2 = (float) populacao2 + areakm2 + pib2 + pontoturistico2 + pibpercapita2 + 
                                                               ( 1 / densidadepopulacional2);

    
    //Amostra dos Dados Coletados: Carta 1
    printf("Carta 1:\n");
    printf("Estado: %c \n", estado1);
    printf("Código: %s \n", codigo1);
    printf("Nome da Cidade: %s \n", cidade1);
    printf("População: %lu \n", populacao1);
    printf("Área: %.2f km² \n", areakm1);
    printf("PIB: %.2f reais \n", pib1);
    printf("Números de Pontos Turísticos: %d \n", pontoturistico1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadepopulacional1);
    printf("PIB per Capita: %.2f reais\n", pibpercapita1);

    printf("\n");

    //Amostra dos Dados Coletados: Carta 2
    printf("Carta 2:\n");
    printf("Estado: %c \n", estado2);
    printf("Código: %s \n", codigo2);
    printf("Nome da Cidade: %s \n", cidade2);
    printf("População: %lu \n", populacao2);
    printf("Área: %.2f km² \n", areakm2);
    printf("PIB: %.2f reais \n", pib2);
    printf("Números de Pontos Turísticos: %d \n", pontoturistico2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadepopulacional2);
    printf("PIB per Capita: %.2f reais\n", pibpercapita2);

    printf("\n");

    //Utilização de If-else para revelar carta vencedora de cada atributo:

    printf("Escolha Um Atributo para Comparar:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turísticos\n");
    printf("5. Densidade Populacional\n");
    printf("6. PIB per Capita\n");
    scanf("%d", &escolhajogador);


    printf("\n");

    switch (escolhajogador)
    {
    case 1:
    if (populacao1 > populacao2)
    {
        comparacaopopulacao = 1;
        printf("População Vencedora: Carta 1\n");
    } else if (populacao1 < populacao2)
    {
        comparacaopopulacao = -1;
        printf("População Vencedora: Carta 2\n");
    } else
    {
        comparacaopopulacao = 0;
        printf("População: Empatou\n");
    }
    break;

    case 2:
    if (areakm1 > areakm2)
    {
        comparacaoarea = 1;
        printf("Área Vencedora: Carta 1\n");
    } else if (areakm1 < areakm2)
    {
        comparacaoarea = -1;
        printf("Área Vencedora: Carta 2\n");
    } else
    {
        comparacaoarea = 0;
        printf("Área: Empatou\n");
    }
    break;

    case 3:
    if (pib1 > pib2)
    {
        comparacaopib = 1;
        printf("PIB Vencedor: Carta 1\n");
    } else if (pib1 < pib2)
    {
        comparacaopib = -1;
        printf("PIB Vencedor: Carta 2\n");
    } else
    {
        comparacaopib = 0;
        printf("PIB: Empatou\n");
    }
    break;

    case 4:
    if (pontoturistico1 > pontoturistico2)
    {
        comparacaopontoturistico = 1;
        printf("Pontos Turísticos Vencedor: Carta 1\n");
    } else if (pontoturistico1 < pontoturistico2)
    {
        comparacaopontoturistico = -1;
        printf("Pontos Turísticos Vencedor: Carta 2\n");
    } else
    {
        comparacaopontoturistico = 0;
        printf("Pontos Turísticos: Empatou\n");
    }
    break;

    case 5:
    if (densidadepopulacional1 < densidadepopulacional2)
    {
        comparacaodensidadepopulacional = 1;
        printf("Densidade Populacional Vencedora: Carta 1\n");
    } else if (densidadepopulacional1 > densidadepopulacional2)
    {
        comparacaodensidadepopulacional = -1;
        printf("Densidade Populacional Vencedora: Carta 2\n");
    } else
    {
        comparacaodensidadepopulacional = 0;
        printf("Densidade Populacional: Empatou\n");
    }
    break;

    case 6:
    if (pibpercapita1 > pibpercapita2)
    {
        comparacaopibpercapita = 1;
        printf("PIB per Capita Vencedor: Carta 1\n");
    } else if (pibpercapita1 < pibpercapita2)
    {
        comparacaopibpercapita = -1;
        printf("PIB per Capita Vencedor: Carta 2\n");
    } else
    {
        comparacaopibpercapita = 0;
        printf("PIB per Capita: Empatou\n");
    }
    break;

    default:
        printf("Valor Inválido\n");
    }

    /*

    if (superpoder1 > superpoder2)
    {
        comparacaosuperpoder = 1;
        printf("Super Poder Vencedor: Carta 1\n");
    } else if (superpoder1 < superpoder2)
    {
        comparacaosuperpoder = -1;
        printf("Super Poder Vencedor: Carta 2\n");
    } else
    {
        comparacaosuperpoder = 0;
        printf("Super Poder: Empatou\n");
    }
    

    cartavencedora = comparacaopopulacao + comparacaoarea + comparacaopib + comparacaopontoturistico 
                   + comparacaodensidadepopulacional + comparacaopibpercapita + comparacaosuperpoder;

    printf("\n");

    //Revelação de qual carta venceu o jogo no final:

    if(cartavencedora >= 1)
    {
        printf("Carta 1 Venceu O Jogo!\n");
    } else if (cartavencedora <= -1 )
    {
        printf("Carta 2 Venceu O Jogo!\n");
    }else
    {
        printf("O Jogo Empatou!\n");
    }

    printf("\n");

    */

    return 0;



}
