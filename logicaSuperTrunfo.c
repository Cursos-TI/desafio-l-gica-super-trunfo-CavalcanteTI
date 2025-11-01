#include <stdio.h>

int main(){
char Estado, codigodacarta[5], nomedacidade[20];
unsigned int populacao, numerodepontost;
float areakm, densidadepopulacional, pibpercapita, pib;

char Estado2, codigodacarta2[6], nomedacidade2[22];
int populacao2, numerodepontost2;
float areakm2, densidadepopulacional2, pibpercapita2, pib2;


//==== ADICIONANDO AS INFORMAÇOES PARA A PRIMEIRA CARTA ====//

printf("====Cadastrando a primeira carta!====\n");

printf("Digite uma letra de A - H:\n");
scanf("%c" , &Estado);


printf("Digite o codigo da carta:\n");
scanf("%s", codigodacarta);


printf("Digite o nome da cidade:\n");
scanf(" %[^\n]", nomedacidade);

printf("Digite o numero da Habitantes da cidade:\n");
scanf("%u", &populacao);


printf("Digite a Área da cidade:\n");
scanf("%f",&areakm);


printf("Digite o Pib:\n");
scanf("%f", &pib);


printf("Digite o numero de pontos Turisticos:\n");
scanf("%u", &numerodepontost);

//==== RESULTADO DAS CARTAS APÓS AS INFORMAÇOES ADICIONADAS ====//

printf("===== Dados da Carta 1 =====\n");
printf("Estado: %c\n" ,Estado);
printf("Codigo: %s\n", codigodacarta);
printf("Nome da cidade: %s\n", nomedacidade);
printf("População: %u\n", populacao);
printf("Área: %.2f km²\n", areakm);
printf("PIB: %.2f trilhoes de reais\n", pib);
printf("Numero de Pontos turisticos: %u", numerodepontost);
printf("\n");

pibpercapita = (float) pib / populacao;
printf("PIB per Capita: %.2f Reais\n", pibpercapita);

densidadepopulacional = (float) populacao / areakm;
printf("Densidade Populacional de: %f hab/km²\n", densidadepopulacional);



//====ADICIONANDO AS INFORMAÇOES INSERIDAS PARA A SEGUNDA CARTA====//

printf("\n====Cadastrando a segunda Carta!====\n");


printf("Digite uma letra de A - H:\n");
scanf(" %c", &Estado2);


printf("Digite o codigo da carta:\n");
scanf("%s", codigodacarta2);


printf("Digite o nome da cidade:\n");
scanf(" %[^\n]", nomedacidade2);


printf("Digite o numero da Habitantes da cidade:\n");
scanf("%u", &populacao2);


printf("Digite a Área da cidade:\n");
scanf("%f", &areakm2);


printf("Digite o Pib:\n");
scanf("%f", &pib2);


printf("Digite o numero de pontos Turisticos:\n");
scanf("%u", &numerodepontost2);

//==== RESULTADO DAS CARTAS APÓS AS INFORMAÇOES ADICIONADAS ====//  

printf("\n===== Dados da Carta 2 =====\n");
printf("Estado: %c\n" , Estado2);
printf("Codigo: %s\n" , codigodacarta2);
printf("Nome da cidade: %s\n" , nomedacidade2);
printf("População: %u\n" , populacao2);
printf("Área: %.2f km²\n" , areakm2);
printf("PIB: %.2f bilhoes de reais\n" , pib2);
printf("Numero de Pontos turisticos: %u\n" , numerodepontost2);

pibpercapita2 = (float) pib2 / populacao2;
densidadepopulacional2 = (float) populacao2 / areakm2;
printf("Densidade Populacional de : %.2f hab/km²\n" , densidadepopulacional2);
printf("PIB per Capita: %.2f Reais\n", pibpercapita2);

//==== COMPARANDO OS ATRIBUTOS DAS DUAS CARTAS ====//


unsigned int carta1RJ , carta2SP;

printf("\nComparação de cartas (Atributo: População):\n");

printf("\nCarta 1 - %s: %u\n", nomedacidade , populacao);
printf("Carta 2 - %s: %u\n", nomedacidade2 , populacao2);

if (populacao > populacao2){

printf("Resultado: CARTA 1 (%s) VENCEUUU!\n", nomedacidade);
}

else {
printf("Resultado: CARTA 2  (%s) VENCEUUU!\n", nomedacidade2);
}

int opcao;


printf("\n### VAMOS JOGAR SUPER TRUNFO ###\n");

printf("=== SUPER TRUNFO INTERATIVO ===\n\n");
    printf("Escolha o atributo para comparar:\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turisticos\n");
    printf("5 - Densidade Demografica\n");
    printf("Opcao: ");
    scanf("%d", &opcao);

    

switch (opcao) {
        case 1:
            printf("\nPopulacao: %s = %d x %s = %d\n", nomedacidade, populacao, nomedacidade2, populacao2);
            if (populacao > populacao2)
                printf("Vencedor: %s\n", nomedacidade);
            else if (populacao2 > populacao)
                printf("Vencedor: %s\n", nomedacidade2);
            else
                printf("Empate!\n");
            break;

        case 2:
            printf("\nArea: %s = %.2f x %s = %.2f\n", nomedacidade , nomedacidade2 , areakm , areakm2);
            if (areakm > areakm2)
                printf("Vencedor: %s\n", nomedacidade);
            else if (areakm2 > areakm)
                printf("Vencedor: %s\n", nomedacidade2);
            else
                printf("Empate!\n");
            break;

        case 3:
            printf("\nPIB: %s = %.2f x %s = %.2f\n", nomedacidade , nomedacidade2 , pib, pib2);
            if (pib > pib2)
                printf("Vencedor: %s\n", nomedacidade);
            else if (pib2 > pib)
                printf("Vencedor: %s\n", nomedacidade2);
            else
                printf("Empate!\n");
            break;

        case 4:
            printf("\nPontos Turisticos: %s = %d x %s = %d\n", nomedacidade , nomedacidade2 , numerodepontost, numerodepontost2);
            if (numerodepontost > numerodepontost2)
                printf("Vencedor: %s\n", nomedacidade);
            else if (numerodepontost2 > numerodepontost)
                printf("Vencedor: %s\n", nomedacidade2);
            else
                printf("Empate!\n");
            break;

        case 5:
            printf("\nDensidade Demografica: %s = %.2f x %s = %.2f\n", nomedacidade , nomedacidade2 , densidadepopulacional, densidadepopulacional2);
            
            
            if (densidadepopulacional < densidadepopulacional2)
                printf("Vencedor: %s\n", nomedacidade);
            else if (densidadepopulacional2 < densidadepopulacional)
                printf("Vencedor: %s\n", nomedacidade2);
            else
                printf("Empate!\n");
            break;

        default:
            printf("Opcao invalida!\n");
    }

    return 0;
}  
   
