#include <stdio.h>
#include <math.h>

double distance_check (double v, double w, double D, double T);

double nums_difference (double a, double b);

int main() {
    FILE *fin = fopen("input.txt", "r");
    FILE *fout = fopen("output.txt", "w");
    double D, T, v1, v2, w1, w2, maximum_distance, first, second, third, fourth, max1, max2;
    fscanf(fin, "%lf%lf%lf%lf%lf%lf", &D, &T, &v1, &v2, &w1, &w2);
    first = distance_check (v1, w1, D, T);
    second = distance_check (v2, w2, D, T);
    third = distance_check (v1, w2, D, T);
    fourth = distance_check (v2, w1, D, T);
    max1 = nums_difference (first, second);
    max2 = nums_difference (third, fourth);
    maximum_distance = nums_difference (max1, max2);
    fprintf(fout, "%lf", maximum_distance);
}

double nums_difference (double a, double b){
    if ((a > b) && (fabs(a - b)) >= 0.1){
        return a;
    }else{
        return b;
    }
}

double distance_check (double v, double w, double D, double T) {
    if (v - w == 0) {
        if (D - v * T < 0.00001) {
            return D;
        }
    }
    double t = (D - w * T) / (v - w);
    if (t < 0) {
        t = 0;
    }
    if (t > T){
        return -1;
    }
    if (t * v > D){
        return -1;
    }
    return (t * v);
}