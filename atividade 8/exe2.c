#include <stdio.h>

main()
{

    int total_moradores = 50;
    int contador_elevador_A = 0;
    int contador_elevador_B = 0;
    int contador_elevador_C = 0;
    int contador_matutino = 0;
    int contador_vespertino = 0;
    int contador_noturno = 0;

    for (int i = 1; i <= total_moradores; i++)
    {
        char elevador, periodo;

        printf("Para o morador %d:\n", i);
        printf("Elevador mais utilizado (A/B/C): ");
        scanf(" %c", &elevador);

        switch (elevador)
        {
        case 'A':
            contador_elevador_A++;
            break;
        case 'B':
            contador_elevador_B++;
            break;
        case 'C':
            contador_elevador_C++;
            break;
        default:
            printf("Entrada invalida. Por favor, use A, B ou C.\n");
            i--;
            continue;
        }

        printf("Periodo mais utilizado (M/V/N): ");
        scanf(" %c", &periodo);

        switch (periodo)
        {
        case 'M':
            contador_matutino++;
            break;
        case 'V':
            contador_vespertino++;
            break;
        case 'N':
            contador_noturno++;
            break;
        default:
            printf("Entrada invalida. Por favor, use M, V ou N.\n");
            i--;
        }
    }

    char elevador_mais_frequentado;
    int maior_frequencia = contador_elevador_A;

    if (contador_elevador_B > maior_frequencia)
    {
        elevador_mais_frequentado = 'B';
        maior_frequencia = contador_elevador_B;
    }

    if (contador_elevador_C > maior_frequencia)
    {
        elevador_mais_frequentado = 'C';
        maior_frequencia = contador_elevador_C;
    }

    char periodo_mais_usado;
    int maior_uso = contador_matutino;

    if (contador_vespertino > maior_uso)
    {
        periodo_mais_usado = 'V';
        maior_uso = contador_vespertino;
    }

    if (contador_noturno > maior_uso)
    {
        periodo_mais_usado = 'N';
        maior_uso = contador_noturno;
    }

    char periodo_menos_usado;
    int menor_uso = contador_matutino;

    if (contador_vespertino < menor_uso)
    {
        periodo_menos_usado = 'V';
        menor_uso = contador_vespertino;
    }

    if (contador_noturno < menor_uso)
    {
        periodo_menos_usado = 'N';
        menor_uso = contador_noturno;
    }

    float diferenca_percentual = ((float)(maior_uso - menor_uso) / total_moradores) * 100;

    int total_servicos_elevador_media = (contador_elevador_A + contador_elevador_B + contador_elevador_C) - maior_frequencia;
    float percentagem_servicos_elevador_media = ((float)total_servicos_elevador_media / total_moradores) * 100;

    printf("\nResultados:\n");
    printf("O periodo mais usado de todos é o %c e pertence ao elevador %c.\n", periodo_mais_usado, elevador_mais_frequentado);
    printf("O elevador mais frequentado é o %c e se concentra no periodo %c.\n", elevador_mais_frequentado, periodo_mais_usado);
    printf("A diferença percentual entre o mais usado e o menos usado é %.2f%%.\n", diferenca_percentual);
    printf("A percentagem sobre o total de servicos prestados do elevador de media utilização é %.2f%%.\n", percentagem_servicos_elevador_media);
}