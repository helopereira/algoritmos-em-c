#include<stdio.h>
#define MAX 10000

int trocas, comps;

void copia(int dest[], int src[], int n){
    int i;
    for(i = 0; i < n; i++)
        dest[i] = src[i];
}

void troca(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

int selection_sort(int vet[], int n){
    int i, j, min_ind;
    comps = trocas = 0;
    for(i = 0; i < n-1; i++){
        min_ind = i;
        for(j = i+1; j < n; j++){
            comps++;
            if (vet[j] < vet[min_ind])
                min_ind = j;
        }
        if (min_ind != i){
            troca(&vet[min_ind], &vet[i]);
            trocas++;
        }
    }
}

int insertion_sort(int vet[], int n){
    int i, j, aux;
    comps = trocas = 0;
    for(i = 1; i < n; i++){
        aux = vet[i]; 
        for(j = i-1; j >= 0 && aux < vet[j]; j--){
            vet[j+1] = vet[j];
            comps++; trocas++;
        }
        if (j >= 0)
            comps++;
        vet[j+1] = aux;
    }
}

int bubble_sort(int vet[], int n){
    int i, j, houve_troca = 1;
    comps = trocas = 0;
    for(i = 0; i < n-1 && houve_troca; i++){
        houve_troca = 0;
        for(j = 0; j < n-i-1; j++){
            comps++;
            if (vet[j] > vet[j+1]){
                troca(&vet[j], &vet[j+1]);
                houve_troca = 1;
                trocas++;
            }
        }
    }
}

int shell_sort(int vet[], int n){
    int i, j, k, aux;
    comps = trocas = 0;
    for(k = n/2; k > 0; k /= 2)
    {
        for(i = k; i < n; i++){
            aux = vet[i]; 
            for(j = i - k; j >= 0 && aux < vet[j]; j -= k){
                vet[j+k] = vet[j];
                comps++;
                trocas++;
            }
            if (j >= 0)
                comps++;
            vet[j+k] = aux;
        }
    }
}

void testa_vetor(int src[], int n, FILE *arq)
{
    int vet[MAX];
    copia(vet, src, n);
    selection_sort(vet, n);
    fprintf(arq, "Selection sort:   comparacoes = %4d  --  trocas = %4d\n", comps, trocas);
    copia(vet, src, n);
    bubble_sort(vet, n);
    fprintf(arq, "Bubble sort:      comparacoes = %4d  --  trocas = %4d\n", comps, trocas);
    copia(vet, src, n);
    insertion_sort(vet, n);
    fprintf(arq, "Insertion sort:   comparacoes = %4d  --  trocas = %4d\n", comps, trocas);
    copia(vet, src, n);
    shell_sort(vet, n);
    fprintf(arq, "Shell sort:       comparacoes = %4d  --  trocas = %4d\n\n", comps, trocas);
}

//para executar -> ex2.exe arquivo_entrada.txt
int main(int argc, char *argv[])
{
    char file_name[50], file_out[54];
    strcpy(file_name, argv[1]);
    int i, slen = strlen(file_name);
    for(i = 0; i < slen-4; i++) //%ignorando .txt no final
        file_out[i] = file_name[i];
    file_out[i] = '\0';
    strcat(file_out, "_result.txt");

    FILE *arq_in = fopen(file_name, "r");

    int n, vet[MAX];
    fscanf(arq_in, "%d", &n);
    for(i = 0; i < n; i++)
        fscanf(arq_in, "%d", &vet[i]);
        printf("%d:%d - ", i, vet[i]);
    fclose(arq_in);


    FILE *arq_out = fopen(file_out, "w");
    testa_vetor(vet, n, arq_out);
    fclose(arq_out);
}
