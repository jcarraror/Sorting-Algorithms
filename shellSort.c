#include <stdio.h>
#include <stdlib.h>
#define MAX 10

int shell(int vet[], int n) 
{ 
    // Criando a casca e diminuindo 
    for (int casca = n/2; casca > 0; casca /= 2) 
    { 
        
        for (int i = casca; i < n; i += 1) 
        { 
            
            int aux = vet[i]; 
  
           
            int j;             
            for (j = i; j >= casca && vet[j - casca] > aux; j -= casca) 
                vet[j] = vet[j - casca]; 
              
           
            vet[j] = aux; 
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
    

    //printf("Digite 10 numeros para o vetor:\n");
    for (i = 0; i < MAX; i++)
    {
        //printf("%d:", i);
        scanf("%d", &A[i]);
    }
   

    shell (A,n);
    printVet(A,n);
    return 0;
}