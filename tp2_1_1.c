#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define N 20

int i;
double vt[N];

int main(){

    for (i = 0; i<N; i++){
        vt[i] = 1 + rand()%100;
        printf("%d = %f\n", i, vt[i]);
    }
    return 0;
}