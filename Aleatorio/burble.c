#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Nailson Onesio de Almeida

void bubble_sort(int a[], int n) {
   int i = 0, j = 0, tmp;
   for (i = 0; i < n; i++) {   
       for (j = 0; j < n - i - 1; j++) {          
            if (a[j] > a[j + 1]) {
               tmp = a[j];
               a[j] = a[j + 1];
               a[j + 1] = tmp;
           }
       }
   }
}
int main() {

    
     int a[100000], n, i, d, swap;
  srand(time(NULL));
 printf("Digite o tamanho da array:\n");
 scanf("%d", &n);
 printf("Enter %d integers\n", n);
 for (i = 0; i < n; i++)
   a[i]=rand()%100000;
 printf("Array antes da ordenação:\n");
 for (i = 0; i < n; i++)
    printf("%d\n", a[i]);
 bubble_sort(a, n);
 printf("Array apos ordenação:\n");
 for (i = 0; i < n; i++)
    printf("%d\n", a[i]);
    
  
 return 0;
}