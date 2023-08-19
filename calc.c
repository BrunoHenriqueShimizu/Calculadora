#include <stdio.h>
#include <stdlib.h>
#include <wchar.h>                          // Permite o uso do 'wprintf'
#include <locale.h>

float soma(float a, float b)                // Soma
{
    float soma = a + b;

    return soma;
}

float subtracao(float a, float b)           // Subtração
{
    float sub = a - b;

    return sub;
}

float multiplicacao(float a, float b)       // Multiplicação
{
    float mult = a * b;

    return mult;
}

float divisao(float a, float b)             // Divisão
{
    float div = a / b;

    return div;
}

int main()
{
    system("cls");                          // Inicia a calculadora

    char variavel, sair;
    float valor1, valor2, resultado;
    setlocale(LC_ALL, "Portuguese");

    do
    {
        system("cls");

        

        printf("-----------------------------");
        printf("\n=========Bem-vindo!==========\n");
        printf("-----------------------------");

        wprintf(L"\n\nDigite a operação que deseja realizar utilizando este formato (x + y), com essas variáveis --> (+,-,*,/)\n");     // Usa o wprintf pra corrigir o bug de caracteres no vs code
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
