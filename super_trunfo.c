#include <stdio.h>

int main(){

    //Declaração de variáveis: Carta 1
    //Declaração de variáveis do tipo char (Strings ou caracteres únicos)
    char estado1 = ' ', codigo1[4] = "A01", cidade1[20] = " ";
    //Declaração de variáveis do tipo int (Números inteiros)
    int populacao1 = 0, pontoturistico1 = 0;
    //Declaração de variáveis do tipo float (Números de ponto flutuante)
    float areakm1 = 0.0, pib1 = 0.0;

    //Declaração de variáveis: Carta 2
    //Declaração de variáveis do tipo char (Strings ou caracteres únicos)
    char estado2 = ' ', codigo2[4] = "A01", cidade2[20] = " ";
    //Declaração de variáveis do tipo int (Números inteiros)
    int populacao2 = 0, pontoturistico2 = 0;
    //Declaração de variáveis do tipo float (Números de ponto flutuante)
    float areakm2 = 0.0, pib2 = 0.0;

    //Coleta de dados: Carta 1
    printf("Insira As Informações Correspondentes da Carta 1: \n");

    printf("Insira o Estado: \n");
    //Requisição de dado de caractere único através do especificador %c para ser armazenado em estado1
    scanf(" %c", &estado1);

    printf("Insira o Código: \n");
    //O mesmo que acima para suas referentes variáveis e especificadores
    scanf("%s", codigo1);

    printf("Insira o Nome da Cidade: \n");
    scanf("%s", cidade1);

    printf("Insira o valor da População da Cidade: \n");
    scanf("%d", &populacao1);

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
    scanf("%d", &populacao2);

    printf("Insira a Área em Quilômetros Quadrados da Cidade: \n");
    scanf("%f", &areakm2);

    printf("Insira o PIB da Cidade: \n");
    scanf("%f", &pib2);

    printf("Insira a Quantidade de Pontos Turísticos da Cidade: \n");
    scanf("%d", &pontoturistico2);

    printf("\n");


    //Amostra dos Dados Coletados: Carta 1
    printf("Carta 1:\n");
    printf("Estado: %c \n", estado1);
    printf("Código: %s \n", codigo1);
    printf("Nome da Cidade: %s \n", cidade1);
    printf("População: %d \n", populacao1);
    printf("Área: %f km² \n", areakm1);
    printf("PIB: %f bilhões de reais \n", pib1);
    printf("Números de Pontos Turísticos: %d \n", pontoturistico1);

    printf("\n");

    //Amostra dos Dados Coletados: Carta 2
    printf("Carta 2:\n");
    printf("Estado: %c \n", estado2);
    printf("Código: %s \n", codigo2);
    printf("Nome da Cidade: %s \n", cidade2);
    printf("População: %d \n", populacao2);
    printf("Área: %f km² \n", areakm2);
    printf("PIB: %f bilhões de reais \n", pib2);
    printf("Números de Pontos Turísticos: %d \n", pontoturistico2);


    
    return 0;
    


}
