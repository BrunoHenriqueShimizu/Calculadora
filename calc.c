#include <stdio.h>
#include <stdlib.h>

float soma(float a, float b)
{
    return 0;
}

float subtracao(float a, float b)
{
    return 0;
}

float multiplicacao(float a, float b)
{
    return 0;
}

float divisao(float a, float b)
{
    return 0;
}

int main()
{
    char variavel, sair;
    float valor1, valor2, resultado;

    do
    {
        system("cls");

        

        printf("-----------------------------");
        printf("\n=========Bem-vindo!==========\n");
        printf("-----------------------------");

        printf("\n\nDigite a operação que deseja realizar utilizando este formato (x + y), com essas variáveis --> (+,-,*,/)\n");
        scanf("%f %c %f", &valor1, &variavel, &valor2);

        switch (variavel)
        {
            case '+':
                resultado = soma(valor1, valor2);
                break;
            case '-':
                resultado = subtracao(valor1, valor2);
                break;
            case '*':
                resultado = multiplicacao(valor1, valor2);
                break;
            case '/':
                resultado = divisao(valor1, valor2);
                break;
            default:
                break;
        }

        system("cls");

        printf("%.1f %c %.1f = %.2f\n\n",valor1, variavel, valor2, resultado);
        printf("Deseja sair da calculadora? (s/n)\n");
        getchar();
        scanf("%c", &sair);

    }while(sair != 's' && sair != 'S');

    system("cls");

    return 0;
}
