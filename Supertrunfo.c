#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    /*No nível Novato, você iniciará criando o sistema básico do jogo Super Trunfo com o tema "Países". As cartas serão divididas por estados, cada um com quatro cidades.

Cada país será dividido em oito estados, identificados pelas letras de A a H. Cada est
ado terá quatro cidades, numeradas de 1 a 4. A combinação da
 letra do estado e o número da cidade define o código da carta (por exemplo, A01, A02, B01, B02).*/
    /*conteudo todo errado eu fiz merda aqui vou refazer denovo*/

    char primeiraletra = ""; /*para representar os estados*/
    char codigocarta[10] = ""; /*aqui é a letra do estado seguido de um numero de 0 a 4*/
    char nomecidade[20] = ""; /*aqui é o nome da cidade*/
    int populacao = 0; /*aqui é a população que deve ser inserida*/
    float area = 0; /*aqui é a area do tipo float*/
    float pib = 0; /*o nosso pib*/
    int pontosturisticos = 0;

    /*pedir para inserir informações*/
    printf("Super trunfo em c\n Insira os dados para começar:\n Insira a primeira letra da carta para representar os estados de A a H\n");
    scanf("%c", &primeiraletra);
    printf("Insira o código da carta: Letra do estado seguido de um numero de 0 a 4\n");
    scanf("%s", &codigocarta); /*Para representar os estados*/
    printf("insira o nome da cidade\n");
    scanf("%s", &nomecidade); 
    printf("insira a população\n");
    scanf("%d", &populacao);
    printf("insira a area\n");
    scanf("%f", &area);
    /*imprimindo dados*/
    printf("esses são os dados da primeira carta\n");
    printf("primeira letra: (%c)\n", primeiraletra);
    printf("codigo carta: (%s)\n", codigocarta);
    printf("nome da cidade: (%s)\n", nomecidade);
    printf("população: (%d)\n", populacao); /*Decimal*/
    printf("area: (%f)\n", area);

    /*Segunda carta*/
    printf("coloque os dados da segunda carta para comparação\n");
    char primeiraletra2 = ""; 
    char codigocartasegunda[10] = ""; 
    char nomecidadesegunda[20] = ""; 
    int populacao2 = 0; 
    float area2 = 0; 
    float pib2 = 0; 
    int pontosturisticos2 = 0;

    /*inserindo dados*/
    printf("Insira a primeira letra da carta para representar os estados de A a H\n");
    scanf(" %c", &primeiraletra2);
    printf("Insira o código da carta: Letra do estado seguido de um numero de 0 a 4\n");
    scanf("%s", codigocartasegunda); /*Para representar os estados*/
    printf("insira o nome da cidade\n");
    scanf("%s", nomecidadesegunda); 
    printf("insira a população\n");
    scanf("%d", &populacao2);
    printf("insira a area\n");
    scanf("%f", &area2);

    /*imprimindo dados*/
    printf("esses são os dados da segunda carta\n");
    printf("primeira letra: (%c)\n", primeiraletra2);
    printf("codigo carta: (%s)\n", codigocartasegunda);
    printf("nome da cidade: (%s)\n", nomecidadesegunda);
    printf("população: (%d)\n", populacao2); /*Decimal*/
    printf("area: (%f)\n", area2);

    /*fim do código*/


    return 0;
}
