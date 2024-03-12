#include <stdio.h>
#include <stdlib.h>
#define V 4

// Adicionar arestas
void adicionarAresta(int **arr, int i, int j) {
  arr[i][j] = 1;
  arr[j][i] = 1;
}

// Imprime a matriz
void printAdjMatrix(int **arr) {
  int i, j;

  for (i = 0; i < V; i++) {
    printf("%d: ", i);
    for (j = 0; j < V; j++) {
      printf("%d ", arr[i][j]);
    }
    printf("\n");
  }
}

int main() {
  int i;
  int** adjMatrix = (int**)calloc(V, sizeof(int*));
  for (i = 0; i < V; i++) {
    adjMatrix[i] = (int*)calloc(V, sizeof(int));
  }

  adicionarAresta(adjMatrix, 0, 1);
  adicionarAresta(adjMatrix, 0, 2);
  adicionarAresta(adjMatrix, 1, 2);
  adicionarAresta(adjMatrix, 2, 0);
  adicionarAresta(adjMatrix, 2, 3);

  printAdjMatrix(adjMatrix);

  return 0;
}