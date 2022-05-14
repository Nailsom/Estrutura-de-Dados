#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Nailson Onesio de Almeida

void ordena_insertionSort(int *v, int n){
    int i, j, aux;
    for(i = 1; i < n; i++){
        aux = v[i];
        for(j = i; (j > 0) && (aux < v[j - 1]); j--){
            v[j] = v[j - 1];
        }
        v[j] = aux;
    }
}
int main() {

    
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
 ordena_insertionSort(a, n);
 printf("Array apos ordenação:\n");
 for (i = 0; i < n; i++)
    printf("%d\n", a[i]);
    
  
 return 0;
}