#include <stdio.h>
#include <stdlib.h>
#define MAX 10


void bubble_sort (int vetor[], int n) {
    int k, j, aux;

    for (k = 1; k < n; k++) {
        //printf("\n[%d] ", k);

        for (j = 0; j < n - 1; j++) {
            //printf("%d, ", j);

            if (vetor[j] > vetor[j + 1]) {
                aux = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = aux;
            }
        }
    }
}

int removeRep(int vet[], int x) 
{ 
    if (x==0 || x==1) 
        return x; 
  
    int j = 0; 
  
  
    for (int i=0; i < x-1; i++) 
        if (vet[i] != vet[i+1]) 
            vet[j++] = vet[i]; 
  
    vet[j++] = vet[x-1]; 
  
    return j; 
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
    

    //printf("Digite 10 numeros para o vetor:\n");
    for (i = 0; i < MAX; i++)
    {
        //printf("%d:", i);
        scanf("%d", &A[i]);
    }
    
    bubble_sort (A,n);
    n = removeRep(A, n); 
    printVet(A,n);
    return 0;
}
