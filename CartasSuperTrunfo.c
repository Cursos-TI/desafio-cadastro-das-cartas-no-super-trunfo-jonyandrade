#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
/*
Estado (char)
Código da carta (char[])
Nome da cidade (char[])
População (unsigned long int)
Área em km² (float)
PIB (float)
Número de pontos turísticos (int)
Densidade populacional (float): calculada como população dividida pela área da cidade.
PIB per capita (float): calculado como PIB total da cidade dividido pela população.
Super Poder (float): soma de todas as propriedades, ajustada conforme a lógica do super poder.
*/
// Estrutura para armazenar os dados de uma cidade
typedef struct {
    char nome[3];
    char codigo[10];
    unsigned long int populacao;
    float pib;
    float area;
    int pontosturisticos;
    float densidadepopulacional;
    float pibpercapta;
    float superpoder;
} Cidade;

// Estrutura para armazenar os dados de um estado
typedef struct {
    char nome[3]; // Nome do estado, uma letra entre A e H, precisei usar como string, pois o uso como %c estava dando erro na exibição.
    Cidade cidades[4]; // 4 cidades por estado
} Estado;

int main(){

Estado estados[8]; // Array para armazenar 8 estados.

// Cadastro do Estado 1
    printf("\nCadastro do Estado 1:\n");
    printf("Digite o nome do estado (Letra entre A e H): ");
    scanf(" %s", estados[0].nome);

    // Cadastro das cidades do Estado 1
    // ************* cidade 1 *************
    printf("\nCadastro da Cidade 1 do estado %s:\n", estados[0].nome);

    printf("Nome da cidade (Numero de 01 a 04): ");
    scanf(" %s", &estados[0].cidades[0].nome);

    printf("População: ");
    scanf(" %lu", &estados[0].cidades[0].populacao);

    printf("Área (em km²): ");
    scanf(" %f", &estados[0].cidades[0].area);

    printf("PIB: ");
    scanf(" %f", &estados[0].cidades[0].pib);

    printf("Número de pontos turísticos: ");
    scanf(" %i", &estados[0].cidades[0].pontosturisticos);

    // Uso do sprintf para concatenação e formação do codigo da carta.
    sprintf(estados[0].cidades[0].codigo, "%s%s", estados[0].nome, estados[0].cidades[0].nome);

    // calculos das variaveis necessarias.
    estados[0].cidades[0].densidadepopulacional = estados[0].cidades[0].populacao / estados[0].cidades[0].area;

    estados[0].cidades[0].pibpercapta = estados[0].cidades[0].pib / estados[0].cidades[0].populacao;

    estados[0].cidades[0].superpoder = estados[0].cidades[0].populacao + estados[0].cidades[0].area + estados[0].cidades[0].pib + estados[0].cidades[0].pontosturisticos + estados[0].cidades[0].pibpercapta + (estados[0].cidades[0].area / estados[0].cidades[0].populacao);

    // ************* cidade 2 *************
    printf("\nCadastro da Cidade 2 do estado %s:\n", estados[0].nome);

    printf("Nome da cidade (Numero de 01 a 04): ");
    scanf(" %s", &estados[0].cidades[1].nome);

    printf("População: ");
    scanf(" %lu", &estados[0].cidades[1].populacao);

    printf("Área (em km²): ");
    scanf(" %f", &estados[0].cidades[1].area);

    printf("PIB: ");
    scanf(" %f", &estados[0].cidades[1].pib);

    printf("Número de pontos turísticos: ");
    scanf(" %i", &estados[0].cidades[1].pontosturisticos);

    sprintf(estados[0].cidades[1].codigo, "%s%s", estados[0].nome, estados[0].cidades[1].nome);

    estados[0].cidades[1].densidadepopulacional = estados[0].cidades[1].populacao / estados[0].cidades[1].area;

    estados[0].cidades[1].pibpercapta = estados[0].cidades[1].pib / estados[0].cidades[1].populacao;

    estados[0].cidades[1].superpoder = estados[0].cidades[1].populacao + estados[0].cidades[1].area + estados[0].cidades[1].pib + estados[0].cidades[1].pontosturisticos + estados[0].cidades[1].pibpercapta + (estados[0].cidades[1].area / estados[0].cidades[1].populacao);


    // ************* cidade 3 *************
    printf("\nCadastro da Cidade 3 do estado %s:\n", estados[0].nome);

    printf("Nome da cidade (Numero de 01 a 04): ");
    scanf(" %s", &estados[0].cidades[2].nome);

    printf("População: ");
    scanf(" %lu", &estados[0].cidades[2].populacao);

    printf("Área (em km²): ");
    scanf(" %f", &estados[0].cidades[2].area);

    printf("PIB: ");
    scanf(" %f", &estados[0].cidades[2].pib);

    printf("Número de pontos turísticos: ");
    scanf(" %i", &estados[0].cidades[2].pontosturisticos);

    sprintf(estados[0].cidades[2].codigo, "%s%s", estados[0].nome, estados[0].cidades[2].nome);

    estados[0].cidades[2].densidadepopulacional = estados[0].cidades[2].populacao / estados[0].cidades[2].area;

    estados[0].cidades[2].pibpercapta = estados[0].cidades[2].pib / estados[0].cidades[2].populacao;

    estados[0].cidades[2].superpoder = estados[0].cidades[2].populacao + estados[0].cidades[2].area + estados[0].cidades[2].pib + estados[0].cidades[2].pontosturisticos + estados[0].cidades[2].pibpercapta + (estados[0].cidades[2].area / estados[0].cidades[2].populacao);

    // ************* cidade 4 *************
    printf("\nCadastro da Cidade 4 do estado %s:\n", estados[0].nome);

    printf("Nome da cidade (Numero de 01 a 04): ");
    scanf(" %s", &estados[0].cidades[3].nome);

    printf("População: ");
    scanf(" %lu", &estados[0].cidades[3].populacao);

    printf("Área (em km²): ");
    scanf(" %f", &estados[0].cidades[3].area);

    printf("PIB: ");
    scanf(" %f", &estados[0].cidades[3].pib);

    printf("Número de pontos turísticos: ");
    scanf(" %i", &estados[0].cidades[3].pontosturisticos);

    sprintf(estados[0].cidades[3].codigo, "%s%s", estados[0].nome, estados[0].cidades[3].nome);

    estados[0].cidades[3].densidadepopulacional = estados[0].cidades[3].populacao / estados[0].cidades[3].area;

    estados[0].cidades[3].pibpercapta = estados[0].cidades[3].pib / estados[0].cidades[3].populacao;

    estados[0].cidades[3].superpoder = estados[0].cidades[3].populacao + estados[0].cidades[3].area + estados[0].cidades[3].pib + estados[0].cidades[3].pontosturisticos + estados[0].cidades[3].pibpercapta + (estados[0].cidades[3].area / estados[0].cidades[3].populacao);


// Cadastro do Estado 2
    printf("\nCadastro do Estado 2:\n");
    printf("Digite o nome do estado (Letra entre A e H): ");
    scanf(" %s", estados[1].nome);

    // Cadastro das cidades do Estado 2
    // ************* cidade 1 *************
    printf("\nCadastro da Cidade 1 do estado %s:\n", estados[1].nome);

    printf("Nome da cidade (Numero de 01 a 04): ");
    scanf(" %s", &estados[1].cidades[0].nome);

    printf("População: ");
    scanf(" %lu", &estados[1].cidades[0].populacao);

    printf("Área (em km²): ");
    scanf(" %f", &estados[1].cidades[0].area);

    printf("PIB: ");
    scanf(" %f", &estados[1].cidades[0].pib);

    printf("Número de pontos turísticos: ");
    scanf(" %i", &estados[1].cidades[0].pontosturisticos);

    // Uso do sprintf para concatenação e formação do codigo da carta.
    sprintf(estados[1].cidades[0].codigo, "%s%s", estados[1].nome, estados[1].cidades[0].nome);

    // calculos das variaveis necessarias.
    estados[1].cidades[0].densidadepopulacional = estados[1].cidades[0].populacao / estados[1].cidades[0].area;

    estados[1].cidades[0].pibpercapta = estados[1].cidades[0].pib / estados[1].cidades[0].populacao;

    estados[1].cidades[0].superpoder = estados[1].cidades[0].populacao + estados[1].cidades[0].area + estados[1].cidades[0].pib + estados[1].cidades[0].pontosturisticos + estados[1].cidades[0].pibpercapta + (estados[1].cidades[0].area / estados[1].cidades[0].populacao);

    // ************* cidade 2 *************
    printf("\nCadastro da Cidade 2 do estado %s:\n", estados[1].nome);

    printf("Nome da cidade (Numero de 01 a 04): ");
    scanf(" %s", &estados[1].cidades[1].nome);

    printf("População: ");
    scanf(" %lu", &estados[1].cidades[1].populacao);

    printf("Área (em km²): ");
    scanf(" %f", &estados[1].cidades[1].area);

    printf("PIB: ");
    scanf(" %f", &estados[1].cidades[1].pib);

    printf("Número de pontos turísticos: ");
    scanf(" %i", &estados[1].cidades[1].pontosturisticos);

    sprintf(estados[1].cidades[1].codigo, "%s%s", estados[1].nome, estados[1].cidades[1].nome);

    estados[1].cidades[1].densidadepopulacional = estados[1].cidades[1].populacao / estados[1].cidades[1].area;

    estados[1].cidades[1].pibpercapta = estados[1].cidades[1].pib / estados[1].cidades[1].populacao;

    estados[1].cidades[1].superpoder = estados[1].cidades[1].populacao + estados[1].cidades[1].area + estados[1].cidades[1].pib + estados[1].cidades[1].pontosturisticos + estados[1].cidades[1].pibpercapta + (estados[1].cidades[1].area / estados[1].cidades[1].populacao);


    // ************* cidade 3 *************
    printf("\nCadastro da Cidade 3 do estado %s:\n", estados[1].nome);

    printf("Nome da cidade (Numero de 01 a 04): ");
    scanf(" %s", &estados[1].cidades[2].nome);

    printf("População: ");
    scanf(" %lu", &estados[1].cidades[2].populacao);

    printf("Área (em km²): ");
    scanf(" %f", &estados[1].cidades[2].area);

    printf("PIB: ");
    scanf(" %f", &estados[1].cidades[2].pib);

    printf("Número de pontos turísticos: ");
    scanf(" %i", &estados[1].cidades[2].pontosturisticos);

    sprintf(estados[1].cidades[2].codigo, "%s%s", estados[1].nome, estados[1].cidades[2].nome);

    estados[1].cidades[2].densidadepopulacional = estados[1].cidades[2].populacao / estados[1].cidades[2].area;

    estados[1].cidades[2].pibpercapta = estados[1].cidades[2].pib / estados[1].cidades[2].populacao;

    estados[1].cidades[2].superpoder = estados[1].cidades[2].populacao + estados[1].cidades[2].area + estados[1].cidades[2].pib + estados[1].cidades[2].pontosturisticos + estados[1].cidades[2].pibpercapta + (estados[1].cidades[2].area / estados[1].cidades[2].populacao);

    // ************* cidade 4 *************
    printf("\nCadastro da Cidade 4 do estado %s:\n", estados[1].nome);

    printf("Nome da cidade (Numero de 01 a 04): ");
    scanf(" %s", &estados[1].cidades[3].nome);

    printf("População: ");
    scanf(" %lu", &estados[1].cidades[3].populacao);

    printf("Área (em km²): ");
    scanf(" %f", &estados[1].cidades[3].area);

    printf("PIB: ");
    scanf(" %f", &estados[1].cidades[3].pib);

    printf("Número de pontos turísticos: ");
    scanf(" %i", &estados[1].cidades[3].pontosturisticos);

    sprintf(estados[1].cidades[3].codigo, "%s%s", estados[1].nome, estados[1].cidades[3].nome);

    estados[1].cidades[3].densidadepopulacional = estados[1].cidades[3].populacao / estados[1].cidades[3].area;

    estados[1].cidades[3].pibpercapta = estados[1].cidades[3].pib / estados[1].cidades[3].populacao;

    estados[1].cidades[3].superpoder = estados[1].cidades[3].populacao + estados[1].cidades[3].area + estados[1].cidades[3].pib + estados[1].cidades[3].pontosturisticos + estados[1].cidades[3].pibpercapta + (estados[1].cidades[3].area / estados[1].cidades[3].populacao);


// Cadastro do Estado 3
    printf("\nCadastro do Estado 3:\n");
    printf("Digite o nome do estado (Letra entre A e H): ");
    scanf(" %s", estados[2].nome);

    // Cadastro das cidades do Estado 3
    // ************* cidade 1 *************
    printf("\nCadastro da Cidade 1 do estado %s:\n", estados[2].nome);

    printf("Nome da cidade (Numero de 01 a 04): ");
    scanf(" %s", &estados[2].cidades[0].nome);

    printf("População: ");
    scanf(" %lu", &estados[2].cidades[0].populacao);

    printf("Área (em km²): ");
    scanf(" %f", &estados[2].cidades[0].area);

    printf("PIB: ");
    scanf(" %f", &estados[2].cidades[0].pib);

    printf("Número de pontos turísticos: ");
    scanf(" %i", &estados[2].cidades[0].pontosturisticos);

    sprintf(estados[2].cidades[0].codigo, "%s%s", estados[2].nome, estados[2].cidades[0].nome);

    estados[2].cidades[0].densidadepopulacional = estados[2].cidades[0].populacao / estados[2].cidades[0].area;

    estados[2].cidades[0].pibpercapta = estados[2].cidades[0].pib / estados[2].cidades[0].populacao;

    estados[2].cidades[0].superpoder = estados[2].cidades[0].populacao + estados[2].cidades[0].area + estados[2].cidades[0].pib + estados[2].cidades[0].pontosturisticos + estados[2].cidades[0].pibpercapta + (estados[2].cidades[0].area / estados[2].cidades[0].populacao);

    // ************* cidade 2 *************
    printf("\nCadastro da Cidade 2 do estado %s:\n", estados[2].nome);

    printf("Nome da cidade (Numero de 01 a 04): ");
    scanf(" %s", &estados[2].cidades[1].nome);

    printf("População: ");
    scanf(" %lu", &estados[2].cidades[1].populacao);

    printf("Área (em km²): ");
    scanf(" %f", &estados[2].cidades[1].area);

    printf("PIB: ");
    scanf(" %f", &estados[2].cidades[1].pib);

    printf("Número de pontos turísticos: ");
    scanf(" %i", &estados[2].cidades[1].pontosturisticos);

    sprintf(estados[2].cidades[1].codigo, "%s%s", estados[2].nome, estados[2].cidades[1].nome);

    estados[2].cidades[1].densidadepopulacional = estados[2].cidades[1].populacao / estados[2].cidades[1].area;

    estados[2].cidades[1].pibpercapta = estados[2].cidades[1].pib / estados[2].cidades[1].populacao;

    estados[2].cidades[1].superpoder = estados[2].cidades[1].populacao + estados[2].cidades[1].area + estados[2].cidades[1].pib + estados[2].cidades[1].pontosturisticos + estados[2].cidades[1].pibpercapta + (estados[2].cidades[1].area / estados[2].cidades[1].populacao);


    // ************* cidade 3 *************
    printf("\nCadastro da Cidade 3 do estado %s:\n", estados[2].nome);

    printf("Nome da cidade (Numero de 01 a 04): ");
    scanf(" %s", &estados[2].cidades[2].nome);

    printf("População: ");
    scanf(" %lu", &estados[2].cidades[2].populacao);

    printf("Área (em km²): ");
    scanf(" %f", &estados[2].cidades[2].area);

    printf("PIB: ");
    scanf(" %f", &estados[2].cidades[2].pib);

    printf("Número de pontos turísticos: ");
    scanf(" %i", &estados[2].cidades[2].pontosturisticos);

    sprintf(estados[2].cidades[2].codigo, "%s%s", estados[2].nome, estados[2].cidades[2].nome);

    estados[2].cidades[2].densidadepopulacional = estados[2].cidades[2].populacao / estados[2].cidades[2].area;

    estados[2].cidades[2].pibpercapta = estados[2].cidades[2].pib / estados[2].cidades[2].populacao;

    estados[2].cidades[2].superpoder = estados[2].cidades[2].populacao + estados[2].cidades[2].area + estados[2].cidades[2].pib + estados[2].cidades[2].pontosturisticos + estados[2].cidades[2].pibpercapta + (estados[2].cidades[2].area / estados[2].cidades[2].populacao);

    // ************* cidade 4 *************
    printf("\nCadastro da Cidade 4 do estado %s:\n", estados[2].nome);

    printf("Nome da cidade (Numero de 01 a 04): ");
    scanf(" %s", &estados[2].cidades[3].nome);

    printf("População: ");
    scanf(" %lu", &estados[2].cidades[3].populacao);

    printf("Área (em km²): ");
    scanf(" %f", &estados[2].cidades[3].area);

    printf("PIB: ");
    scanf(" %f", &estados[2].cidades[3].pib);

    printf("Número de pontos turísticos: ");
    scanf(" %i", &estados[2].cidades[3].pontosturisticos);

    sprintf(estados[2].cidades[3].codigo, "%s%s", estados[2].nome, estados[2].cidades[3].nome);

    estados[2].cidades[3].densidadepopulacional = estados[2].cidades[3].populacao / estados[2].cidades[3].area;

    estados[2].cidades[3].pibpercapta = estados[2].cidades[3].pib / estados[2].cidades[3].populacao;

    estados[2].cidades[3].superpoder = estados[2].cidades[3].populacao + estados[2].cidades[3].area + estados[2].cidades[3].pib + estados[2].cidades[3].pontosturisticos + estados[2].cidades[3].pibpercapta + (estados[2].cidades[3].area / estados[2].cidades[3].populacao);


// Cadastro do Estado 4
    printf("\nCadastro do Estado 4:\n");
    printf("Digite o nome do estado (Letra entre A e H): ");
    scanf(" %s", estados[3].nome);

    // Cadastro das cidades do Estado 4
    // ************* cidade 1 *************
    printf("\nCadastro da Cidade 1 do estado %s:\n", estados[3].nome);

    printf("Nome da cidade (Numero de 01 a 04): ");
    scanf(" %s", &estados[3].cidades[0].nome);

    printf("População: ");
    scanf(" %lu", &estados[3].cidades[0].populacao);

    printf("Área (em km²): ");
    scanf(" %f", &estados[3].cidades[0].area);

    printf("PIB: ");
    scanf(" %f", &estados[3].cidades[0].pib);

    printf("Número de pontos turísticos: ");
    scanf(" %i", &estados[3].cidades[0].pontosturisticos);

    sprintf(estados[3].cidades[0].codigo, "%s%s", estados[3].nome, estados[3].cidades[0].nome);

    estados[3].cidades[0].densidadepopulacional = estados[3].cidades[0].populacao / estados[3].cidades[0].area;

    estados[3].cidades[0].pibpercapta = estados[3].cidades[0].pib / estados[3].cidades[0].populacao;

    estados[3].cidades[0].superpoder = estados[3].cidades[0].populacao + estados[3].cidades[0].area + estados[3].cidades[0].pib + estados[3].cidades[0].pontosturisticos + estados[3].cidades[0].pibpercapta + (estados[3].cidades[0].area / estados[3].cidades[0].populacao);

    // ************* cidade 2 *************
    printf("\nCadastro da Cidade 2 do estado %s:\n", estados[3].nome);

    printf("Nome da cidade (Numero de 01 a 04): ");
    scanf(" %s", &estados[3].cidades[1].nome);

    printf("População: ");
    scanf(" %lu", &estados[3].cidades[1].populacao);

    printf("Área (em km²): ");
    scanf(" %f", &estados[3].cidades[1].area);

    printf("PIB: ");
    scanf(" %f", &estados[3].cidades[1].pib);

    printf("Número de pontos turísticos: ");
    scanf(" %i", &estados[3].cidades[1].pontosturisticos);

    sprintf(estados[3].cidades[1].codigo, "%s%s", estados[3].nome, estados[3].cidades[1].nome);

    estados[3].cidades[1].densidadepopulacional = estados[3].cidades[1].populacao / estados[3].cidades[1].area;

    estados[3].cidades[1].pibpercapta = estados[3].cidades[1].pib / estados[3].cidades[1].populacao;

    estados[3].cidades[1].superpoder = estados[3].cidades[1].populacao + estados[3].cidades[1].area + estados[3].cidades[1].pib + estados[3].cidades[1].pontosturisticos + estados[3].cidades[1].pibpercapta + (estados[3].cidades[1].area / estados[3].cidades[1].populacao);


    // ************* cidade 3 *************
    printf("\nCadastro da Cidade 3 do estado %s:\n", estados[3].nome);

    printf("Nome da cidade (Numero de 01 a 04): ");
    scanf(" %s", &estados[3].cidades[2].nome);

    printf("População: ");
    scanf(" %lu", &estados[3].cidades[2].populacao);

    printf("Área (em km²): ");
    scanf(" %f", &estados[3].cidades[2].area);

    printf("PIB: ");
    scanf(" %f", &estados[3].cidades[2].pib);

    printf("Número de pontos turísticos: ");
    scanf(" %i", &estados[3].cidades[2].pontosturisticos);

    sprintf(estados[3].cidades[2].codigo, "%s%s", estados[3].nome, estados[3].cidades[2].nome);

    estados[3].cidades[2].densidadepopulacional = estados[3].cidades[2].populacao / estados[3].cidades[2].area;

    estados[3].cidades[2].pibpercapta = estados[3].cidades[2].pib / estados[3].cidades[2].populacao;

    estados[3].cidades[2].superpoder = estados[3].cidades[2].populacao + estados[3].cidades[2].area + estados[3].cidades[2].pib + estados[3].cidades[2].pontosturisticos + estados[3].cidades[2].pibpercapta + (estados[3].cidades[2].area / estados[3].cidades[2].populacao);

    // ************* cidade 4 *************
    printf("\nCadastro da Cidade 4 do estado %s:\n", estados[3].nome);

    printf("Nome da cidade (Numero de 01 a 04): ");
    scanf(" %s", &estados[3].cidades[3].nome);

    printf("População: ");
    scanf(" %lu", &estados[3].cidades[3].populacao);

    printf("Área (em km²): ");
    scanf(" %f", &estados[3].cidades[3].area);

    printf("PIB: ");
    scanf(" %f", &estados[3].cidades[3].pib);

    printf("Número de pontos turísticos: ");
    scanf(" %i", &estados[3].cidades[3].pontosturisticos);

    sprintf(estados[3].cidades[3].codigo, "%s%s", estados[3].nome, estados[3].cidades[3].nome);

    estados[3].cidades[3].densidadepopulacional = estados[3].cidades[3].populacao / estados[3].cidades[3].area;

    estados[3].cidades[3].pibpercapta = estados[3].cidades[3].pib / estados[3].cidades[3].populacao;

    estados[3].cidades[3].superpoder = estados[3].cidades[3].populacao + estados[3].cidades[3].area + estados[3].cidades[3].pib + estados[3].cidades[3].pontosturisticos + estados[3].cidades[3].pibpercapta + (estados[3].cidades[3].area / estados[3].cidades[3].populacao);


// Cadastro do Estado 5
    printf("\nCadastro do Estado 5:\n");
    printf("Digite o nome do estado (Letra entre A e H): ");
    scanf(" %s", estados[4].nome);

    // Cadastro das cidades do Estado 5
    // ************* cidade 1 *************
    printf("\nCadastro da Cidade 1 do estado %s:\n", estados[4].nome);

    printf("Nome da cidade (Numero de 01 a 04): ");
    scanf(" %s", &estados[4].cidades[0].nome);

    printf("População: ");
    scanf(" %lu", &estados[4].cidades[0].populacao);

    printf("Área (em km²): ");
    scanf(" %f", &estados[4].cidades[0].area);

    printf("PIB: ");
    scanf(" %f", &estados[4].cidades[0].pib);

    printf("Número de pontos turísticos: ");
    scanf(" %i", &estados[4].cidades[0].pontosturisticos);

    sprintf(estados[4].cidades[0].codigo, "%s%s", estados[4].nome, estados[4].cidades[0].nome);

    estados[4].cidades[0].densidadepopulacional = estados[4].cidades[0].populacao / estados[4].cidades[0].area;

    estados[4].cidades[0].pibpercapta = estados[4].cidades[0].pib / estados[4].cidades[0].populacao;

    estados[4].cidades[0].superpoder = estados[4].cidades[0].populacao + estados[4].cidades[0].area + estados[4].cidades[0].pib + estados[4].cidades[0].pontosturisticos + estados[4].cidades[0].pibpercapta + (estados[4].cidades[0].area / estados[4].cidades[0].populacao);

    // ************* cidade 2 *************
    printf("\nCadastro da Cidade 2 do estado %s:\n", estados[4].nome);

    printf("Nome da cidade (Numero de 01 a 04): ");
    scanf(" %s", &estados[4].cidades[1].nome);

    printf("População: ");
    scanf(" %lu", &estados[4].cidades[1].populacao);

    printf("Área (em km²): ");
    scanf(" %f", &estados[4].cidades[1].area);

    printf("PIB: ");
    scanf(" %f", &estados[4].cidades[1].pib);

    printf("Número de pontos turísticos: ");
    scanf(" %i", &estados[4].cidades[1].pontosturisticos);

    sprintf(estados[4].cidades[1].codigo, "%s%s", estados[4].nome, estados[4].cidades[1].nome);

    estados[4].cidades[1].densidadepopulacional = estados[4].cidades[1].populacao / estados[4].cidades[1].area;

    estados[4].cidades[1].pibpercapta = estados[4].cidades[1].pib / estados[4].cidades[1].populacao;

    estados[4].cidades[1].superpoder = estados[4].cidades[1].populacao + estados[4].cidades[1].area + estados[4].cidades[1].pib + estados[4].cidades[1].pontosturisticos + estados[4].cidades[1].pibpercapta + (estados[4].cidades[1].area / estados[4].cidades[1].populacao);


    // ************* cidade 3 *************
    printf("\nCadastro da Cidade 3 do estado %s:\n", estados[4].nome);

    printf("Nome da cidade (Numero de 01 a 04): ");
    scanf(" %s", &estados[4].cidades[2].nome);

    printf("População: ");
    scanf(" %lu", &estados[4].cidades[2].populacao);

    printf("Área (em km²): ");
    scanf(" %f", &estados[4].cidades[2].area);

    printf("PIB: ");
    scanf(" %f", &estados[4].cidades[2].pib);

    printf("Número de pontos turísticos: ");
    scanf(" %i", &estados[4].cidades[2].pontosturisticos);

    sprintf(estados[4].cidades[2].codigo, "%s%s", estados[4].nome, estados[4].cidades[2].nome);

    estados[4].cidades[2].densidadepopulacional = estados[4].cidades[2].populacao / estados[4].cidades[2].area;

    estados[4].cidades[2].pibpercapta = estados[4].cidades[2].pib / estados[4].cidades[2].populacao;

    estados[4].cidades[2].superpoder = estados[4].cidades[2].populacao + estados[4].cidades[2].area + estados[4].cidades[2].pib + estados[4].cidades[2].pontosturisticos + estados[4].cidades[2].pibpercapta + (estados[4].cidades[2].area / estados[4].cidades[2].populacao);


    // ************* cidade 4 *************
    printf("\nCadastro da Cidade 4 do estado %s:\n", estados[4].nome);

    printf("Nome da cidade (Numero de 01 a 04): ");
    scanf(" %s", &estados[4].cidades[3].nome);

    printf("População: ");
    scanf(" %lu", &estados[4].cidades[3].populacao);

    printf("Área (em km²): ");
    scanf(" %f", &estados[4].cidades[3].area);

    printf("PIB: ");
    scanf(" %f", &estados[4].cidades[3].pib);

    printf("Número de pontos turísticos: ");
    scanf(" %i", &estados[4].cidades[3].pontosturisticos);

    sprintf(estados[4].cidades[3].codigo, "%s%s", estados[4].nome, estados[4].cidades[3].nome);

    estados[4].cidades[3].densidadepopulacional = estados[4].cidades[3].populacao / estados[4].cidades[3].area;

    estados[4].cidades[3].pibpercapta = estados[4].cidades[3].pib / estados[4].cidades[3].populacao;

    estados[4].cidades[3].superpoder = estados[4].cidades[3].populacao + estados[4].cidades[3].area + estados[4].cidades[3].pib + estados[4].cidades[3].pontosturisticos + estados[4].cidades[3].pibpercapta + (estados[4].cidades[3].area / estados[0].cidades[4].populacao);


// Cadastro do Estado 6
    printf("\nCadastro do Estado 6:\n");
    printf("Digite o nome do estado (Letra entre A e H): ");
    scanf(" %s", estados[5].nome);

    // Cadastro das cidades do Estado 6
    // ************* cidade 1 *************
    printf("\nCadastro da Cidade 1 do estado %s:\n", estados[5].nome);

    printf("Nome da cidade (Numero de 01 a 04): ");
    scanf(" %s", &estados[5].cidades[0].nome);

    printf("População: ");
    scanf(" %lu", &estados[5].cidades[0].populacao);

    printf("Área (em km²): ");
    scanf(" %f", &estados[5].cidades[0].area);

    printf("PIB: ");
    scanf(" %f", &estados[5].cidades[0].pib);

    printf("Número de pontos turísticos: ");
    scanf(" %i", &estados[5].cidades[0].pontosturisticos);

    sprintf(estados[5].cidades[0].codigo, "%s%s", estados[5].nome, estados[5].cidades[0].nome);

    estados[5].cidades[0].densidadepopulacional = estados[5].cidades[0].populacao / estados[5].cidades[0].area;

    estados[5].cidades[0].pibpercapta = estados[5].cidades[0].pib / estados[5].cidades[0].populacao;

    estados[5].cidades[0].superpoder = estados[5].cidades[0].populacao + estados[5].cidades[0].area + estados[5].cidades[0].pib + estados[5].cidades[0].pontosturisticos + estados[5].cidades[0].pibpercapta + (estados[5].cidades[0].area / estados[5].cidades[0].populacao);

    // ************* cidade 2 *************
    printf("\nCadastro da Cidade 2 do estado %s:\n", estados[5].nome);

    printf("Nome da cidade (Numero de 01 a 04): ");
    scanf(" %s", &estados[5].cidades[1].nome);

    printf("População: ");
    scanf(" %lu", &estados[5].cidades[1].populacao);

    printf("Área (em km²): ");
    scanf(" %f", &estados[5].cidades[1].area);

    printf("PIB: ");
    scanf(" %f", &estados[5].cidades[1].pib);

    printf("Número de pontos turísticos: ");
    scanf(" %i", &estados[5].cidades[1].pontosturisticos);

    sprintf(estados[5].cidades[1].codigo, "%s%s", estados[5].nome, estados[5].cidades[1].nome);

    estados[5].cidades[1].densidadepopulacional = estados[5].cidades[1].populacao / estados[5].cidades[1].area;

    estados[5].cidades[1].pibpercapta = estados[5].cidades[1].pib / estados[5].cidades[1].populacao;

    estados[5].cidades[1].superpoder = estados[5].cidades[1].populacao + estados[5].cidades[1].area + estados[5].cidades[1].pib + estados[5].cidades[1].pontosturisticos + estados[5].cidades[1].pibpercapta + (estados[5].cidades[1].area / estados[5].cidades[1].populacao);


    // ************* cidade 3 *************
    printf("\nCadastro da Cidade 3 do estado %s:\n", estados[5].nome);

    printf("Nome da cidade (Numero de 01 a 04): ");
    scanf(" %s", &estados[5].cidades[2].nome);

    printf("População: ");
    scanf(" %lu", &estados[5].cidades[2].populacao);

    printf("Área (em km²): ");
    scanf(" %f", &estados[5].cidades[2].area);

    printf("PIB: ");
    scanf(" %f", &estados[5].cidades[2].pib);

    printf("Número de pontos turísticos: ");
    scanf(" %i", &estados[5].cidades[2].pontosturisticos);

    sprintf(estados[5].cidades[2].codigo, "%s%s", estados[5].nome, estados[5].cidades[2].nome);

    estados[5].cidades[2].densidadepopulacional = estados[5].cidades[2].populacao / estados[5].cidades[2].area;

    estados[5].cidades[2].pibpercapta = estados[5].cidades[2].pib / estados[5].cidades[2].populacao;

    estados[5].cidades[2].superpoder = estados[5].cidades[2].populacao + estados[5].cidades[2].area + estados[5].cidades[2].pib + estados[5].cidades[2].pontosturisticos + estados[5].cidades[2].pibpercapta + (estados[5].cidades[2].area / estados[5].cidades[2].populacao);

    // ************* cidade 4 *************
    printf("\nCadastro da Cidade 4 do estado %s:\n", estados[5].nome);

    printf("Nome da cidade (Numero de 01 a 04): ");
    scanf(" %s", &estados[5].cidades[3].nome);

    printf("População: ");
    scanf(" %lu", &estados[5].cidades[3].populacao);

    printf("Área (em km²): ");
    scanf(" %f", &estados[5].cidades[3].area);

    printf("PIB: ");
    scanf(" %f", &estados[5].cidades[3].pib);

    printf("Número de pontos turísticos: ");
    scanf(" %i", &estados[5].cidades[3].pontosturisticos);

    sprintf(estados[5].cidades[3].codigo, "%s%s", estados[5].nome, estados[5].cidades[3].nome);

    estados[5].cidades[3].densidadepopulacional = estados[5].cidades[3].populacao / estados[5].cidades[3].area;

    estados[5].cidades[3].pibpercapta = estados[5].cidades[3].pib / estados[5].cidades[3].populacao;

    estados[5].cidades[3].superpoder = estados[5].cidades[3].populacao + estados[5].cidades[3].area + estados[5].cidades[3].pib + estados[5].cidades[3].pontosturisticos + estados[5].cidades[3].pibpercapta + (estados[5].cidades[3].area / estados[5].cidades[3].populacao);


// Cadastro do Estado 7
    printf("\nCadastro do Estado 7:\n");
    printf("Digite o nome do estado (Letra entre A e H): ");
    scanf(" %s", estados[6].nome);

    // Cadastro das cidades do Estado 7
    // ************* cidade 1 *************
    printf("\nCadastro da Cidade 1 do estado %s:\n", estados[6].nome);

    printf("Nome da cidade (Numero de 01 a 04): ");
    scanf(" %s", &estados[6].cidades[0].nome);

    printf("População: ");
    scanf(" %lu", &estados[6].cidades[0].populacao);

    printf("Área (em km²): ");
    scanf(" %f", &estados[6].cidades[0].area);

    printf("PIB: ");
    scanf(" %f", &estados[6].cidades[0].pib);

    printf("Número de pontos turísticos: ");
    scanf(" %i", &estados[6].cidades[0].pontosturisticos);

    sprintf(estados[6].cidades[0].codigo, "%s%s", estados[6].nome, estados[6].cidades[0].nome);

    estados[6].cidades[0].densidadepopulacional = estados[6].cidades[0].populacao / estados[6].cidades[0].area;

    estados[6].cidades[0].pibpercapta = estados[6].cidades[0].pib / estados[6].cidades[0].populacao;

    estados[6].cidades[0].superpoder = estados[6].cidades[0].populacao + estados[6].cidades[0].area + estados[6].cidades[0].pib + estados[6].cidades[0].pontosturisticos + estados[6].cidades[0].pibpercapta + (estados[6].cidades[0].area / estados[6].cidades[0].populacao);

    // ************* cidade 2 *************
    printf("\nCadastro da Cidade 2 do estado %s:\n", estados[6].nome);

    printf("Nome da cidade (Numero de 01 a 04): ");
    scanf(" %s", &estados[6].cidades[1].nome);

    printf("População: ");
    scanf(" %lu", &estados[6].cidades[1].populacao);

    printf("Área (em km²): ");
    scanf(" %f", &estados[6].cidades[1].area);

    printf("PIB: ");
    scanf(" %f", &estados[6].cidades[1].pib);

    printf("Número de pontos turísticos: ");
    scanf(" %i", &estados[6].cidades[1].pontosturisticos);

    sprintf(estados[6].cidades[1].codigo, "%s%s", estados[6].nome, estados[6].cidades[1].nome);

    estados[6].cidades[1].densidadepopulacional = estados[6].cidades[1].populacao / estados[6].cidades[1].area;

    estados[6].cidades[1].pibpercapta = estados[6].cidades[1].pib / estados[6].cidades[1].populacao;

    estados[6].cidades[1].superpoder = estados[6].cidades[1].populacao + estados[6].cidades[1].area + estados[6].cidades[1].pib + estados[6].cidades[1].pontosturisticos + estados[6].cidades[1].pibpercapta + (estados[6].cidades[1].area / estados[6].cidades[1].populacao);


    // ************* cidade 3 *************
    printf("\nCadastro da Cidade 3 do estado %s:\n", estados[6].nome);

    printf("Nome da cidade (Numero de 01 a 04): ");
    scanf(" %s", &estados[6].cidades[2].nome);

    printf("População: ");
    scanf(" %lu", &estados[6].cidades[2].populacao);

    printf("Área (em km²): ");
    scanf(" %f", &estados[6].cidades[2].area);

    printf("PIB: ");
    scanf(" %f", &estados[6].cidades[2].pib);

    printf("Número de pontos turísticos: ");
    scanf(" %i", &estados[6].cidades[2].pontosturisticos);

    sprintf(estados[6].cidades[2].codigo, "%s%s", estados[6].nome, estados[6].cidades[2].nome);

    estados[6].cidades[2].densidadepopulacional = estados[6].cidades[2].populacao / estados[6].cidades[2].area;

    estados[6].cidades[2].pibpercapta = estados[6].cidades[2].pib / estados[6].cidades[2].populacao;

    estados[6].cidades[2].superpoder = estados[6].cidades[2].populacao + estados[6].cidades[2].area + estados[6].cidades[2].pib + estados[6].cidades[2].pontosturisticos + estados[6].cidades[2].pibpercapta + (estados[6].cidades[2].area / estados[6].cidades[2].populacao);

    // ************* cidade 4 *************
    printf("\nCadastro da Cidade 4 do estado %s:\n", estados[6].nome);

    printf("Nome da cidade (Numero de 01 a 04): ");
    scanf(" %s", &estados[6].cidades[3].nome);

    printf("População: ");
    scanf(" %lu", &estados[6].cidades[3].populacao);

    printf("Área (em km²): ");
    scanf(" %f", &estados[6].cidades[3].area);

    printf("PIB: ");
    scanf(" %f", &estados[6].cidades[3].pib);

    printf("Número de pontos turísticos: ");
    scanf(" %i", &estados[6].cidades[3].pontosturisticos);

    sprintf(estados[6].cidades[3].codigo, "%s%s", estados[6].nome, estados[6].cidades[3].nome);

    estados[6].cidades[3].densidadepopulacional = estados[6].cidades[3].populacao / estados[6].cidades[3].area;

    estados[6].cidades[3].pibpercapta = estados[6].cidades[3].pib / estados[6].cidades[3].populacao;

    estados[6].cidades[3].superpoder = estados[6].cidades[3].populacao + estados[6].cidades[3].area + estados[6].cidades[3].pib + estados[6].cidades[3].pontosturisticos + estados[6].cidades[3].pibpercapta + (estados[6].cidades[3].area / estados[6].cidades[3].populacao);


// Cadastro do Estado 8
    printf("\nCadastro do Estado 8:\n");
    printf("Digite o nome do estado (Letra entre A e H): ");
    scanf(" %s", estados[7].nome);

    // Cadastro das cidades do Estado 8
    // ************* cidade 1 *************
    printf("\nCadastro da Cidade 1 do estado %s:\n", estados[7].nome);

    printf("Nome da cidade (Numero de 01 a 04): ");
    scanf(" %s", &estados[7].cidades[0].nome);

    printf("População: ");
    scanf(" %lu", &estados[7].cidades[0].populacao);

    printf("Área (em km²): ");
    scanf(" %f", &estados[7].cidades[0].area);

    printf("PIB: ");
    scanf(" %f", &estados[7].cidades[0].pib);

    printf("Número de pontos turísticos: ");
    scanf(" %i", &estados[7].cidades[0].pontosturisticos);

    sprintf(estados[7].cidades[0].codigo, "%s%s", estados[7].nome, estados[7].cidades[0].nome);

    estados[7].cidades[0].densidadepopulacional = estados[7].cidades[0].populacao / estados[7].cidades[0].area;

    estados[7].cidades[0].pibpercapta = estados[7].cidades[0].pib / estados[7].cidades[0].populacao;

    estados[7].cidades[0].superpoder = estados[7].cidades[0].populacao + estados[7].cidades[0].area + estados[7].cidades[0].pib + estados[7].cidades[0].pontosturisticos + estados[7].cidades[0].pibpercapta + (estados[7].cidades[0].area / estados[7].cidades[0].populacao);

    // ************* cidade 2 *************
    printf("\nCadastro da Cidade 2 do estado %s:\n", estados[7].nome);

    printf("Nome da cidade (Numero de 01 a 04): ");
    scanf(" %s", &estados[7].cidades[1].nome);

    printf("População: ");
    scanf(" %lu", &estados[7].cidades[1].populacao);

    printf("Área (em km²): ");
    scanf(" %f", &estados[7].cidades[1].area);

    printf("PIB: ");
    scanf(" %f", &estados[7].cidades[1].pib);

    printf("Número de pontos turísticos: ");
    scanf(" %i", &estados[7].cidades[1].pontosturisticos);

    sprintf(estados[7].cidades[1].codigo, "%s%s", estados[7].nome, estados[7].cidades[1].nome);

    estados[7].cidades[1].densidadepopulacional = estados[7].cidades[1].populacao / estados[7].cidades[1].area;

    estados[7].cidades[1].pibpercapta = estados[7].cidades[1].pib / estados[7].cidades[1].populacao;

    estados[7].cidades[1].superpoder = estados[7].cidades[1].populacao + estados[7].cidades[1].area + estados[7].cidades[1].pib + estados[7].cidades[1].pontosturisticos + estados[7].cidades[1].pibpercapta + (estados[7].cidades[1].area / estados[7].cidades[1].populacao);


    // ************* cidade 3 *************
    printf("\nCadastro da Cidade 3 do estado %s:\n", estados[7].nome);

    printf("Nome da cidade (Numero de 01 a 04): ");
    scanf(" %s", &estados[7].cidades[2].nome);

    printf("População: ");
    scanf(" %lu", &estados[7].cidades[2].populacao);

    printf("Área (em km²): ");
    scanf(" %f", &estados[7].cidades[2].area);

    printf("PIB: ");
    scanf(" %f", &estados[7].cidades[2].pib);

    printf("Número de pontos turísticos: ");
    scanf(" %i", &estados[7].cidades[2].pontosturisticos);

    sprintf(estados[7].cidades[2].codigo, "%s%s", estados[7].nome, estados[7].cidades[2].nome);

    estados[7].cidades[2].densidadepopulacional = estados[7].cidades[2].populacao / estados[7].cidades[2].area;

    estados[7].cidades[2].pibpercapta = estados[7].cidades[2].pib / estados[7].cidades[2].populacao;

    estados[7].cidades[2].superpoder = estados[7].cidades[2].populacao + estados[7].cidades[2].area + estados[7].cidades[2].pib + estados[7].cidades[2].pontosturisticos + estados[7].cidades[2].pibpercapta + (estados[7].cidades[2].area / estados[7].cidades[2].populacao);

    // ************* cidade 4 *************
    printf("\nCadastro da Cidade 4 do estado %s:\n", estados[7].nome);

    printf("Nome da cidade (Numero de 01 a 04): ");
    scanf(" %s", &estados[7].cidades[3].nome);

    printf("População: ");
    scanf(" %lu", &estados[7].cidades[3].populacao);

    printf("Área (em km²): ");
    scanf(" %f", &estados[7].cidades[3].area);

    printf("PIB: ");
    scanf(" %f", &estados[7].cidades[3].pib);

    printf("Número de pontos turísticos: ");
    scanf(" %i", &estados[7].cidades[3].pontosturisticos);

    sprintf(estados[7].cidades[3].codigo, "%s%s", estados[7].nome, estados[7].cidades[3].nome);

    estados[7].cidades[3].densidadepopulacional = estados[7].cidades[3].populacao / estados[7].cidades[3].area;

    estados[7].cidades[3].pibpercapta = estados[7].cidades[3].pib / estados[7].cidades[3].populacao;

    estados[7].cidades[3].superpoder = estados[7].cidades[3].populacao + estados[7].cidades[3].area + estados[7].cidades[3].pib + estados[7].cidades[3].pontosturisticos + estados[7].cidades[3].pibpercapta + (estados[7].cidades[3].area / estados[7].cidades[3].populacao);


// ******************** SAIDA DE DADOS ********************

printf("\n************************** 1° ESTADO **************************\n");
printf("\n************* DADOS DA 1ª CIDADE *************\n");
printf("\nCodigo da carta: %s",estados[0].cidades[0].codigo);
printf("\nPIB: %.1f R$",estados[0].cidades[0].pib);
printf("\nArea: %.1f KM²",estados[0].cidades[0].area);
printf("\nNumero de pontos turisticos: %i",estados[0].cidades[0].pontosturisticos);
printf("\nPopulação: %lu",estados[0].cidades[0].populacao);
printf("\nPIB per capita: %.1f R$",estados[0].cidades[0].pibpercapta);
printf("\nDensidade Populacional: %.1f Cidadãos Por KM²",estados[0].cidades[0].densidadepopulacional);
printf("\nSuper Poder: %f\n",estados[0].cidades[0].superpoder);

printf("\n************* DADOS DA 2ª CIDADE *************\n");
printf("\nCodigo da carta: %s",estados[0].cidades[1].codigo);
printf("\nPIB: %.1f R$",estados[0].cidades[1].pib);
printf("\nArea: %.1f KM²",estados[0].cidades[1].area);
printf("\nNumero de pontos turisticos: %i",estados[0].cidades[1].pontosturisticos);
printf("\nPopulação: %lu",estados[0].cidades[1].populacao);
printf("\nPIB per capita: %.1f R$",estados[0].cidades[1].pibpercapta);
printf("\nDensidade Populacional: %.1f Cidadãos Por KM²",estados[0].cidades[1].densidadepopulacional);
printf("\nSuper Poder: %f\n",estados[0].cidades[1].superpoder);

printf("\n************* DADOS DA 3ª CIDADE *************\n");
printf("\nCodigo da carta: %s",estados[0].cidades[2].codigo);
printf("\nPIB: %.1f R$",estados[0].cidades[2].pib);
printf("\nArea: %.1f KM²",estados[0].cidades[2].area);
printf("\nNumero de pontos turisticos: %i",estados[0].cidades[2].pontosturisticos);
printf("\nPopulação: %lu",estados[0].cidades[2].populacao);
printf("\nPIB per capita: %.1f R$",estados[0].cidades[2].pibpercapta);
printf("\nDensidade Populacional: %.1f Cidadãos Por KM²",estados[0].cidades[2].densidadepopulacional);
printf("\nSuper Poder: %f\n",estados[0].cidades[2].superpoder);

printf("\n************* DADOS DA 4ª CIDADE *************\n");
printf("\nCodigo da carta: %s",estados[0].cidades[3].codigo);
printf("\nPIB: %.1f R$",estados[0].cidades[3].pib);
printf("\nArea: %.1f KM²",estados[0].cidades[3].area);
printf("\nNumero de pontos turisticos: %i",estados[0].cidades[3].pontosturisticos);
printf("\nPopulação: %lu",estados[0].cidades[3].populacao);
printf("\nPIB per capita: %.1f R$",estados[0].cidades[3].pibpercapta);
printf("\nDensidade Populacional: %.1f Cidadãos Por KM²",estados[0].cidades[3].densidadepopulacional);
printf("\nSuper Poder: %f\n",estados[0].cidades[3].superpoder);


printf("\n************************** 2° ESTADO **************************\n");
printf("\n************* DADOS DA 1ª CIDADE *************\n");
printf("\nCodigo da carta: %s",estados[1].cidades[0].codigo);
printf("\nPIB: %.1f R$",estados[1].cidades[0].pib);
printf("\nArea: %.1f KM²",estados[1].cidades[0].area);
printf("\nNumero de pontos turisticos: %i",estados[1].cidades[0].pontosturisticos);
printf("\nPopulação: %lu",estados[1].cidades[0].populacao);
printf("\nPIB per capita: %.1f R$",estados[1].cidades[0].pibpercapta);
printf("\nDensidade Populacional: %.1f Cidadãos Por KM²",estados[1].cidades[0].densidadepopulacional);
printf("\nSuper Poder: %f\n",estados[1].cidades[0].superpoder);

printf("\n************* DADOS DA 2ª CIDADE *************\n");
printf("\nCodigo da carta: %s",estados[1].cidades[1].codigo);
printf("\nPIB: %.1f R$",estados[1].cidades[1].pib);
printf("\nArea: %.1f KM²",estados[1].cidades[1].area);
printf("\nNumero de pontos turisticos: %i",estados[1].cidades[1].pontosturisticos);
printf("\nPopulação: %lu",estados[1].cidades[1].populacao);
printf("\nPIB per capita: %.1f R$",estados[1].cidades[1].pibpercapta);
printf("\nDensidade Populacional: %.1f Cidadãos Por KM²",estados[1].cidades[1].densidadepopulacional);
printf("\nSuper Poder: %f\n",estados[1].cidades[1].superpoder);

printf("\n************* DADOS DA 3ª CIDADE *************\n");
printf("\nCodigo da carta: %s",estados[1].cidades[2].codigo);
printf("\nPIB: %.1f R$",estados[1].cidades[2].pib);
printf("\nArea: %.1f KM²",estados[1].cidades[2].area);
printf("\nNumero de pontos turisticos: %i",estados[1].cidades[2].pontosturisticos);
printf("\nPopulação: %lu",estados[1].cidades[2].populacao);
printf("\nPIB per capita: %.1f R$",estados[1].cidades[2].pibpercapta);
printf("\nDensidade Populacional: %.1f Cidadãos Por KM²",estados[1].cidades[2].densidadepopulacional);
printf("\nSuper Poder: %f\n",estados[1].cidades[2].superpoder);

printf("\n************* DADOS DA 4ª CIDADE *************\n");
printf("\nCodigo da carta: %s",estados[1].cidades[3].codigo);
printf("\nPIB: %.1f R$",estados[1].cidades[3].pib);
printf("\nArea: %.1f KM²",estados[1].cidades[3].area);
printf("\nNumero de pontos turisticos: %i",estados[1].cidades[3].pontosturisticos);
printf("\nPopulação: %lu",estados[1].cidades[3].populacao);
printf("\nPIB per capita: %.1f R$",estados[1].cidades[3].pibpercapta);
printf("\nDensidade Populacional: %.1f Cidadãos Por KM²",estados[1].cidades[3].densidadepopulacional);
printf("\nSuper Poder: %f\n",estados[1].cidades[3].superpoder);


printf("\n************************** 3° ESTADO **************************\n");
printf("\n************* DADOS DA 1ª CIDADE *************\n");
printf("\nCodigo da carta: %s",estados[2].cidades[0].codigo);
printf("\nPIB: %.1f R$",estados[2].cidades[0].pib);
printf("\nArea: %.1f KM²",estados[2].cidades[0].area);
printf("\nNumero de pontos turisticos: %i",estados[2].cidades[0].pontosturisticos);
printf("\nPopulação: %lu",estados[2].cidades[0].populacao);
printf("\nPIB per capita: %.1f R$",estados[2].cidades[0].pibpercapta);
printf("\nDensidade Populacional: %.1f Cidadãos Por KM²",estados[2].cidades[0].densidadepopulacional);
printf("\nSuper Poder: %f\n",estados[2].cidades[0].superpoder);

printf("\n************* DADOS DA 2ª CIDADE *************\n");
printf("\nCodigo da carta: %s",estados[2].cidades[1].codigo);
printf("\nPIB: %.1f R$",estados[2].cidades[1].pib);
printf("\nArea: %.1f KM²",estados[2].cidades[1].area);
printf("\nNumero de pontos turisticos: %i",estados[2].cidades[1].pontosturisticos);
printf("\nPopulação: %lu",estados[2].cidades[1].populacao);
printf("\nPIB per capita: %.1f R$",estados[2].cidades[1].pibpercapta);
printf("\nDensidade Populacional: %.1f Cidadãos Por KM²",estados[2].cidades[1].densidadepopulacional);
printf("\nSuper Poder: %f\n",estados[2].cidades[1].superpoder);

printf("\n************* DADOS DA 3ª CIDADE *************\n");
printf("\nCodigo da carta: %s",estados[2].cidades[2].codigo);
printf("\nPIB: %.1f R$",estados[2].cidades[2].pib);
printf("\nArea: %.1f KM²",estados[2].cidades[2].area);
printf("\nNumero de pontos turisticos: %i",estados[2].cidades[2].pontosturisticos);
printf("\nPopulação: %lu",estados[2].cidades[2].populacao);
printf("\nPIB per capita: %.1f R$",estados[2].cidades[2].pibpercapta);
printf("\nDensidade Populacional: %.1f Cidadãos Por KM²",estados[2].cidades[2].densidadepopulacional);
printf("\nSuper Poder: %f\n",estados[2].cidades[2].superpoder);

printf("\n************* DADOS DA 4ª CIDADE *************\n");
printf("\nCodigo da carta: %s",estados[2].cidades[3].codigo);
printf("\nPIB: %.1f R$",estados[2].cidades[3].pib);
printf("\nArea: %.1f KM²",estados[2].cidades[3].area);
printf("\nNumero de pontos turisticos: %i",estados[2].cidades[3].pontosturisticos);
printf("\nPopulação: %lu",estados[2].cidades[3].populacao);
printf("\nPIB per capita: %.1f R$",estados[2].cidades[3].pibpercapta);
printf("\nDensidade Populacional: %.1f Cidadãos Por KM²",estados[2].cidades[3].densidadepopulacional);
printf("\nSuper Poder: %f\n",estados[2].cidades[3].superpoder);


printf("\n************************** 4° ESTADO **************************\n");
printf("\n************* DADOS DA 1ª CIDADE *************\n");
printf("\nCodigo da carta: %s",estados[3].cidades[0].codigo);
printf("\nPIB: %.1f R$",estados[3].cidades[0].pib);
printf("\nArea: %.1f KM²",estados[3].cidades[0].area);
printf("\nNumero de pontos turisticos: %i",estados[3].cidades[0].pontosturisticos);
printf("\nPopulação: %lu",estados[3].cidades[0].populacao);
printf("\nPIB per capita: %.1f R$",estados[3].cidades[0].pibpercapta);
printf("\nDensidade Populacional: %.1f Cidadãos Por KM²",estados[3].cidades[0].densidadepopulacional);
printf("\nSuper Poder: %f\n",estados[3].cidades[0].superpoder);

printf("\n************* DADOS DA 2ª CIDADE *************\n");
printf("\nCodigo da carta: %s",estados[3].cidades[1].codigo);
printf("\nPIB: %.1f R$",estados[3].cidades[1].pib);
printf("\nArea: %.1f KM²",estados[3].cidades[1].area);
printf("\nNumero de pontos turisticos: %i",estados[3].cidades[1].pontosturisticos);
printf("\nPopulação: %lu",estados[3].cidades[1].populacao);
printf("\nPIB per capita: %.1f R$",estados[3].cidades[1].pibpercapta);
printf("\nDensidade Populacional: %.1f Cidadãos Por KM²",estados[3].cidades[1].densidadepopulacional);
printf("\nSuper Poder: %f\n",estados[3].cidades[1].superpoder);

printf("\n************* DADOS DA 3ª CIDADE *************\n");
printf("\nCodigo da carta: %s",estados[3].cidades[2].codigo);
printf("\nPIB: %.1f R$",estados[3].cidades[2].pib);
printf("\nArea: %.1f KM²",estados[3].cidades[2].area);
printf("\nNumero de pontos turisticos: %i",estados[3].cidades[2].pontosturisticos);
printf("\nPopulação: %lu",estados[3].cidades[2].populacao);
printf("\nPIB per capita: %.1f R$",estados[3].cidades[2].pibpercapta);
printf("\nDensidade Populacional: %.1f Cidadãos Por KM²",estados[3].cidades[2].densidadepopulacional);
printf("\nSuper Poder: %f\n",estados[3].cidades[2].superpoder);

printf("\n************* DADOS DA 4ª CIDADE *************\n");
printf("\nCodigo da carta: %s",estados[3].cidades[3].codigo);
printf("\nPIB: %.1f R$",estados[3].cidades[3].pib);
printf("\nArea: %.1f KM²",estados[3].cidades[3].area);
printf("\nNumero de pontos turisticos: %i",estados[3].cidades[3].pontosturisticos);
printf("\nPopulação: %lu",estados[3].cidades[3].populacao);
printf("\nPIB per capita: %.1f R$",estados[3].cidades[3].pibpercapta);
printf("\nDensidade Populacional: %.1f Cidadãos Por KM²",estados[3].cidades[3].densidadepopulacional);
printf("\nSuper Poder: %f\n",estados[3].cidades[3].superpoder);


printf("\n************************** 5° ESTADO **************************\n");
printf("\n************* DADOS DA 1ª CIDADE *************\n");
printf("\nCodigo da carta: %s",estados[4].cidades[0].codigo);
printf("\nPIB: %.1f R$",estados[4].cidades[0].pib);
printf("\nArea: %.1f KM²",estados[4].cidades[0].area);
printf("\nNumero de pontos turisticos: %i",estados[4].cidades[0].pontosturisticos);
printf("\nPopulação: %lu",estados[4].cidades[0].populacao);
printf("\nPIB per capita: %.1f R$",estados[4].cidades[0].pibpercapta);
printf("\nDensidade Populacional: %.1f Cidadãos Por KM²",estados[4].cidades[0].densidadepopulacional);
printf("\nSuper Poder: %f\n",estados[4].cidades[0].superpoder);

printf("\n************* DADOS DA 2ª CIDADE *************\n");
printf("\nCodigo da carta: %s",estados[4].cidades[1].codigo);
printf("\nPIB: %.1f R$",estados[4].cidades[1].pib);
printf("\nArea: %.1f KM²",estados[4].cidades[1].area);
printf("\nNumero de pontos turisticos: %i",estados[4].cidades[1].pontosturisticos);
printf("\nPopulação: %lu",estados[4].cidades[1].populacao);
printf("\nPIB per capita: %.1f R$",estados[4].cidades[1].pibpercapta);
printf("\nDensidade Populacional: %.1f Cidadãos Por KM²",estados[4].cidades[1].densidadepopulacional);
printf("\nSuper Poder: %f\n",estados[4].cidades[1].superpoder);

printf("\n************* DADOS DA 3ª CIDADE *************\n");
printf("\nCodigo da carta: %s",estados[4].cidades[2].codigo);
printf("\nPIB: %.1f R$",estados[4].cidades[2].pib);
printf("\nArea: %.1f KM²",estados[4].cidades[2].area);
printf("\nNumero de pontos turisticos: %i",estados[4].cidades[2].pontosturisticos);
printf("\nPopulação: %lu",estados[4].cidades[2].populacao);
printf("\nPIB per capita: %.1f R$",estados[4].cidades[2].pibpercapta);
printf("\nDensidade Populacional: %.1f Cidadãos Por KM²",estados[4].cidades[2].densidadepopulacional);
printf("\nSuper Poder: %f\n",estados[4].cidades[2].superpoder);

printf("\n************* DADOS DA 4ª CIDADE *************\n");
printf("\nCodigo da carta: %s",estados[4].cidades[3].codigo);
printf("\nPIB: %.1f R$",estados[4].cidades[3].pib);
printf("\nArea: %.1f KM²",estados[4].cidades[3].area);
printf("\nNumero de pontos turisticos: %i",estados[4].cidades[3].pontosturisticos);
printf("\nPopulação: %lu",estados[4].cidades[3].populacao);
printf("\nPIB per capita: %.1f R$",estados[4].cidades[3].pibpercapta);
printf("\nDensidade Populacional: %.1f Cidadãos Por KM²",estados[4].cidades[3].densidadepopulacional);
printf("\nSuper Poder: %f\n",estados[4].cidades[3].superpoder);


printf("\n************************** 6° ESTADO **************************\n");
printf("\n************* DADOS DA 1ª CIDADE *************\n");
printf("\nCodigo da carta: %s",estados[5].cidades[0].codigo);
printf("\nPIB: %.1f R$",estados[5].cidades[0].pib);
printf("\nArea: %.1f KM²",estados[5].cidades[0].area);
printf("\nNumero de pontos turisticos: %i",estados[5].cidades[0].pontosturisticos);
printf("\nPopulação: %lu",estados[5].cidades[0].populacao);
printf("\nPIB per capita: %.1f R$",estados[5].cidades[0].pibpercapta);
printf("\nDensidade Populacional: %.1f Cidadãos Por KM²",estados[5].cidades[0].densidadepopulacional);
printf("\nSuper Poder: %f\n",estados[5].cidades[0].superpoder);

printf("\n************* DADOS DA 2ª CIDADE *************\n");
printf("\nCodigo da carta: %s",estados[5].cidades[1].codigo);
printf("\nPIB: %.1f R$",estados[5].cidades[1].pib);
printf("\nArea: %.1f KM²",estados[5].cidades[1].area);
printf("\nNumero de pontos turisticos: %i",estados[5].cidades[1].pontosturisticos);
printf("\nPopulação: %lu",estados[5].cidades[1].populacao);
printf("\nPIB per capita: %.1f R$",estados[5].cidades[1].pibpercapta);
printf("\nDensidade Populacional: %.1f Cidadãos Por KM²",estados[5].cidades[1].densidadepopulacional);
printf("\nSuper Poder: %f\n",estados[5].cidades[1].superpoder);

printf("\n************* DADOS DA 3ª CIDADE *************\n");
printf("\nCodigo da carta: %s",estados[5].cidades[2].codigo);
printf("\nPIB: %.1f R$",estados[5].cidades[2].pib);
printf("\nArea: %.1f KM²",estados[5].cidades[2].area);
printf("\nNumero de pontos turisticos: %i",estados[5].cidades[2].pontosturisticos);
printf("\nPopulação: %lu",estados[5].cidades[2].populacao);
printf("\nPIB per capita: %.1f R$",estados[5].cidades[2].pibpercapta);
printf("\nDensidade Populacional: %.1f Cidadãos Por KM²",estados[5].cidades[2].densidadepopulacional);
printf("\nSuper Poder: %f\n",estados[5].cidades[2].superpoder);

printf("\n************* DADOS DA 4ª CIDADE *************\n");
printf("\nCodigo da carta: %s",estados[5].cidades[3].codigo);
printf("\nPIB: %.1f R$",estados[5].cidades[3].pib);
printf("\nArea: %.1f KM²",estados[5].cidades[3].area);
printf("\nNumero de pontos turisticos: %i",estados[5].cidades[3].pontosturisticos);
printf("\nPopulação: %lu",estados[5].cidades[3].populacao);
printf("\nPIB per capita: %.1f R$",estados[5].cidades[3].pibpercapta);
printf("\nDensidade Populacional: %.1f Cidadãos Por KM²",estados[5].cidades[3].densidadepopulacional);
printf("\nSuper Poder: %f\n",estados[5].cidades[3].superpoder);


printf("\n************************** 7° ESTADO **************************\n");
printf("\n************* DADOS DA 1ª CIDADE *************\n");
printf("\nCodigo da carta: %s",estados[6].cidades[0].codigo);
printf("\nPIB: %.1f R$",estados[6].cidades[0].pib);
printf("\nArea: %.1f KM²",estados[6].cidades[0].area);
printf("\nNumero de pontos turisticos: %i",estados[6].cidades[0].pontosturisticos);
printf("\nPopulação: %lu",estados[6].cidades[0].populacao);
printf("\nPIB per capita: %.1f R$",estados[6].cidades[0].pibpercapta);
printf("\nDensidade Populacional: %.1f Cidadãos Por KM²",estados[6].cidades[0].densidadepopulacional);
printf("\nSuper Poder: %f\n",estados[6].cidades[0].superpoder);

printf("\n************* DADOS DA 2ª CIDADE *************\n");
printf("\nCodigo da carta: %s",estados[6].cidades[1].codigo);
printf("\nPIB: %.1f R$",estados[6].cidades[1].pib);
printf("\nArea: %.1f KM²",estados[6].cidades[1].area);
printf("\nNumero de pontos turisticos: %i",estados[6].cidades[1].pontosturisticos);
printf("\nPopulação: %lu",estados[6].cidades[1].populacao);
printf("\nPIB per capita: %.1f R$",estados[6].cidades[1].pibpercapta);
printf("\nDensidade Populacional: %.1f Cidadãos Por KM²",estados[6].cidades[1].densidadepopulacional);
printf("\nSuper Poder: %f\n",estados[6].cidades[1].superpoder);

printf("\n************* DADOS DA 3ª CIDADE *************\n");
printf("\nCodigo da carta: %s",estados[6].cidades[2].codigo);
printf("\nPIB: %.1f R$",estados[6].cidades[2].pib);
printf("\nArea: %.1f KM²",estados[6].cidades[2].area);
printf("\nNumero de pontos turisticos: %i",estados[6].cidades[2].pontosturisticos);
printf("\nPopulação: %lu",estados[6].cidades[2].populacao);
printf("\nPIB per capita: %.1f R$",estados[6].cidades[2].pibpercapta);
printf("\nDensidade Populacional: %.1f Cidadãos Por KM²",estados[6].cidades[2].densidadepopulacional);
printf("\nSuper Poder: %f\n",estados[6].cidades[2].superpoder);

printf("\n************* DADOS DA 4ª CIDADE *************\n");
printf("\nCodigo da carta: %s",estados[6].cidades[3].codigo);
printf("\nPIB: %.1f R$",estados[6].cidades[3].pib);
printf("\nArea: %.1f KM²",estados[6].cidades[3].area);
printf("\nNumero de pontos turisticos: %i",estados[6].cidades[3].pontosturisticos);
printf("\nPopulação: %lu",estados[6].cidades[3].populacao);
printf("\nPIB per capita: %.1f R$",estados[6].cidades[3].pibpercapta);
printf("\nDensidade Populacional: %.1f Cidadãos Por KM²",estados[6].cidades[3].densidadepopulacional);
printf("\nSuper Poder: %f\n",estados[6].cidades[3].superpoder);


printf("\n************************** 8° ESTADO **************************\n");
printf("\n************* DADOS DA 1ª CIDADE *************\n");
printf("\nCodigo da carta: %s",estados[7].cidades[0].codigo);
printf("\nPIB: %.1f R$",estados[7].cidades[0].pib);
printf("\nArea: %.1f KM²",estados[7].cidades[0].area);
printf("\nNumero de pontos turisticos: %i",estados[7].cidades[0].pontosturisticos);
printf("\nPopulação: %lu",estados[7].cidades[0].populacao);
printf("\nPIB per capita: %.1f R$",estados[7].cidades[0].pibpercapta);
printf("\nDensidade Populacional: %.1f Cidadãos Por KM²",estados[7].cidades[0].densidadepopulacional);
printf("\nSuper Poder: %f\n",estados[7].cidades[0].superpoder);

printf("\n************* DADOS DA 2ª CIDADE *************\n");
printf("\nCodigo da carta: %s",estados[7].cidades[1].codigo);
printf("\nPIB: %.1f R$",estados[7].cidades[1].pib);
printf("\nArea: %.1f KM²",estados[7].cidades[1].area);
printf("\nNumero de pontos turisticos: %i",estados[7].cidades[1].pontosturisticos);
printf("\nPopulação: %lu",estados[7].cidades[1].populacao);
printf("\nPIB per capita: %.1f R$",estados[7].cidades[1].pibpercapta);
printf("\nDensidade Populacional: %.1f Cidadãos Por KM²",estados[7].cidades[1].densidadepopulacional);
printf("\nSuper Poder: %f\n",estados[7].cidades[1].superpoder);

printf("\n************* DADOS DA 3ª CIDADE *************\n");
printf("\nCodigo da carta: %s",estados[7].cidades[2].codigo);
printf("\nPIB: %.1f R$",estados[7].cidades[2].pib);
printf("\nArea: %.1f KM²",estados[7].cidades[2].area);
printf("\nNumero de pontos turisticos: %i",estados[7].cidades[2].pontosturisticos);
printf("\nPopulação: %lu",estados[7].cidades[2].populacao);
printf("\nPIB per capita: %.1f R$",estados[7].cidades[2].pibpercapta);
printf("\nDensidade Populacional: %.1f Cidadãos Por KM²",estados[7].cidades[2].densidadepopulacional);
printf("\nSuper Poder: %f\n",estados[7].cidades[2].superpoder);

printf("\n************* DADOS DA 4ª CIDADE *************\n");
printf("\nCodigo da carta: %s",estados[7].cidades[3].codigo);
printf("\nPIB: %.1f R$",estados[7].cidades[3].pib);
printf("\nArea: %.1f KM²",estados[7].cidades[3].area);
printf("\nNumero de pontos turisticos: %i",estados[7].cidades[3].pontosturisticos);
printf("\nPopulação: %lu",estados[7].cidades[3].populacao);
printf("\nPIB per capita: %.1f R$",estados[7].cidades[3].pibpercapta);
printf("\nDensidade Populacional: %.1f Cidadãos Por KM²",estados[7].cidades[3].densidadepopulacional);
printf("\nSuper Poder: %f\n",estados[7].cidades[3].superpoder);

// Seleção das cidades.
int estadoIndex1, cidadeIndex1, estadoIndex2, cidadeIndex2, menuinicial, menuestado1, menucidade1, menuestado2, menucidade2, menuatributos1, menuatributos2;
int comparacao1, comparacao2;

    printf("\n------- Menu Inicial -------\n");
    printf("1. Vs Jogador.\n");
    printf("2. Vs CPU.\n");
    printf("3. Regras.\n");
    printf("4. Quit Game.\n");
    printf("Escolha uma opção: ");
    scanf(" %d", &menuinicial);

    switch (menuinicial)
    {
    case 1:
    // Modo de jogo PVP.
    // Escolha do primeiro jogador.
    printf("\nInciando modo Player vs Player....\n");
    printf("\nPlayer 1: Escolha seu estado.\n");
    printf("1. %s\n", estados[0].nome);
    printf("2. %s\n", estados[1].nome);
    printf("3. %s\n", estados[2].nome);
    printf("4. %s\n", estados[3].nome);
    printf("5. %s\n", estados[4].nome);
    printf("6. %s\n", estados[5].nome);
    printf("7. %s\n", estados[6].nome);
    printf("8. %s\n", estados[7].nome);
    printf("Escolha um estado: ");
    scanf(" %d", &menuestado1);

    printf("\nPlayer 1: Agora escolha sua Cidade.\n");

    switch (menuestado1)
    {
    case 1:

    printf("\nCidades cadastradas no estado %s:\n", estados[0].nome);
    printf("1. %s\n", estados[0].cidades[0].codigo);
    printf("2. %s\n", estados[0].cidades[1].codigo);
    printf("3. %s\n", estados[0].cidades[2].codigo);
    printf("4. %s\n", estados[0].cidades[3].codigo);
    printf("Escolha a cidade: ");
    scanf(" %d", &menucidade1);

    switch (menucidade1)
    {
    case 1:

        printf("\nCidade %s escolhida com sucesso.", estados[0].cidades[0].codigo);
        estadoIndex1 = 0;
        cidadeIndex1 = 0;

        break;

    case 2:

        printf("\nCidade %s escolhida com sucesso.", estados[0].cidades[1].codigo);
        estadoIndex1 = 0;
        cidadeIndex1 = 1;

        break;

    case 3:

        printf("\nCidade %s escolhida com sucesso.", estados[0].cidades[2].codigo);
        estadoIndex1 = 0;
        cidadeIndex1 = 2;

        break;

    case 4:

        printf("\nCidade %s escolhida com sucesso.", estados[0].cidades[3].codigo);
        estadoIndex1 = 0;
        cidadeIndex1 = 3;

        break;
    
    default:

    printf("Opção Invalida.");

        break;

    }

        break;

    case 2:

    printf("\nCidades cadastradas no estado %s:\n", estados[1].nome);
    printf("1. %s\n", estados[1].cidades[0].codigo);
    printf("2. %s\n", estados[1].cidades[1].codigo);
    printf("3. %s\n", estados[1].cidades[2].codigo);
    printf("4. %s\n", estados[1].cidades[3].codigo);
    printf("Escolha a cidade: ");
    scanf(" %d", &menucidade1);

    switch (menucidade1)
    {
    case 1:

        printf("\nCidade %s escolhida com sucesso.", estados[1].cidades[0].codigo);
        estadoIndex1 = 1;
        cidadeIndex1 = 0;

        break;

    case 2:

        printf("\nCidade %s escolhida com sucesso.", estados[1].cidades[1].codigo);
        estadoIndex1 = 1;
        cidadeIndex1 = 1;

        break;

    case 3:

        printf("\nCidade %s escolhida com sucesso.", estados[1].cidades[2].codigo);
        estadoIndex1 = 1;
        cidadeIndex1 = 2;

        break;

    case 4:

        printf("\nCidade %s escolhida com sucesso.", estados[1].cidades[3].codigo);
        estadoIndex1 = 1;
        cidadeIndex1 = 3;

        break;
    
    default:

    printf("Opção Invalida.");

        break;

    }

        break;

    case 3:

    printf("\nCidades cadastradas no estado %s:\n", estados[2].nome);
    printf("1. %s\n", estados[2].cidades[0].codigo);
    printf("2. %s\n", estados[2].cidades[1].codigo);
    printf("3. %s\n", estados[2].cidades[2].codigo);
    printf("4. %s\n", estados[2].cidades[3].codigo);
    printf("Escolha a cidade: ");
    scanf(" %d", &menucidade1);

    switch (menucidade1)
    {
    case 1:

        printf("\nCidade %s escolhida com sucesso.", estados[2].cidades[0].codigo);
        estadoIndex1 = 2;
        cidadeIndex1 = 0;

        break;

    case 2:

        printf("\nCidade %s escolhida com sucesso.", estados[2].cidades[1].codigo);
        estadoIndex1 = 2;
        cidadeIndex1 = 1;

        break;

    case 3:

        printf("\nCidade %s escolhida com sucesso.", estados[2].cidades[2].codigo);
        estadoIndex1 = 2;
        cidadeIndex1 = 2;

        break;

    case 4:

        printf("\nCidade %s escolhida com sucesso.", estados[2].cidades[3].codigo);
        estadoIndex1 = 2;
        cidadeIndex1 = 3;

        break;
    
    default:

    printf("Opção Invalida.");

        break;

    }

        break;

    case 4:

    printf("\nCidades cadastradas no estado %s:\n", estados[3].nome);
    printf("1. %s\n", estados[3].cidades[0].codigo);
    printf("2. %s\n", estados[3].cidades[1].codigo);
    printf("3. %s\n", estados[3].cidades[2].codigo);
    printf("4. %s\n", estados[3].cidades[3].codigo);
    printf("Escolha a cidade: ");
    scanf(" %d", &menucidade1);

    switch (menucidade1)
    {
    case 1:

        printf("\nCidade %s escolhida com sucesso.", estados[3].cidades[0].codigo);
        estadoIndex1 = 3;
        cidadeIndex1 = 0;

        break;

    case 2:

        printf("\nCidade %s escolhida com sucesso.", estados[3].cidades[1].codigo);
        estadoIndex1 = 3;
        cidadeIndex1 = 1;

        break;

    case 3:

        printf("\nCidade %s escolhida com sucesso.", estados[3].cidades[2].codigo);
        estadoIndex1 = 3;
        cidadeIndex1 = 2;

        break;

    case 4:

        printf("\nCidade %s escolhida com sucesso.", estados[3].cidades[3].codigo);
        estadoIndex1 = 3;
        cidadeIndex1 = 3;

        break;
    
    default:

    printf("Opção Invalida.");

        break;

    }

        break;

    case 5:
    printf("\nCidades cadastradas no estado %s:\n", estados[4].nome);
    printf("1. %s\n", estados[4].cidades[0].codigo);
    printf("2. %s\n", estados[4].cidades[1].codigo);
    printf("3. %s\n", estados[4].cidades[2].codigo);
    printf("4. %s\n", estados[4].cidades[3].codigo);
    printf("Escolha a cidade: ");
    scanf(" %d", &menucidade1);

    switch (menucidade1)
    {
    case 1:

        printf("\nCidade %s escolhida com sucesso.", estados[4].cidades[0].codigo);
        estadoIndex1 = 4;
        cidadeIndex1 = 0;

        break;

    case 2:

        printf("\nCidade %s escolhida com sucesso.", estados[4].cidades[1].codigo);
        estadoIndex1 = 4;
        cidadeIndex1 = 1;

        break;

    case 3:

        printf("\nCidade %s escolhida com sucesso.", estados[4].cidades[2].codigo);
        estadoIndex1 = 4;
        cidadeIndex1 = 2;

        break;

    case 4:

        printf("\nCidade %s escolhida com sucesso.", estados[4].cidades[3].codigo);
        estadoIndex1 = 4;
        cidadeIndex1 = 3;

        break;
    
    default:

    printf("Opção Invalida.");

        break;

    }

        break;

    case 6:

    printf("\nCidades cadastradas no estado %s:\n", estados[5].nome);
    printf("1. %s\n", estados[5].cidades[0].codigo);
    printf("2. %s\n", estados[5].cidades[1].codigo);
    printf("3. %s\n", estados[5].cidades[2].codigo);
    printf("4. %s\n", estados[5].cidades[3].codigo);
    printf("Escolha a cidade: ");
    scanf(" %d", &menucidade1);

    switch (menucidade1)
    {
    case 1:

        printf("\nCidade %s escolhida com sucesso.", estados[5].cidades[0].codigo);
        estadoIndex1 = 5;
        cidadeIndex1 = 0;

        break;

    case 2:

        printf("\nCidade %s escolhida com sucesso.", estados[5].cidades[1].codigo);
        estadoIndex1 = 5;
        cidadeIndex1 = 1;

        break;

    case 3:

        printf("\nCidade %s escolhida com sucesso.", estados[5].cidades[2].codigo);
        estadoIndex1 = 5;
        cidadeIndex1 = 2;

        break;

    case 4:

        printf("\nCidade %s escolhida com sucesso.", estados[5].cidades[3].codigo);
        estadoIndex1 = 5;
        cidadeIndex1 = 3;

        break;
    
    default:

    printf("Opção Invalida.");

        break;

    }

        break;

    case 7:

    printf("\nCidades cadastradas no estado %s:\n", estados[6].nome);
    printf("1. %s\n", estados[6].cidades[0].codigo);
    printf("2. %s\n", estados[6].cidades[1].codigo);
    printf("3. %s\n", estados[6].cidades[2].codigo);
    printf("4. %s\n", estados[6].cidades[3].codigo);
    printf("Escolha a cidade: ");
    scanf(" %d", &menucidade1);

    switch (menucidade1)
    {
    case 1:

        printf("\nCidade %s escolhida com sucesso.", estados[6].cidades[0].codigo);
        estadoIndex1 = 6;
        cidadeIndex1 = 0;

        break;

    case 2:

        printf("\nCidade %s escolhida com sucesso.", estados[6].cidades[1].codigo);
        estadoIndex1 = 6;
        cidadeIndex1 = 1;

        break;

    case 3:

        printf("\nCidade %s escolhida com sucesso.", estados[6].cidades[2].codigo);
        estadoIndex1 = 6;
        cidadeIndex1 = 2;

        break;

    case 4:

        printf("\nCidade %s escolhida com sucesso.", estados[6].cidades[3].codigo);
        estadoIndex1 = 6;
        cidadeIndex1 = 3;

        break;
    
    default:

    printf("Opção Invalida.");

        break;

    }

        break;

    case 8:

    printf("\nCidades cadastradas no estado %s:\n", estados[7].nome);
    printf("1. %s\n", estados[7].cidades[0].codigo);
    printf("2. %s\n", estados[7].cidades[1].codigo);
    printf("3. %s\n", estados[7].cidades[2].codigo);
    printf("4. %s\n", estados[7].cidades[3].codigo);
    printf("Escolha a cidade: ");
    scanf(" %d", &menucidade1);

    switch (menucidade1)
    {
    case 1:

        printf("\nCidade %s escolhida com sucesso.", estados[7].cidades[0].codigo);
        estadoIndex1 = 7;
        cidadeIndex1 = 0;

        break;

    case 2:

        printf("\nCidade %s escolhida com sucesso.", estados[7].cidades[1].codigo);
        estadoIndex1 = 7;
        cidadeIndex1 = 1;

        break;

    case 3:

        printf("\nCidade %s escolhida com sucesso.", estados[7].cidades[2].codigo);
        estadoIndex1 = 7;
        cidadeIndex1 = 2;

        break;

    case 4:

        printf("\nCidade %s escolhida com sucesso.", estados[7].cidades[3].codigo);
        estadoIndex1 = 7;
        cidadeIndex1 = 3;

        break;
    
    default:

    printf("Opção Invalida.");

        break;

    }

        break;

    default:

    printf("\nOpção Invalida.\n");

        break;
    }

    // Escolha do segundo jogador.
    printf("\nPlayer 2: Escolha seu estado.\n");
    printf("1. %s\n", estados[0].nome);
    printf("2. %s\n", estados[1].nome);
    printf("3. %s\n", estados[2].nome);
    printf("4. %s\n", estados[3].nome);
    printf("5. %s\n", estados[4].nome);
    printf("6. %s\n", estados[5].nome);
    printf("7. %s\n", estados[6].nome);
    printf("8. %s\n", estados[7].nome);
    printf("Escolha um estado: ");
    scanf(" %d", &menuestado2);

    printf("\nPlayer 2: Agora escolha sua Cidade.\n");

    switch (menuestado2)
    {
    case 1:

    printf("\nCidades cadastradas no estado %s:\n", estados[0].nome);
    printf("1. %s\n", estados[0].cidades[0].codigo);
    printf("2. %s\n", estados[0].cidades[1].codigo);
    printf("3. %s\n", estados[0].cidades[2].codigo);
    printf("4. %s\n", estados[0].cidades[3].codigo);
    printf("Escolha a cidade: ");
    scanf(" %d", &menucidade2);

    switch (menucidade2)
    {
    case 1:

        printf("\nCidade %s escolhida com sucesso.", estados[0].cidades[0].codigo);
        estadoIndex2 = 0;
        cidadeIndex2 = 0;

        break;

    case 2:

        printf("\nCidade %s escolhida com sucesso.", estados[0].cidades[1].codigo);
        estadoIndex2 = 0;
        cidadeIndex2 = 1;

        break;

    case 3:

        printf("\nCidade %s escolhida com sucesso.", estados[0].cidades[2].codigo);
        estadoIndex2 = 0;
        cidadeIndex2 = 2;

        break;

    case 4:

        printf("\nCidade %s escolhida com sucesso.", estados[0].cidades[3].codigo);
        estadoIndex2 = 0;
        cidadeIndex2 = 3;

        break;
    
    default:

    printf("Opção Invalida.");

        break;

    }

        break;

    case 2:

    printf("\nCidades cadastradas no estado %s:\n", estados[1].nome);
    printf("1. %s\n", estados[1].cidades[0].codigo);
    printf("2. %s\n", estados[1].cidades[1].codigo);
    printf("3. %s\n", estados[1].cidades[2].codigo);
    printf("4. %s\n", estados[1].cidades[3].codigo);
    printf("Escolha a cidade: ");
    scanf(" %d", &menucidade2);

    switch (menucidade2)
    {
    case 1:

        printf("\nCidade %s escolhida com sucesso.", estados[1].cidades[0].codigo);
        estadoIndex2 = 1;
        cidadeIndex2 = 0;

        break;

    case 2:

        printf("\nCidade %s escolhida com sucesso.", estados[1].cidades[1].codigo);
        estadoIndex2 = 1;
        cidadeIndex2 = 1;

        break;

    case 3:

        printf("\nCidade %s escolhida com sucesso.", estados[1].cidades[2].codigo);
        estadoIndex2 = 1;
        cidadeIndex2 = 2;

        break;

    case 4:

        printf("\nCidade %s escolhida com sucesso.", estados[1].cidades[3].codigo);
        estadoIndex2 = 1;
        cidadeIndex2 = 3;

        break;
    
    default:

    printf("Opção Invalida.");

        break;

    }

        break;

    case 3:

    printf("\nCidades cadastradas no estado %s:\n", estados[2].nome);
    printf("1. %s\n", estados[2].cidades[0].codigo);
    printf("2. %s\n", estados[2].cidades[1].codigo);
    printf("3. %s\n", estados[2].cidades[2].codigo);
    printf("4. %s\n", estados[2].cidades[3].codigo);
    printf("Escolha a cidade: ");
    scanf(" %d", &menucidade2);

    switch (menucidade2)
    {
    case 1:

        printf("\nCidade %s escolhida com sucesso.", estados[2].cidades[0].codigo);
        estadoIndex2 = 2;
        cidadeIndex2 = 0;

        break;

    case 2:

        printf("\nCidade %s escolhida com sucesso.", estados[2].cidades[1].codigo);
        estadoIndex2 = 2;
        cidadeIndex2 = 1;

        break;

    case 3:

        printf("\nCidade %s escolhida com sucesso.", estados[2].cidades[2].codigo);
        estadoIndex2 = 2;
        cidadeIndex2 = 2;

        break;

    case 4:

        printf("\nCidade %s escolhida com sucesso.", estados[2].cidades[3].codigo);
        estadoIndex2 = 2;
        cidadeIndex2 = 3;

        break;
    
    default:

    printf("Opção Invalida.");

        break;

    }

        break;

    case 4:

    printf("\nCidades cadastradas no estado %s:\n", estados[3].nome);
    printf("1. %s\n", estados[3].cidades[0].codigo);
    printf("2. %s\n", estados[3].cidades[1].codigo);
    printf("3. %s\n", estados[3].cidades[2].codigo);
    printf("4. %s\n", estados[3].cidades[3].codigo);
    printf("Escolha a cidade: ");
    scanf(" %d", &menucidade2);

    switch (menucidade2)
    {
    case 1:

        printf("\nCidade %s escolhida com sucesso.", estados[3].cidades[0].codigo);
        estadoIndex2 = 3;
        cidadeIndex2 = 0;

        break;

    case 2:

        printf("\nCidade %s escolhida com sucesso.", estados[3].cidades[1].codigo);
        estadoIndex2 = 3;
        cidadeIndex2 = 1;

        break;

    case 3:

        printf("\nCidade %s escolhida com sucesso.", estados[3].cidades[2].codigo);
        estadoIndex2 = 3;
        cidadeIndex2 = 2;

        break;

    case 4:

        printf("\nCidade %s escolhida com sucesso.", estados[3].cidades[3].codigo);
        estadoIndex2 = 3;
        cidadeIndex2 = 3;

        break;
    
    default:

    printf("Opção Invalida.");

        break;

    }

        break;

    case 5:
    printf("\nCidades cadastradas no estado %s:\n", estados[4].nome);
    printf("1. %s\n", estados[4].cidades[0].codigo);
    printf("2. %s\n", estados[4].cidades[1].codigo);
    printf("3. %s\n", estados[4].cidades[2].codigo);
    printf("4. %s\n", estados[4].cidades[3].codigo);
    printf("Escolha a cidade: ");
    scanf(" %d", &menucidade2);

    switch (menucidade2)
    {
    case 1:

        printf("\nCidade %s escolhida com sucesso.", estados[4].cidades[0].codigo);
        estadoIndex2 = 4;
        cidadeIndex2 = 0;

        break;

    case 2:

        printf("\nCidade %s escolhida com sucesso.", estados[4].cidades[1].codigo);
        estadoIndex2 = 4;
        cidadeIndex2 = 1;

        break;

    case 3:

        printf("\nCidade %s escolhida com sucesso.", estados[4].cidades[2].codigo);
        estadoIndex2 = 4;
        cidadeIndex2 = 2;

        break;

    case 4:

        printf("\nCidade %s escolhida com sucesso.", estados[4].cidades[3].codigo);
        estadoIndex2 = 4;
        cidadeIndex2 = 3;

        break;
    
    default:

    printf("Opção Invalida.");

        break;

    }

        break;

    case 6:

    printf("\nCidades cadastradas no estado %s:\n", estados[5].nome);
    printf("1. %s\n", estados[5].cidades[0].codigo);
    printf("2. %s\n", estados[5].cidades[1].codigo);
    printf("3. %s\n", estados[5].cidades[2].codigo);
    printf("4. %s\n", estados[5].cidades[3].codigo);
    printf("Escolha a cidade: ");
    scanf(" %d", &menucidade2);

    switch (menucidade2)
    {
    case 1:

        printf("\nCidade %s escolhida com sucesso.", estados[5].cidades[0].codigo);
        estadoIndex2 = 5;
        cidadeIndex2 = 0;

        break;

    case 2:

        printf("\nCidade %s escolhida com sucesso.", estados[5].cidades[1].codigo);
        estadoIndex2 = 5;
        cidadeIndex2 = 1;

        break;

    case 3:

        printf("\nCidade %s escolhida com sucesso.", estados[5].cidades[2].codigo);
        estadoIndex2 = 5;
        cidadeIndex2 = 2;

        break;

    case 4:

        printf("\nCidade %s escolhida com sucesso.", estados[5].cidades[3].codigo);
        estadoIndex2 = 5;
        cidadeIndex2 = 3;

        break;
    
    default:

    printf("Opção Invalida.");

        break;

    }

        break;

    case 7:

    printf("\nCidades cadastradas no estado %s:\n", estados[6].nome);
    printf("1. %s\n", estados[6].cidades[0].codigo);
    printf("2. %s\n", estados[6].cidades[1].codigo);
    printf("3. %s\n", estados[6].cidades[2].codigo);
    printf("4. %s\n", estados[6].cidades[3].codigo);
    printf("Escolha a cidade: ");
    scanf(" %d", &menucidade2);

    switch (menucidade2)
    {
    case 1:

        printf("\nCidade %s escolhida com sucesso.", estados[6].cidades[0].codigo);
        estadoIndex2 = 6;
        cidadeIndex2 = 0;

        break;

    case 2:

        printf("\nCidade %s escolhida com sucesso.", estados[6].cidades[1].codigo);
        estadoIndex2 = 6;
        cidadeIndex2 = 1;

        break;

    case 3:

        printf("\nCidade %s escolhida com sucesso.", estados[6].cidades[2].codigo);
        estadoIndex2 = 6;
        cidadeIndex2 = 2;

        break;

    case 4:

        printf("\nCidade %s escolhida com sucesso.", estados[6].cidades[3].codigo);
        estadoIndex2 = 6;
        cidadeIndex2 = 3;

        break;
    
    default:

    printf("Opção Invalida.");

        break;

    }

        break;

    case 8:

    printf("\nCidades cadastradas no estado %s:\n", estados[7].nome);
    printf("1. %s\n", estados[7].cidades[0].codigo);
    printf("2. %s\n", estados[7].cidades[1].codigo);
    printf("3. %s\n", estados[7].cidades[2].codigo);
    printf("4. %s\n", estados[7].cidades[3].codigo);
    printf("Escolha a cidade: ");
    scanf(" %d", &menucidade2);

    switch (menucidade2)
    {
    case 1:

        printf("\nCidade %s escolhida com sucesso.", estados[7].cidades[0].codigo);
        estadoIndex2 = 7;
        cidadeIndex2 = 0;

        break;

    case 2:

        printf("\nCidade %s escolhida com sucesso.", estados[7].cidades[1].codigo);
        estadoIndex2 = 7;
        cidadeIndex2 = 1;

        break;

    case 3:

        printf("\nCidade %s escolhida com sucesso.", estados[7].cidades[2].codigo);
        estadoIndex2 = 7;
        cidadeIndex2 = 2;

        break;

    case 4:

        printf("\nCidade %s escolhida com sucesso.", estados[7].cidades[3].codigo);
        estadoIndex2 = 7;
        cidadeIndex2 = 3;

        break;
    
    default:

    printf("Opção Invalida.");

        break;

    }

        break;

    default:

    printf("\nOpção Invalida.\n");

        break;
    }

    // Agora com as escolhas feitas vamos para a escolha de atributos a serem comparados e suas comparações.
    if ((cidadeIndex1 == cidadeIndex2) && (estadoIndex1 == estadoIndex2))
    {
        printf("\nAs cidades são identicas, portanto é um empate.\n");

    }else{

        // Escolha do primeiro atributo a ser comparado.
        printf("\nQual o primeiro atributo a ser comparado?\n");
        printf("1. PIB.\n");
        printf("2. Área.\n");
        printf("3. População.\n");
        printf("4. PIB per capta.\n");
        printf("5. Densidade Populacional.\n");
        printf("Escolha uma das opções: ");
        scanf(" %d", &menuatributos1);

        switch (menuatributos1)
        {
        case 1:

            printf("\nComparando o PIB das cidades.\n");
            comparacao1 = (estados[estadoIndex1].cidades[cidadeIndex1].pib > estados[estadoIndex2].cidades[cidadeIndex2].pib) ? 1 : 0;

            break;

        case 2:

            printf("\nComparando a Área das cidades.\n");
            comparacao1 = (estados[estadoIndex1].cidades[cidadeIndex1].area > estados[estadoIndex2].cidades[cidadeIndex2].area) ? 1 : 0;

            break;

        case 3:

            printf("\nComparando a População das cidades.\n");
            comparacao1 = (estados[estadoIndex1].cidades[cidadeIndex1].populacao > estados[estadoIndex2].cidades[cidadeIndex2].populacao) ? 1 : 0;

            break;

        case 4:

            printf("\nComparando o PIB per capita das cidades.\n");
            comparacao1 = (estados[estadoIndex1].cidades[cidadeIndex1].pibpercapta > estados[estadoIndex2].cidades[cidadeIndex2].pibpercapta) ? 1 : 0;

            break;

        case 5:

            printf("\nComparando a Densidade populacional das cidades.\n");
            comparacao1 = (estados[estadoIndex1].cidades[cidadeIndex1].densidadepopulacional < estados[estadoIndex2].cidades[cidadeIndex2].densidadepopulacional) ? 1 : 0;

            break;

        default:

        printf("Opção Invalida.");

            break;
        }

        // Escolha do segundo atributo a ser comparado.
        printf("\nQual o segundo atributo a ser comparado?\n");
        printf("1. PIB.\n");
        printf("2. Área.\n");
        printf("3. População.\n");
        printf("4. PIB per capta.\n");
        printf("5. Densidade Populacional.\n");
        printf("Escolha uma das opções: ");
        scanf(" %d", &menuatributos2);

        if (menuatributos1 == menuatributos2)
        {
            printf("\nERRO: Os atributos a serem comparados são semelhantes.\n");
        }else{
        
        switch (menuatributos2)
        {
        case 1:

            printf("\nComparando o PIB das cidades.\n");
            comparacao2 = (estados[estadoIndex1].cidades[cidadeIndex1].pib > estados[estadoIndex2].cidades[cidadeIndex2].pib) ? 1 : 0;

            break;

        case 2:

            printf("\nComparando a Área das cidades.\n");
            comparacao2 = (estados[estadoIndex1].cidades[cidadeIndex1].area > estados[estadoIndex2].cidades[cidadeIndex2].area) ? 1 : 0;

            break;

        case 3:

            printf("\nComparando a População das cidades.\n");
            comparacao2 = (estados[estadoIndex1].cidades[cidadeIndex1].populacao > estados[estadoIndex2].cidades[cidadeIndex2].populacao) ? 1 : 0;

            break;

        case 4:

            printf("\nComparando o PIB per capita das cidades.\n");
            comparacao2 = (estados[estadoIndex1].cidades[cidadeIndex1].pibpercapta > estados[estadoIndex2].cidades[cidadeIndex2].pibpercapta) ? 1 : 0;

            break;

        case 5:

            printf("\nComparando a Densidade populacional das cidades.\n");
            comparacao2 = (estados[estadoIndex1].cidades[cidadeIndex1].densidadepopulacional < estados[estadoIndex2].cidades[cidadeIndex2].densidadepopulacional) ? 1 : 0;

            break;

        default:

        printf("Opção Invalida.");

            break;
        }
    }
        //Comparação dos atributos, se ambos os atributos forem "1" o player 1 vence, se for "1" e "0" é um empate e se for "0" e "0" o player 2 vence.
        if (comparacao1 && comparacao2)
        {

            printf("\nPlayer 1 é o Vencedor.\n");

        }else if (comparacao1 != comparacao2)
        {

            printf("\nFoi um Empate.\n");

        }else{

            printf("\nJogador 2 é o Vencedor.\n");

        }
        
    }
    
    break;

    case 2:

    // Codigo do modo VS CPU.
    // Randomização da escolha do CPU.

    srand(time(0));
    estadoIndex2 = rand() % 8;

    srand(time(0));
    cidadeIndex2 = rand() % 4;
    
    // Escolha do jogador.

    printf("\nPlayer 1: Escolha seu estado.\n");
    printf("1. %s\n", estados[0].nome);
    printf("2. %s\n", estados[1].nome);
    printf("3. %s\n", estados[2].nome);
    printf("4. %s\n", estados[3].nome);
    printf("5. %s\n", estados[4].nome);
    printf("6. %s\n", estados[5].nome);
    printf("7. %s\n", estados[6].nome);
    printf("8. %s\n", estados[7].nome);
    printf("Escolha um estado: ");
    scanf(" %d", &menuestado1);

    printf("\nPlayer 1: Agora escolha sua Cidade.\n");

    switch (menuestado1)
    {
    case 1:

    printf("\nCidades cadastradas no estado %s:\n", estados[0].nome);
    printf("1. %s\n", estados[0].cidades[0].codigo);
    printf("2. %s\n", estados[0].cidades[1].codigo);
    printf("3. %s\n", estados[0].cidades[2].codigo);
    printf("4. %s\n", estados[0].cidades[3].codigo);
    printf("Escolha a cidade: ");
    scanf(" %d", &menucidade1);

    switch (menucidade1)
    {
    case 1:

        printf("\nCidade %s escolhida com sucesso.", estados[0].cidades[0].codigo);
        estadoIndex1 = 0;
        cidadeIndex1 = 0;

        break;

    case 2:

        printf("\nCidade %s escolhida com sucesso.", estados[0].cidades[1].codigo);
        estadoIndex1 = 0;
        cidadeIndex1 = 1;

        break;

    case 3:

        printf("\nCidade %s escolhida com sucesso.", estados[0].cidades[2].codigo);
        estadoIndex1 = 0;
        cidadeIndex1 = 2;

        break;

    case 4:

        printf("\nCidade %s escolhida com sucesso.", estados[0].cidades[3].codigo);
        estadoIndex1 = 0;
        cidadeIndex1 = 3;

        break;
    
    default:

    printf("Opção Invalida.");

        break;

    }

        break;

    case 2:

    printf("\nCidades cadastradas no estado %s:\n", estados[1].nome);
    printf("1. %s\n", estados[1].cidades[0].codigo);
    printf("2. %s\n", estados[1].cidades[1].codigo);
    printf("3. %s\n", estados[1].cidades[2].codigo);
    printf("4. %s\n", estados[1].cidades[3].codigo);
    printf("Escolha a cidade: ");
    scanf(" %d", &menucidade1);

    switch (menucidade1)
    {
    case 1:

        printf("\nCidade %s escolhida com sucesso.", estados[1].cidades[0].codigo);
        estadoIndex1 = 1;
        cidadeIndex1 = 0;

        break;

    case 2:

        printf("\nCidade %s escolhida com sucesso.", estados[1].cidades[1].codigo);
        estadoIndex1 = 1;
        cidadeIndex1 = 1;

        break;

    case 3:

        printf("\nCidade %s escolhida com sucesso.", estados[1].cidades[2].codigo);
        estadoIndex1 = 1;
        cidadeIndex1 = 2;

        break;

    case 4:

        printf("\nCidade %s escolhida com sucesso.", estados[1].cidades[3].codigo);
        estadoIndex1 = 1;
        cidadeIndex1 = 3;

        break;
    
    default:

    printf("Opção Invalida.");

        break;

    }

        break;

    case 3:

    printf("\nCidades cadastradas no estado %s:\n", estados[2].nome);
    printf("1. %s\n", estados[2].cidades[0].codigo);
    printf("2. %s\n", estados[2].cidades[1].codigo);
    printf("3. %s\n", estados[2].cidades[2].codigo);
    printf("4. %s\n", estados[2].cidades[3].codigo);
    printf("Escolha a cidade: ");
    scanf(" %d", &menucidade1);

    switch (menucidade1)
    {
    case 1:

        printf("\nCidade %s escolhida com sucesso.", estados[2].cidades[0].codigo);
        estadoIndex1 = 2;
        cidadeIndex1 = 0;

        break;

    case 2:

        printf("\nCidade %s escolhida com sucesso.", estados[2].cidades[1].codigo);
        estadoIndex1 = 2;
        cidadeIndex1 = 1;

        break;

    case 3:

        printf("\nCidade %s escolhida com sucesso.", estados[2].cidades[2].codigo);
        estadoIndex1 = 2;
        cidadeIndex1 = 2;

        break;

    case 4:

        printf("\nCidade %s escolhida com sucesso.", estados[2].cidades[3].codigo);
        estadoIndex1 = 2;
        cidadeIndex1 = 3;

        break;
    
    default:

    printf("Opção Invalida.");

        break;

    }

        break;

    case 4:

    printf("\nCidades cadastradas no estado %s:\n", estados[3].nome);
    printf("1. %s\n", estados[3].cidades[0].codigo);
    printf("2. %s\n", estados[3].cidades[1].codigo);
    printf("3. %s\n", estados[3].cidades[2].codigo);
    printf("4. %s\n", estados[3].cidades[3].codigo);
    printf("Escolha a cidade: ");
    scanf(" %d", &menucidade1);

    switch (menucidade1)
    {
    case 1:

        printf("\nCidade %s escolhida com sucesso.", estados[3].cidades[0].codigo);
        estadoIndex1 = 3;
        cidadeIndex1 = 0;

        break;

    case 2:

        printf("\nCidade %s escolhida com sucesso.", estados[3].cidades[1].codigo);
        estadoIndex1 = 3;
        cidadeIndex1 = 1;

        break;

    case 3:

        printf("\nCidade %s escolhida com sucesso.", estados[3].cidades[2].codigo);
        estadoIndex1 = 3;
        cidadeIndex1 = 2;

        break;

    case 4:

        printf("\nCidade %s escolhida com sucesso.", estados[3].cidades[3].codigo);
        estadoIndex1 = 3;
        cidadeIndex1 = 3;

        break;
    
    default:

    printf("Opção Invalida.");

        break;

    }

        break;

    case 5:
    printf("\nCidades cadastradas no estado %s:\n", estados[4].nome);
    printf("1. %s\n", estados[4].cidades[0].codigo);
    printf("2. %s\n", estados[4].cidades[1].codigo);
    printf("3. %s\n", estados[4].cidades[2].codigo);
    printf("4. %s\n", estados[4].cidades[3].codigo);
    printf("Escolha a cidade: ");
    scanf(" %d", &menucidade1);

    switch (menucidade1)
    {
    case 1:

        printf("\nCidade %s escolhida com sucesso.", estados[4].cidades[0].codigo);
        estadoIndex1 = 4;
        cidadeIndex1 = 0;

        break;

    case 2:

        printf("\nCidade %s escolhida com sucesso.", estados[4].cidades[1].codigo);
        estadoIndex1 = 4;
        cidadeIndex1 = 1;

        break;

    case 3:

        printf("\nCidade %s escolhida com sucesso.", estados[4].cidades[2].codigo);
        estadoIndex1 = 4;
        cidadeIndex1 = 2;

        break;

    case 4:

        printf("\nCidade %s escolhida com sucesso.", estados[4].cidades[3].codigo);
        estadoIndex1 = 4;
        cidadeIndex1 = 3;

        break;
    
    default:

    printf("Opção Invalida.");

        break;

    }

        break;

    case 6:

    printf("\nCidades cadastradas no estado %s:\n", estados[5].nome);
    printf("1. %s\n", estados[5].cidades[0].codigo);
    printf("2. %s\n", estados[5].cidades[1].codigo);
    printf("3. %s\n", estados[5].cidades[2].codigo);
    printf("4. %s\n", estados[5].cidades[3].codigo);
    printf("Escolha a cidade: ");
    scanf(" %d", &menucidade1);

    switch (menucidade1)
    {
    case 1:

        printf("\nCidade %s escolhida com sucesso.", estados[5].cidades[0].codigo);
        estadoIndex1 = 5;
        cidadeIndex1 = 0;

        break;

    case 2:

        printf("\nCidade %s escolhida com sucesso.", estados[5].cidades[1].codigo);
        estadoIndex1 = 5;
        cidadeIndex1 = 1;

        break;

    case 3:

        printf("\nCidade %s escolhida com sucesso.", estados[5].cidades[2].codigo);
        estadoIndex1 = 5;
        cidadeIndex1 = 2;

        break;

    case 4:

        printf("\nCidade %s escolhida com sucesso.", estados[5].cidades[3].codigo);
        estadoIndex1 = 5;
        cidadeIndex1 = 3;

        break;
    
    default:

    printf("Opção Invalida.");

        break;

    }

        break;

    case 7:

    printf("\nCidades cadastradas no estado %s:\n", estados[6].nome);
    printf("1. %s\n", estados[6].cidades[0].codigo);
    printf("2. %s\n", estados[6].cidades[1].codigo);
    printf("3. %s\n", estados[6].cidades[2].codigo);
    printf("4. %s\n", estados[6].cidades[3].codigo);
    printf("Escolha a cidade: ");
    scanf(" %d", &menucidade1);

    switch (menucidade1)
    {
    case 1:

        printf("\nCidade %s escolhida com sucesso.", estados[6].cidades[0].codigo);
        estadoIndex1 = 6;
        cidadeIndex1 = 0;

        break;

    case 2:

        printf("\nCidade %s escolhida com sucesso.", estados[6].cidades[1].codigo);
        estadoIndex1 = 6;
        cidadeIndex1 = 1;

        break;

    case 3:

        printf("\nCidade %s escolhida com sucesso.", estados[6].cidades[2].codigo);
        estadoIndex1 = 6;
        cidadeIndex1 = 2;

        break;

    case 4:

        printf("\nCidade %s escolhida com sucesso.", estados[6].cidades[3].codigo);
        estadoIndex1 = 6;
        cidadeIndex1 = 3;

        break;
    
    default:

    printf("Opção Invalida.");

        break;

    }

        break;

    case 8:

    printf("\nCidades cadastradas no estado %s:\n", estados[7].nome);
    printf("1. %s\n", estados[7].cidades[0].codigo);
    printf("2. %s\n", estados[7].cidades[1].codigo);
    printf("3. %s\n", estados[7].cidades[2].codigo);
    printf("4. %s\n", estados[7].cidades[3].codigo);
    printf("Escolha a cidade: ");
    scanf(" %d", &menucidade1);

    switch (menucidade1)
    {
    case 1:

        printf("\nCidade %s escolhida com sucesso.", estados[7].cidades[0].codigo);
        estadoIndex1 = 7;
        cidadeIndex1 = 0;

        break;

    case 2:

        printf("\nCidade %s escolhida com sucesso.", estados[7].cidades[1].codigo);
        estadoIndex1 = 7;
        cidadeIndex1 = 1;

        break;

    case 3:

        printf("\nCidade %s escolhida com sucesso.", estados[7].cidades[2].codigo);
        estadoIndex1 = 7;
        cidadeIndex1 = 2;

        break;

    case 4:

        printf("\nCidade %s escolhida com sucesso.", estados[7].cidades[3].codigo);
        estadoIndex1 = 7;
        cidadeIndex1 = 3;

        break;
    
    default:

    printf("Opção Invalida.");

        break;

    }

        break;

    default:

    printf("\nOpção Invalida.\n");

        break;
    }

    // Agora com as escolhas feitas vamos para a escolha de atributos a serem comparados e suas comparações.

    if ((cidadeIndex1 == cidadeIndex2) && (estadoIndex1 == estadoIndex2))
    {
        printf("\nAs cidades são identicas, portanto é um empate.\n");

    }else{

        // Escolha do primeiro atributo a ser comparado.
        printf("\nQual o primeiro atributo a ser comparado?\n");
        printf("1. PIB.\n");
        printf("2. Área.\n");
        printf("3. População.\n");
        printf("4. PIB per capta.\n");
        printf("5. Densidade Populacional.\n");
        printf("Escolha uma das opções: ");
        scanf(" %d", &menuatributos1);

        switch (menuatributos1)
        {
        case 1:

            printf("\nComparando o PIB das cidades.\n");
            comparacao1 = (estados[estadoIndex1].cidades[cidadeIndex1].pib > estados[estadoIndex2].cidades[cidadeIndex2].pib) ? 1 : 0;

            break;

        case 2:

            printf("\nComparando a Área das cidades.\n");
            comparacao1 = (estados[estadoIndex1].cidades[cidadeIndex1].area > estados[estadoIndex2].cidades[cidadeIndex2].area) ? 1 : 0;

            break;

        case 3:

            printf("\nComparando a População das cidades.\n");
            comparacao1 = (estados[estadoIndex1].cidades[cidadeIndex1].populacao > estados[estadoIndex2].cidades[cidadeIndex2].populacao) ? 1 : 0;

            break;

        case 4:

            printf("\nComparando o PIB per capita das cidades.\n");
            comparacao1 = (estados[estadoIndex1].cidades[cidadeIndex1].pibpercapta > estados[estadoIndex2].cidades[cidadeIndex2].pibpercapta) ? 1 : 0;

            break;

        case 5:

            printf("\nComparando a Densidade populacional das cidades.\n");
            comparacao1 = (estados[estadoIndex1].cidades[cidadeIndex1].densidadepopulacional < estados[estadoIndex2].cidades[cidadeIndex2].densidadepopulacional) ? 1 : 0;

            break;

        default:

        printf("Opção Invalida.");

            break;
        }

        // Escolha do segundo atributo a ser comparado.
        printf("\nQual o segundo atributo a ser comparado?\n");
        printf("1. PIB.\n");
        printf("2. Área.\n");
        printf("3. População.\n");
        printf("4. PIB per capta.\n");
        printf("5. Densidade Populacional.\n");
        printf("Escolha uma das opções: ");
        scanf(" %d", &menuatributos2);

        if (menuatributos1 == menuatributos2)
        {
            printf("\nERRO: Os atributos a serem comparados são semelhantes.\n");
        }else{
        
        switch (menuatributos2)
        {
        case 1:

            printf("\nComparando o PIB das cidades.\n");
            comparacao2 = (estados[estadoIndex1].cidades[cidadeIndex1].pib > estados[estadoIndex2].cidades[cidadeIndex2].pib) ? 1 : 0;

            break;

        case 2:

            printf("\nComparando a Área das cidades.\n");
            comparacao2 = (estados[estadoIndex1].cidades[cidadeIndex1].area > estados[estadoIndex2].cidades[cidadeIndex2].area) ? 1 : 0;

            break;

        case 3:

            printf("\nComparando a População das cidades.\n");
            comparacao2 = (estados[estadoIndex1].cidades[cidadeIndex1].populacao > estados[estadoIndex2].cidades[cidadeIndex2].populacao) ? 1 : 0;

            break;

        case 4:

            printf("\nComparando o PIB per capita das cidades.\n");
            comparacao2 = (estados[estadoIndex1].cidades[cidadeIndex1].pibpercapta > estados[estadoIndex2].cidades[cidadeIndex2].pibpercapta) ? 1 : 0;

            break;

        case 5:

            printf("\nComparando a Densidade populacional das cidades.\n");
            comparacao2 = (estados[estadoIndex1].cidades[cidadeIndex1].densidadepopulacional < estados[estadoIndex2].cidades[cidadeIndex2].densidadepopulacional) ? 1 : 0;

            break;

        default:

        printf("Opção Invalida.");

            break;
        }
    }
        //Comparação dos atributos, se ambos os atributos forem "1" o player vence, se for "1" e "0" é um empate e se for "0" e "0" o CPU vence.
        if (comparacao1 && comparacao2)
        {

            printf("\nVocê Venceu!\n");

        }else if (comparacao1 != comparacao2)
        {

            printf("\nFoi um Empate!\n");

        }else{

            printf("\nVocê Perdeu!\n");

        }

        break;
    }

    case 3:
    // Exibição das regras do jogo.
    printf("\n ---------- REGRAS ----------\n");
    printf("1. Existem 8 estados, contendo 4 cidades cada.\n");
    printf("2. As cidades possuem atributos.\n");
    printf("3. Os jogadores escolheram 1 cidade cada.\n");
    printf("4. Após a seleção das cidades os jogadores poderam escolher 2 atributos a serem comparados.\n");
    printf("5. Cada atributo vale 1 ponto, vence aquele que fizer 2 pontos.\n");
    printf("6. No modo Vs CPU, a segunda carta será escolhida aleatoriamente.\n");
    printf("Novo commit\n");

        break;

    case 4:
    // Mensagem de Saida.
    printf("\nSaindo...\n");

        break;
    
    default:
    // Aviso de escolha invalida no menu inicial.
    printf("\nOpção Invalida\n");

        break;
    }

        printf("\n--------------- GAME OVER ---------------\n");

    return 0;
}