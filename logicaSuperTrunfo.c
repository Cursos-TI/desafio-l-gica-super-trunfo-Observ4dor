#include <stdio.h>
#include <stdlib.h>

// Trabalho 2
// Super Trunfo em C: desenvolvendo a lógica do jogo.
// Pra mim foi um trabalho bem complexo pra quem não entendia quase nada de programação, Mas com muita tentativa espero que esteja certo.

int opcao;
int criterio1, criterio2;

int main() {
    char estado1[20], estado2[20];
    char codigocarta1[20], codigocarta2[20];   
    char cidade1[32], cidade2[32];
    float area1, area2;
    float pib1, pib2;
    unsigned long int populacao1, populacao2;
    int turisticos1, turisticos2;
    float densidade1, densidade2;
    float pib_percapita1, pib_percapita2;
    float superpoder1, superpoder2;
    
    printf("\n ### Bem-Vindo ao jogo Super Trunfo 2.0 ###\n");
    printf("\n Menu Principal\n");
    printf("1. Iniciar Jogo\n");
    printf("2. Regras \n");
    printf("3. Sair \n");
    scanf("%d", &opcao);

    switch (opcao) {
    case 1:
        printf("Executando o jogo...\n");
        break;
    case 2: 
        printf("O jogo é baseado em uma comparação de duas cartas.\n");
        printf("As Regras são: \n");
        printf("O usuário irá inserir os dados de cada carta.\n");
        printf("Os Atributos serão somados e divididos ou multiplicados.\n");
        printf("Será exibido os resultados.\n");
        printf("E ao final, o usuário escolherá qual atributo irá comparar.\n");
        printf("Os Atributos comparados definirão o vencedor, sendo maior ou menor a sua escolha;\n");
        printf("NÃO PODE ESCOLHER OS MESMOS ATRIBUTOS PARA COMPARAÇÃO.\n");
        printf("Já que você já viu as regras, vamos começar.\n\n");
        break;
    case 3:
        printf("Saindo do jogo...\n");
        exit(0); // Para sair do programa
        break;
    default:
        printf("Opção Inválida.\n");
        break;
    }

    // Cadastro das cartas
    printf("Cadastro da Carta 1!\n");
    printf("Entre com seu estado: \n");
    scanf(" %[^\n]", estado1);
    printf("Digite o Código da carta: \n");
    scanf("%s", codigocarta1);
    printf("Entre com sua cidade: \n");
    scanf(" %[^\n]", cidade1);
    printf("Digite a área (em km²): \n");
    scanf("%f", &area1);
    printf("Digite a população: \n");
    scanf("%lu", &populacao1);
    printf("Digite o PIB: \n");
    scanf("%f", &pib1);
    printf("Número de pontos turísticos: \n");
    scanf("%d", &turisticos1);

    // Calculando a densidade populacional
    densidade1 = populacao1 / area1;
    printf("Densidade populacional: %.2f\n", densidade1);

    // Calculando o PIB per capita
    pib_percapita1 = pib1 / populacao1;
    printf("PIB per capita: %.2f\n", pib_percapita1);

    // Calculando o super poder
    superpoder1 = populacao1 + area1 + pib1 + turisticos1;
    printf("Super poder: %.2f\n", superpoder1);

    // Cadastro da carta 2
    printf("Cadastro da Carta 2!\n");
    printf("Entre com seu estado: \n");
    scanf(" %[^\n]", estado2);
    printf("Digite o Código da carta: \n");
    scanf("%s", codigocarta2);
    printf("Entre com sua cidade: \n");
    scanf(" %[^\n]", cidade2);
    printf("Digite a área (em km²): \n");
    scanf("%f", &area2);
    printf("Digite a população: \n");
    scanf("%lu", &populacao2);
    printf("Digite o PIB: \n");
    scanf("%f", &pib2);
    printf("Número de pontos turísticos: \n");
    scanf("%d", &turisticos2);

    // Calculando a densidade populacional
    densidade2 = populacao2 / area2;
    printf("Densidade populacional: %.2f\n", densidade2);

    // Calculando o PIB per capita
    pib_percapita2 = pib2 / populacao2;
    printf("PIB per capita: %.2f\n", pib_percapita2);

    // Calculando o super poder
    superpoder2 = populacao2 + area2 + pib2 + turisticos2;
    printf("Super poder: %.2f\n\n", superpoder2);

     // Mostrando os Resultaddos das cartas
     // Resultado carta 1
     printf("======= RESULTADOS CARTA 1 =======\n");
     printf("Estado: %s\n", estado1);
     printf("Código carta: %s\n", codigocarta1);
     printf("Cidade: %s\n", cidade1);
     printf("Área (em km²): %.2f\n", area1);
     printf("População: %lu\n", populacao1);
     printf("PIB: %.2f\n", pib1);
     printf("Pontos Turísticos: %d\n", turisticos1);
     printf("Densidade Populacional: %.2f\n", densidade1);
     printf("PIB per Capita: %.2f\n", pib_percapita1);
     printf("Super Poder: %.2f\n", superpoder1);
 
 
     // Resultado carta 2
     printf("======= RESULTADOS CARTA 2 =======\n");
     printf("Estado: %s\n", estado2);
     printf("Código carta: %s\n", codigocarta2);
     printf("Cidade: %s\n", cidade2);
     printf("Área (em km²): %.2f\n", area2);
     printf("População: %lu\n", populacao2);
     printf("PIB: %.2f\n", pib2);
     printf("Pontos Turísticos: %d\n", turisticos2);
     printf("Densidade Populacional: %.2f\n", densidade2);
     printf("PIB per Capita: %.2f\n", pib_percapita2);
     printf("Super Poder: %.2f\n\n", superpoder2);
 

    printf("### COMPARANDO AS CARTAS ###\n");
    printf("\n ==== Escolha os atributos para comparação === \n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turísticos\n");
    printf("5. Densidade Populacional\n");
    printf("6. PIB per capita\n");
    printf("7. Super Poder\n");

    // Escolhendo o primeiro critério
    printf("Escolha o primeiro critério (1 a 7):\n");
    scanf(" %d", &criterio1);
    if (criterio1 < 1 || criterio1 > 7) {
        printf("Opção Inválida!\n");
        return 1; // Finaliza o programa se a entrada for inválida
    }

    // Escolhendo o segundo critério
    printf("Escolha o segundo critério (1 a 7):\n");
    scanf(" %d", &criterio2);
    if (criterio2 < 1 || criterio2 > 7 || criterio1 == criterio2) {
        printf("Opção Inválida ou você escolheu o mesmo critério!\n");
        return 1; // Finaliza o programa se a entrada for inválida
    }

    // Comparando os criterios
    int resultado_criterio1 = 0, resultado_criterio2 = 0;

    switch (criterio1) {
        case 1:
            resultado_criterio1 = populacao1 > populacao2 ? 1 : 0;
            break;
        case 2:
            resultado_criterio1 = area1 > area2 ? 1 : 0;
            break;
        case 3:
            resultado_criterio1 = pib1 > pib2 ? 1 : 0;
            break;
        case 4:
            resultado_criterio1 = turisticos1 > turisticos2 ? 1 : 0;
            break;
        case 5:
            resultado_criterio1 = densidade1 < densidade2 ? 1 : 0;
            break;
        case 6:
            resultado_criterio1 = pib_percapita1 > pib_percapita2 ? 1 : 0;
            break;
        case 7:
            resultado_criterio1 = superpoder1 > superpoder2 ? 1 : 0;
            break;
    }

    switch (criterio2) {
        case 1:
            resultado_criterio2 = populacao1 > populacao2 ? 1 : 0;
            break;
        case 2:
            resultado_criterio2 = area1 > area2 ? 1 : 0;
            break;
        case 3:
            resultado_criterio2 = pib1 > pib2 ? 1 : 0;
            break;
        case 4:
            resultado_criterio2 = turisticos1 > turisticos2 ? 1 : 0;
            break;
        case 5:
            resultado_criterio2 = densidade1 < densidade2 ? 1 : 0;
            break;
        case 6:
            resultado_criterio2 = pib_percapita1 > pib_percapita2 ? 1 : 0;
            break;
        case 7:
            resultado_criterio2 = superpoder1 > superpoder2 ? 1 : 0;
            break;
    }

    // Calculando a soma dos resultados pra determinar o vencedor
    int soma1 = resultado_criterio1 + resultado_criterio2;
    int soma2 = (resultado_criterio1 = 0 ? 1 : 0) + (resultado_criterio2 = 0 ? 1 : 0);

    // Determinando o vencedor final
    if (soma1 > soma2) {
        printf("A carta 1 venceu a rodada!\n");
    } else if (soma1 < soma2) {
        printf("A carta 2 venceu a rodada! \n");
    } else {
        printf("Empatou!\n");
    }

    return 0;
}
