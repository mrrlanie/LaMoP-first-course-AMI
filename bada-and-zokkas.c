#include <stdio.h>

int main() {
    FILE*fin = fopen("input.txt","r");
    FILE*fout = fopen("output.txt","w");
    int N, M, sum=0;
    fscanf(fin, "%i%i", &N, &M);
    if (N == M){
        fprintf(fout, "%i", N+1);
    }else{
        while (N>M){
            sum += M+1;
            N -= M;
        }
        N += 1;
        sum += N;
        fprintf(fout, "%i", sum);
    }
    fclose(fin);
    fclose(fout);
    return 0;
}
