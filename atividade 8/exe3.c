#include <stdio.h>

main()
{
    int n;

    printf("Digite um numero inteiro maior ou igual a zero: ");
    scanf("%d", &n);

    if (n < 0)
    {
        printf("Por favor, digite um numero nao negativo.\n");
        return 1;
    }

    int termo_atual = 0;
    int proximo_termo = 1;
    int resultado = n;

    while (n > 1)
    {
        resultado = termo_atual + proximo_termo;
        termo_atual = proximo_termo;
        proximo_termo = resultado;
        n--;
    }

    printf("O %dº termo da sequencia de Fibonacci é: %d\n", n, resultado);
}