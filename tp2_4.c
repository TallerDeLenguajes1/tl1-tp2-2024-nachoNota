#include<stdio.h>
#include<stdlib.h>
#include<time.h>

struct {
    int velocidad; //entre 1 y 3 GHz
    int anio; //entre 2015 y 2023
    int cantidad; //entre 1 y 8
    char *tipo_cpu; //valores del arreglo tipos
} typedef compu;

char tipos[6][10]={"Intel", "AMD", "Celeron", "Athlon", "Core", "Pentium"};

void mostrar_compus(compu *punt, char *punt_aux);
void mas_vieja(compu *punt);
void mas_nueva(compu *punt);


int main(){
    compu clientes[5], *punt;
    char *punt_aux = tipos;

    punt = clientes;
    mostrar_compus(punt, punt_aux);
    return 0;
}

void mostrar_compus(compu *punt, char *punt_aux){
    int random;
    for (int i = 0; i < 5; i++)
    {
        punt->velocidad = rand() % 3 + 1;
        punt->anio = rand() % 9 + 2015;
        punt->cantidad = rand() % 9 + 1;
        random = rand() % 6 + 1;
        punt->tipo_cpu =  
    }
    
    
}
void mas_vieja(compu *punt);
void mas_nueva(compu *punt);