#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void vetor_aleatorio(int vet[], int n){
    int i;
    for(i = 0; i < n; i++)
        vet[i] = rand() % (n*5);
}

void troca(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

int bubble_sort(int vet[], int n){
    int i, j, houve_troca = 1;
    for(i = 0; i < n-1 && houve_troca; i++){
        houve_troca = 0;
        for(j = 0; j < n-i-1; j++){
            if (vet[j] > vet[j+1]){
                troca(&vet[j], &vet[j+1]);
                houve_troca = 1;
            }
        }
    }
}

int bubble_sort_decres(int vet[], int n){
    int i, j, houve_troca = 1;
    for(i = 0; i < n-1 && houve_troca; i++){
        houve_troca = 0;
        for(j = 0; j < n-i-1; j++){
            if (vet[j] < vet[j+1]){
                troca(&vet[j], &vet[j+1]);
                houve_troca = 1;
            }
        }
    }
}

void vetor_ordenado_cres(int vet[], int n){
    vetor_aleatorio(vet, n);
    bubble_sort(vet, n);
}

void vetor_ordenado_decres(int vet[], int n){
    vetor_aleatorio(vet, n);
    bubble_sort_decres(vet, n);
}

void vetor_quase_ordenado(int vet[], int n){
    vetor_aleatorio(vet, n);
    vetor_ordenado_cres(vet, n);
    int i, x =  n > 50 ? n / 20 : 2;
    int pos1, pos2;
    for(i = 0; i < x; i++){
        pos1 = rand() % n;
        pos2 = rand() % n;
        troca(&vet[pos1], &vet[pos2]);
    }
}

//para executar -> ex1.exe n op arquivo_saida.txt
//sendo "n" o tamanho do vetor
//e "op" o tipo de vetor a ser gerado, sendo 1 = aleatório, 
//2 = em ordem cresc, 3 = em ordem decresc e 4 = quase ordenado
int main(int argc, char *argv[])
{
    srand(time(NULL));
    int i, n = atoi(argv[1]), op = atoi(argv[2]);
    int vet[100000];
    char file_name[50];
    strcpy(file_name, argv[3]);

    FILE *arq = fopen(file_name, "w");

    fprintf(arq, "%d\n", n);
    switch (op)
    {
        case 1:
            vetor_aleatorio(vet, n);
            break;
        case 2:
            vetor_ordenado_cres(vet, n);
            break;
        case 3:
            vetor_ordenado_decres(vet, n);
            break;
        default:
            vetor_quase_ordenado(vet, n);
    }
    for(i = 0; i < n; i++)
        fprintf(arq, "%d ", vet[i]);
    fprintf(arq, "\n");
    fclose(arq);
}