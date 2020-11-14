#include <stdio.h>
#include <stdlib.h>
#define MAX 10

struct MaxHeap
{
    int tamanho;
    int *array;
};

void troca(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

void maxHeapheap(struct MaxHeap *maxHeap, int idx)
{
    int maior = idx;
    int esq = (idx << 1) + 1;
    int dir = (idx + 1) << 1;

    if (esq < maxHeap->tamanho &&
        maxHeap->array[esq] > maxHeap->array[maior])
        maior = esq;

    if (dir < maxHeap->tamanho &&
        maxHeap->array[dir] > maxHeap->array[maior])
        maior = dir;

    if (maior != idx)
    {
        troca(&maxHeap->array[maior], &maxHeap->array[idx]);
        maxHeapheap(maxHeap, maior);
    }
}

struct MaxHeap *criaHeap(int *array, int tamanho)
{
    int i;
    struct MaxHeap *maxHeap =
        (struct MaxHeap *)malloc(sizeof(struct MaxHeap));
    maxHeap->tamanho = tamanho;
    maxHeap->array = array;

    for (i = (maxHeap->tamanho - 2) / 2; i >= 0; --i)
        maxHeapheap(maxHeap, i);
    return maxHeap;
}

void heapSort(int *array, int tamanho)
{

    struct MaxHeap *maxHeap = criaHeap(array, tamanho);

    while (maxHeap->tamanho > 1)
    {

        troca(&maxHeap->array[0], &maxHeap->array[maxHeap->tamanho - 1]);
        --maxHeap->tamanho;

        maxHeapheap(maxHeap, 0);
    }
}

void printArray(int *arr, int tamanho)
{
    int i;
    for (i = 0; i < tamanho; ++i)
        printf("%d ", arr[i]);
}

int main()
{
    int A[MAX], i;
    int tamanho = sizeof(A) / sizeof(A[0]);
    //printf("Digite 10 numeros para o vetor:\n");
    for (i = 0; i < MAX; i++)
    {
        //printf("%d:", i);
        scanf("%d", &A[i]);
    }

    heapSort(A, tamanho);

    //printf("\nO vetor ordenado é \n");
    printArray(A, tamanho);
    return 0;
}
