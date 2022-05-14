#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Nailson Onesio de Almeida
void ordena_selectionSort(int *v, int n)
{
    int i, j, menor, troca;
    for (i = 0; i < n - 1; i++)
    {
        menor = i;
        for (j = i + 1; j < n; j++)
        {
            if (v[j] < v[menor])
            { // mudando para '>' ordena em ordem decrescente
                menor = j;
            }
        }
        if (i != menor)
        {
            troca = v[i];
            v[i] = v[menor];
            v[menor] = troca;
        }
    }
}

int main()
{

    int a[100000], n, i, d, swap;
    srand(time(NULL));
    printf("Digite o tamanho da array:\n");
    scanf("%d", &n);
    printf("Enter %d integers\n", n);
    for (i = 0; i < n; i++)
        a[i] = i+1;
    printf("Array antes da ordenação:\n");
    for (i = 0; i < n; i++)
        printf("%d\n", a[i]);
    ordena_selectionSort(a, n);
    printf("Array apos ordenação:\n");
    for (i = 0; i < n; i++)
        printf("%d\n", a[i]);

    return 0;
}