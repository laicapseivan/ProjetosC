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
    printf("População: %d \n", populacao1);
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
    printf("População: %d \n", populacao2);
    printf("Área: %.2f km² \n", areakm2);
    printf("PIB: %.2f reais \n", pib2);
    printf("Números de Pontos Turísticos: %d \n", pontoturistico2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadepopulacional2);
    printf("PIB per Capita: %.2f reais\n", pibpercapita2);

    printf("\n");


    //Comparação de atributos de Carta 1 e 2:
    int comparacaopopulacao = populacao1 > populacao2;
    int comparacaoarea = areakm1 > areakm2;
    int comparacaopib = pib1 > pib2;
    int comparacaopontoturistico = pontoturistico1 > pontoturistico2;
    int comparacaodensidadepopulacional = densidadepopulacional1 < densidadepopulacional2;
    int comparacaopibpercapita = pibpercapita1 > pibpercapita2;
    int comparacaosuperpoder = superpoder1 > superpoder2;

    printf("\n");

    


    //Utilização de If-else para revelar carta vencedora de cada atributo:

    printf("Carta Vencedora de Cada Atributo:\n");

    printf("\n");

    if (comparacaopopulacao == 1){
        printf("População Vencedora: Carta 1\n");
    } else{
        printf("População Vencedora: Carta 2\n");
    }


    if (comparacaoarea == 1){
        printf("Área Vencedora: Carta 1\n");
    } else{
        printf("Área Vencedora: Carta 2\n");
    }

    
    if (comparacaopib == 1){
        printf("PIB Vencedor: Carta 1\n");
    } else{
        printf("PIB Vencedor: Carta 2\n");
    }

  
    if (comparacaopontoturistico == 1){
        printf("Pontos Turísticos Vencedor: Carta 1\n");
    } else{
        printf("Pontos Turísticos Vencedor: Carta 2\n");
    }


    if (comparacaodensidadepopulacional == 1){
        printf("Densidade Populacional Vencedora: Carta 1\n");
    } else{
        printf("Densidade Populacional Vencedora: Carta 2\n");
    }


    if (comparacaopibpercapita == 1){
        printf("PIB per Capita Vencedor: Carta 1\n");
    } else{
        printf("PIB per Capita Vencedor: Carta 2\n");
    }


    if (comparacaosuperpoder == 1){
        printf("Super Poder Vencedor: Carta 1\n");
    } else{
        printf("Super Poder Vencedor: Carta 2\n");
    }

    cartavencedora = comparacaopopulacao + comparacaoarea + comparacaopib + comparacaopontoturistico 
                   + comparacaodensidadepopulacional + comparacaopibpercapita + comparacaosuperpoder;

    printf("\n");

    //Revelação de qual carta venceu o jogo no final:

    if(cartavencedora >= 4){
        printf("Carta 1 Venceu O Jogo!\n");
    } else{
        printf("Carta 2 Venceu O Jogo!\n");
    }

    printf("\n");


    return 0;



}
