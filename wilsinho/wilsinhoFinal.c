#include <stdio.h> //biblioteca de saída e entrada
#include <stdlib.h>//p/ system
#include <math.h>// de matematica
#include <conio.h>// p/ colocar fundo e letras colorido

int main() { //função principal

    float a1,r,an,Sn,q,a2; // declaraçao de variaveis float
    int op,n,op1; // declaraçao de variaveis int

    do { // funçao faça

        system("color fc");// coloca cor
        system("pause");// pausa o sistema ate o usuario digitar algo
        system("cls");// limpa o conteudo anterior

        printf("\nEscolha: \n\n");//comando escreva

        printf("\t[1] Progressao Aritmetica - PA:\n\n");//escreve na tela

        printf("\t[2] Progressao Geometrica - PG:\n\n");//escreve na tela

        printf("\t[3] Razao\n\n ");//escreve na tela

        printf("\t[4] Sair\n\n\nEscolha sua opcao: ");//escreve na tela
        scanf("%i",&op);// le a opçao que o usuario escolher

        switch(op) { //funçao escolha

        case 1:// 1 caso de escolha
            system("cls");// apaga o conteudo anterior

            printf("\n\tProgressao Aritmetica-PA\n");//escreve na tela

            printf("\n\t\tan=a1+(n-1).r\n");//escreve na tela

            printf("\nEntre com o valor do primeiro termo: ");//escreve na tela
            scanf("%f",&a1);//le o valor que o usuario escolher

            printf("\nEntre com o valor da razao: ");//escreve na tela

            do {//funçao faça
                scanf("%f",&r);//le as variaveis
             }//fecha a funçao

            while(r==0);//comando enquanto

            printf("\nNumero de termos: ");//escreve na tela

            do {//funçao faça
                scanf("%i",&n);//o que o usuario digitar
            }//fecha a funçao

            while(n<=0);//comando enquanto

            an = (a1 + (n - 1) *r);//faz a conta
            Sn = (a1 + an)/2;//faz a conta

            printf("\n\nSeu termo da P.A.-an: %2.f\n\n",an);//escreve na tela,inserindo os resultados
            printf("A Soma do termos da P.A.-Sn: %2.f\n\n",Sn);//escreve na tela, nserindo os resultados

            break;//para, quando acaba o caso 1
            system("pause");//pausa o sistema até o usuario digitar algo
            system("cls");//limpa tela

        case 2://2 caso do escolha

            system("cls");//limpa tela

            printf("\n\tProgressao Geometrica-PG\n");//escreve na tela

            printf("\n\t\tan = a1.qn-1\n");//escreve na tela

            printf("\nEntre com o valor do primeiro termo: ");//escreve na tela
            scanf("%f",&a1);//le a variavel

            printf("\nEntre com o valor da razao: ");//escreve na tela

            do {//funçao faça
                scanf("%f",&q);
            }//fecha funçao

            while(q==0);//enquanto

            printf("\nNumero de termos: ");//escreve na tela

            do {//faça
                scanf("%i",&n);
            }//fecha funçao

            while(n<=0);//enquanto

            an = (a1 * pow(q,n-1));//continhas
            Sn = ((a1*(pow(q,n) - 1))/(q-1));//e mais continhas

            printf("\nSeu termo da P.G. - an: %2.f\n\n",an);//escreve na tela, mostrando o resultado
            printf("A Soma do termos da P.G. - Sn: %2.f\n\n",Sn);//escreve na tela,mostrando o resultado

            break;//para o caso
            system("pause");//pausa o sistema
			system("cls");//limpa tela

        case 3://caso 3 do escolha

            system("cls");//limpa tela

            printf("\n\tRazao\n\n ");//escreve  na tela

            printf("escolha:\n\n");//escreve na tela

            printf("[1] razao PA:\n\n");//escreve na tela

            printf("[2] Razao PG:\n");//escreve na tela
            printf("\nEscolha sua opcao: ");
            scanf("%i",&op1);//le a opção

            switch(op1) {//função escolha

            case 1://caso 1 do segundo escolha

                system("cls");//limpa tela

                printf("Razao PA:\n");//escreve na tela

                printf("\n\tr=a2-a1\n");//escreve na tela

                printf("\ninsira a2: ");//escreve na tela
                scanf("%f",&a2);//le o valor inserido

                printf("\ninsira a1: ");//escreve na tela
                scanf("%f",&a1);//le o valor inserido

                r = a2-a1;//calcula a razão

                printf("\nSua razao de PA: %2.f\n\n\n",r );//escreve na tela, mostrando o resultado

                break;//para o casso
                system("pause");//pausa o sitema
				system("cls");//limpa a tela

            case 2://caso 2 da função escolha

                system("cls");//limpa a tela

                printf("Razao PG:\n");//escreve na tela

                printf("\n\tq=a2/a1\n");//escreve na tela

                printf("\nInsira a2: ");//escreve na tela
                scanf("%f",&a2);//le o valor inserido

                printf("\nInsira a1: ");//escreve na tela
                scanf("%f",&a1);//le o valor inserido

                q = a2/a1;//faz a conta

                printf("\nSua razao de PG: %2.f\n\n\n",q );//escreve na tela, mostrando o resultado

                break;//para o caso
                system("pause");// pausa o sistema
                system("cls");//limpa a tela

            }//fecha função
        }//fecha função
    }//fecha função
    while(op != 4);//enquanto

    printf("\n\n\nAte a proxima!!\n\n\n");//escreve na tela

    system("Pause");// pausa o sistema ate o usuario digitar algo

    return 0;
}//fecha função principal

