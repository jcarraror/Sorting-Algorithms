#include <stdio.h>
#include <stdlib.h>
#define MAX 10


void bubble_sort (int vetor[], int n) {
    int k, j, aux;

    for (k = 1; k < n; k++) {
       

        for (j = 0; j < n - 1; j++) {
          

            if (vetor[j] > vetor[j + 1]) {
                aux = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = aux;
            }
        }
    }
}



void printVet(int vet[], int tam) 
{ 
    int i; 
    for (i=0; i < tam; i++) 
        printf("%d ", vet[i]); 
}
int main(void)
{
    int A[MAX], i;
    int n = sizeof(A) / sizeof(A[0]);
    

   
    for (i = 0; i < MAX; i++)
    {
     
        scanf("%d", &A[i]);
    }
   

    bubble_sort (A,n);
    printVet(A,n);
    return 0;
}