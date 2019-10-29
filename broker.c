#include <stdio.h>

int main() {
    FILE*fin=fopen("input.txt","r");
    FILE*fout=fopen("output.txt","w");
   int N,A,C,t,r,m,call_money=0;
   fscanf(fin,"%i%i%i",&N,&A,&C);
    for (int i = 0; i < N; ++i) {
        fscanf(fin,"%i%i%i",&t,&r,&m);
        if ((m>t*C)&&(A>=r)){
            A+=m;
            call_money+=2*t*C;
        }else{
            call_money+=t*C;
        }
    }
    A=A-call_money;
    fprintf(fout,"%i",A);
    fclose(fin);
    fclose(fout);
    return 0;
}
