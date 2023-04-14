#include <stdlib.h>
#include <stdio.h>

typedef struct {
    unsigned int peso;
    int beneficio;
} type_item;

void algoritmo_1(void) { }
void algoritmo_2(void) { }
void algoritmo_3(void) { }

void imprimir_items(type_item *items, int n) {
    int i;
    for (i = 0; i < n; i++) {
        printf("Peso: %d, Beneficio: %d\n", items[i].peso, items[i].beneficio);
    }
}

type_item *ler_items(char *filename, int *n_items, int *capacidad) {
    FILE *fp = fopen(filename, "r");
    if (fp == NULL) {
        puts("Não foi possível abrir o arquivo");
        exit(0);
    }

    fscanf(fp, "%d %d", n_items, capacidad);
    printf("Número de elementos: %d, Capacidade: %d\n", *n_items, *capacidad);

    type_item *items = (type_item *)malloc(*n_items * sizeof(type_item));

    for (int i = 0; i < *n_items; i++) {
        fscanf(fp, "%d %d", &items[i].peso, &items[i].beneficio);
    }

    fclose(fp);

    return items;
}


int main(int argc, char *argv[]) {
    int n_items, capacidad;

    if (argc != 3) {
        printf("Uso: %s <nome do arquivo de entrada> <algoritmo>\n", argv[0]);
        return 1;
    }

    type_item *items = ler_items(argv[1], &n_items, &capacidad);
    imprimir_items(items, n_items);

    if (argv[2] == "1") {
        algoritmo_1();
    } else if (argv[2] == "2") {
        algoritmo_2();
    } else if (argv[3] == "3") {
        algoritmo_3();
    } else {
        printf("Escolha um algoritmo entre 1 e 3\n");
        return 1;
    }
    free(items);
    return 0;
}