#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>

#define MAX_VERTICES 100
#define MAX_EDGES 1000

typedef struct {
    char origin[50];
    char destination[50];
    int weight;
} Edge;

// Estrutura para armazenar informações do grafo
typedef struct {
    char vertices[MAX_VERTICES][50];
    int adjacencyMatrix[MAX_VERTICES][MAX_VERTICES];
    int vertexCount;
} Graph;

// Função para inicializar o grafo
void initializeGraph(Graph* graph) {
    graph->vertexCount = 0;
    for (int i = 0; i < MAX_VERTICES; i++) {
        for (int j = 0; j < MAX_VERTICES; j++) {
            graph->adjacencyMatrix[i][j] = INT_MAX; // Inicializa com infinito
        }
    }
}

// Função para adicionar uma aresta ao grafo
void addEdge(Graph* graph, Edge edge) {
    int originIndex = -1;
    int destinationIndex = -1;

    // Verifica se a origem já existe no grafo
    for (int i = 0; i < graph->vertexCount; i++) {
        if (strcmp(graph->vertices[i], edge.origin) == 0) {
            originIndex = i;
        }
        if (strcmp(graph->vertices[i], edge.destination) == 0) {
            destinationIndex = i;
        }
    }

    // Se a origem não existe, adiciona
    if (originIndex == -1) {
        originIndex = graph->vertexCount++;
        strcpy(graph->vertices[originIndex], edge.origin);
    }
    
    // Se o destino não existe, adiciona
    if (destinationIndex == -1) {
        destinationIndex = graph->vertexCount++;
        strcpy(graph->vertices[destinationIndex], edge.destination);
    }

    // Adiciona a aresta na matriz de adjacência
    graph->adjacencyMatrix[originIndex][destinationIndex] = edge.weight;
}

// Função para encontrar o índice de um vértice
int findVertexIndex(Graph* graph, const char* vertex) {
    for (int i = 0; i < graph->vertexCount; i++) {
        if (strcmp(graph->vertices[i], vertex) == 0) {
            return i;
        }
    }
    return -1;
}

// Implementação do algoritmo de Dijkstra
void dijkstra(Graph* graph, const char* start) {
    int distances[MAX_VERTICES];
    int visited[MAX_VERTICES] = {0};
    int startIndex = findVertexIndex(graph, start);

    // Inicializa as distâncias
    for (int i = 0; i < graph->vertexCount; i++) {
        distances[i] = INT_MAX;
    }
    distances[startIndex] = 0;

    // Algoritmo de Dijkstra
    for (int i = 0; i < graph->vertexCount - 1; i++) {
        int minDistance = INT_MAX;
        int currentVertex = -1;

        // Encontra o vértice não visitado com a menor distância
        for (int j = 0; j < graph->vertexCount; j++) {
            if (!visited[j] && distances[j] < minDistance) {
                minDistance = distances[j];
                currentVertex = j;
            }
        }

        // Marca o vértice como visitado
        visited[currentVertex] = 1;

        // Atualiza as distâncias dos vizinhos
        for (int j = 0; j < graph->vertexCount; j++) {
            if (!visited[j] && graph->adjacencyMatrix[currentVertex][j] != INT_MAX) {
                int newDistance = distances[currentVertex] + graph->adjacencyMatrix[currentVertex][j];
                if (newDistance < distances[j]) {
                    distances[j] = newDistance;
                }
            }
        }
    }

    // Exibe as distâncias finais
    printf("Distâncias a partir do vértice %s:\n", start);
    for (int i = 0; i < graph->vertexCount; i++) {
        printf("Distância para %s: %d\n", graph->vertices[i], distances[i]);
    }
}

int main() {
    Graph graph;
    initializeGraph(&graph);

    // Exemplo de arestas
    Edge edges[] = {
        {"A", "B", 1},
        {"A", "C", 4},
        {"B", "C", 2},
        {"B", "D", 5},
        {"C", "D", 1},
        {"D", "E", 3}
    };
    
    // Adicionando arestas ao grafo
    for (int i = 0; i < sizeof(edges) / sizeof(edges[0]); i++) {
        addEdge(&graph, edges[i]);
    }

    // Executa o algoritmo de Dijkstra a partir do vértice "A"
    dijkstra(&graph, "A");

    return 0;
}
