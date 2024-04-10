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

void mostrar_compus(compu *punt);
void mas_vieja(compu *punt);
void mas_nueva(compu *punt);
void mas_rapida(compu *punt); 

int main(){
    compu compus[5], *punt;

    punt = compus;
    mostrar_compus(punt);
    mas_vieja(punt);
    mas_nueva(punt);
    mas_rapida(punt);

    for (int i = 0; i < 5; i++)
    {
        free(punt);
        free(compus[i].tipo_cpu);
    }
    return 0;
}

void mostrar_compus(compu *punt){
    for (int i = 0; i < 5; i++)
    {
        punt->velocidad = rand() % 3 + 1;
        punt->anio = rand() % 9 + 2015;
        punt->cantidad = rand() % 9 + 1;
        punt->tipo_cpu =  tipos[rand() % 6];
        punt++;
    }

    punt = punt - 5;

    for (int i = 0; i < 5; i++){
        printf("------COMPU %d-----\n", i+1);
        printf("Velocidad: %d GHz\n", punt->velocidad);
        printf("Anio de fabricacion: %d\n", punt->anio);
        printf("Cantidad de nucleos: %d\n", punt->cantidad);
        printf("Tipo de procesador: %s\n", punt->tipo_cpu);
        punt++;
    }
        
}

void mas_vieja(compu *punt){
    int men = 2023; // Inicializar con un valor menor al rango de años posibles
    int pos = 0;
    for (int i = 0; i < 5; i++) {
        if (punt->anio < men) {
            men = punt->anio;
            pos = i + 1; // Incrementar la posición en 1 para obtener la posición correcta
        }
        punt++;
    }

    printf("La compu mas vieja es %d, con %d anios\n", pos, men);
}

void mas_nueva(compu *punt){
    int may = 2015; // Inicializar con un valor menor al rango de años posibles
    int pos = 0;
    for (int i = 0; i < 5; i++) {
        if (punt->anio > may) {
            may = punt->anio;
            pos = i + 1; // Incrementar la posición en 1 para obtener la posición correcta
        }
        punt++;
    }

    printf("La compu mas vieja es %d, con %d anios\n", pos, may);
}

void mas_rapida(compu *punt){
    int may = 1; // Inicializar con un valor menor al rango de años posibles
    int pos = 0;
    for (int i = 0; i < 5; i++) {
        if (punt->velocidad > may) {
            may = punt->velocidad;
            pos = i + 1; // Incrementar la posición en 1 para obtener la posición correcta
        }
        punt++;
    }

    printf("La compu mas rapida es %d, con %d GHz\n", pos, may);
}