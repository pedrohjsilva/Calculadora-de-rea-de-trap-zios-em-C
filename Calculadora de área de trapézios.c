#include <stdio.h>
#include <locale.h>

/*
Centro Federal de Educa��o T�cnol�gica de Minas Gerais
Gradua��o em Engenharia Mec�nica
Pedro Henrique de Jesus Soares Silva
*/

    int main()
    {
    setlocale (LC_ALL, "");
    setlocale (LC_CTYPE, "pt BR.UTF-8");
    double base_maior, base_menor, altura, area;

    printf("Esse � um programa que calcula a �rea de trap�zios.");
    Sleep(4000);
    system("cls");

    printf("Para saber a �rea do seu trap�zio, insira as informa��es solicitadas.");
    Sleep(4000);
    system("cls");

    printf("A primeira informa��o necess�ria � o comprimento da base maior do trap�zio.\n\n");
    scanf("%lf", &base_maior);
    Sleep(1000);
    system("cls");

    printf("Agora, informe o comprimento da base menor do seu trap�zio.\n\n");
    scanf ("%lf", &base_menor);
    Sleep(1000);
    system("cls");

    printf("Agora precisamos do comprimento da altura do trap�zio.\n\n");
    scanf("%lf", &altura);

    area = ( ( base_maior + base_menor ) * altura ) / 2;

    Sleep(1000);
    system("cls");

    printf("Calculando .");
    Sleep(900);
    system("cls");

    printf("Calculando . .");
    Sleep(900);
    system("cls");

    printf("Calculando . . .");
    Sleep(900);
    system("cls");


    printf("\nProntinho.\n\nA �rea interna do seu trap�zio � de %lf", area);
    return 0;
    }

