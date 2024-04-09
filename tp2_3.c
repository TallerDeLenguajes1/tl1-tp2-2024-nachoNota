#include<stdio.h>
#include<stdlib.h>
#define N 5
#define M 7
int i,j;
float mt[N][M];


int main(){
    float *punt = mt;
    for(i = 0;i<N; i++){
        for(j = 0;j<M; j++){
            *(punt + i * M + j)=1+rand()%100;
            printf("[%f]", *(punt + i * M + j));
        }
        printf("\n");
    }
}