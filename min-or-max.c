#include <stdio.h>

 int main() {
    int N;
    scanf("%i", &N);
  
    int A[N];
    scanf("%i", &A[0]);
  
    int max = A[0];
    for (int i = 0; i < N-1; ++i) {
        scanf("%i", &A[i]);
        if (A[i] > max){
            max = A[i];
        }
    }
    printf("%i\n", max);
 }
