#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define N 20

int i;
double *vt;

int main(){
    vt = (double *)malloc(sizeof(double) * N);

    for (i = 0; i<N; i++){
        *vt = 1 + rand()%100;
        printf("%d = %f\n", i, *vt);
        vt++;
    }
    free(vt);
    return 0;
}
