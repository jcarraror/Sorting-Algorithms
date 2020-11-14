#include<stdio.h>
#include<stdlib.h>
#define MAX 20

void quick_sort(int *a, int esq, int dir);
int main()
{
int A[MAX], B[MAX], soma[MAX], i;

for(i=0; i<MAX; i++){
            
        scanf("%d",&A[i]);
     
     }
     
for(i = 0; i < MAX; i++){
    scanf("%d", &B[i]);
}
     
for(i = 0; i < MAX; i++){
    soma[i] = A[i] + B[i];
}
     //printf("A soma entre A+B eh:\n");


quick_sort(soma, 0, 19);
 
 for(i=0; i<MAX; i++){
         printf("%d ",soma[i]);
     
     }

     
}

void quick_sort(int *a, int esq, int dir) {
    int i, j, x, y;
     
    i = esq;
    j = dir;
    x = a[(esq + dir) / 2];
     
    while(i <= j) {
        while(a[i] < x && i < dir) {
            i++;
        }
        while(a[j] > x && j > esq) {
            j--;
        }
        if(i <= j) {
            y = a[i];
            a[i] = a[j];
            a[j] = y;
            i++;
            j--;
        }
    }
     
    if(j > esq) {
        quick_sort(a, esq, j);
    }
    if(i < dir) {
        quick_sort(a, i, dir);
    }
}

