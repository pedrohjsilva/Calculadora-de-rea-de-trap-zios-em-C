#include <stdio.h>
#include <locale.h>

/*
Centro Federal de Educação Técnológica de Minas Gerais
Graduação em Engenharia Mecânica
Pedro Henrique de Jesus Soares Silva
*/

    int main()
    {
    setlocale (LC_ALL, "");
    setlocale (LC_CTYPE, "pt BR.UTF-8");
    double base_maior, base_menor, altura, area;

    printf("Esse é um programa que calcula a área de trapézios.");
    Sleep(4000);
    system("cls");

    printf("Para saber a área do seu trapézio, insira as informações solicitadas.");
    Sleep(4000);
    system("cls");

    printf("A primeira informação necessária é o comprimento da base maior do trapézio.\n\n");
    scanf("%lf", &base_maior);
    Sleep(1000);
    system("cls");

    printf("Agora, informe o comprimento da base menor do seu trapézio.\n\n");
    scanf ("%lf", &base_menor);
    Sleep(1000);
    system("cls");

    printf("Agora precisamos do comprimento da altura do trapézio.\n\n");
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


    printf("\nProntinho.\n\nA área interna do seu trapézio é de %lf", area);
    return 0;
    }

