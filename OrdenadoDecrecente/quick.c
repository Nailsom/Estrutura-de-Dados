#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Nailson Onesio de Almeida

void ordena_quick_sort(int *a, int left, int right)
{
    int i, j, x, y;
    i = left;
    j = right;
    x = a[(left + right) / 2];

    while (i <= j)
    {
        while (a[i] < x && i < right)
        {
            i++;
        }
        while (a[j] > x && j > left)
        {
            j--;
        }
        if (i <= j)
        {
            y = a[i];
            a[i] = a[j];
            a[j] = y;
            i++;
            j--;
        }
    }

    if (j > left)
    {
        ordena_quick_sort(a, left, j);
    }
    if (i < right)
    {
        ordena_quick_sort(a, i, right);
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
        a[i] = n-(i+1);
    printf("Array antes da ordenação:\n");
    for (i = 0; i < n; i++)
        printf("%d\n", a[i]);
    ordena_quick_sort(a, 0,n);
    printf("Array apos ordenação:\n");
    for (i = 0; i < n; i++)
        printf("%d\n", a[i]);

    return 0;
}