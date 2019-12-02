#include <stdio.h>
#include <stdlib.h>
int comp(const void* a, const void* b);
int main() {
    FILE* fin = fopen("input.txt","r");
    FILE* fout = fopen("output.txt","w");
    int N;
    fscanf(fin, "%i", &N);
    int* A;
    A = calloc(N, sizeof(int));
    for (int i = 0; i < N; ++i) {
        fscanf(fin, "%i", &A[i]);
    }
    qsort(A, N, sizeof(int), comp);
    for (int j = 0; j < N; ++j) {
        fprintf(fout, "%i ", A[j]);
    }
}

int comp(const void* a, const void* b){
    return *(int*) a - *(int*) b;
}
