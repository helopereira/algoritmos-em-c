#include<stdio.h>
#include<stdlib.h>
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

void merge(int v[], int left, int middle, int right) {
    // transfere os elementos entre left e right para um array auxiliar.
    int helper[MAX], i, j, k;
    for (int i = left; i <= right; i++) {
        helper[i] = v[i];
    }
    
    // realiza a intercalação
    i = left;
    j = middle + 1;
    k = left;
    while (i <= middle && j <= right) {
        comps++;
        trocas++;
        if (helper[i] <= helper[j]) {
            v[k] = helper[i];
            i++;
        } else {
            v[k] = helper[j];
            j++;
        }
        k++;    
        
    }

    // se a metade inicial não foi toda consumida, faz o append.
    while (i <= middle) {
        trocas++;
        v[k] = helper[i];
        i++;
        k++;
    }
    
    // se a metade final não foi toda consumida, faz o append.
    while (j <= right) {
        trocas++;
        v[k] = helper[j];
        j++;
        k++;
    }
}

void mergeSort(int v[], int left, int right) {   
    if (left >= right)
        return;   
    int middle = (left + right) / 2;
    mergeSort(v, left, middle);
    mergeSort(v, middle + 1, right);
    merge(v, left, middle, right);
}

int partition(int v[], int left, int right) {
    int pivot = v[left];
    int i = left;
    int j;

    for (j = left + 1; j <= right; j++) {
        comps++;
        if (v[j] <= pivot) {
            i+=1;
            trocas++;
            troca(&v[i], &v[j]);
        }
    }
    trocas++;
    troca(&v[left], &v[i]); //função auxilar
    
    return i; 
}

void quickSort(int v[], int left, int right) {
	if (left < right) {
		int index_pivot = partition(v, left, right);
		quickSort(v, left, index_pivot - 1);
		quickSort(v, index_pivot + 1, right);	
	}
}

void quickSort_random(int v[], int left, int right) {
	if (left < right) {
        int i = left + rand() % (right-left+1);
        trocas++;
        troca(&v[left], &v[i]);
		int index_pivot = partition(v, left, right);
		quickSort_random(v, left, index_pivot - 1);
		quickSort_random(v, index_pivot + 1, right);	
	}
}

void quickSort_med(int v[], int left, int right) {
	if (left < right) {
        int med = (left+right)/2;
        if (v[left] <= v[med] && v[left] >= v[right]){
            comps += 2;
        }
        else if (v[left] >= v[med] && v[left] <= v[right]){
            comps += 4;
        }
        else if (v[med] <= v[left] && v[med] >= v[right]){
            comps += 6;
            trocas++;
            troca(&v[left], &v[med]);
        }
        else if (v[med] >= v[left] && v[med] <= v[right]){
            comps += 8;
            trocas++;
            troca(&v[left], &v[med]);
        } 
        else {
            comps += 8;
            trocas++;
            troca(&v[left], &v[right]);
        }
		int index_pivot = partition(v, left, right);
		quickSort_med(v, left, index_pivot - 1);
		quickSort_med(v, index_pivot + 1, right);	
	}
}

void testa_vetor(int src[], int n, FILE *arq)
{
    int vet[MAX];
    copia(vet, src, n);
    selection_sort(vet, n);
    fprintf(arq, "Selection sort:      comparacoes = %4d  --  trocas = %4d\n", comps, trocas);
    copia(vet, src, n);
    bubble_sort(vet, n);
    fprintf(arq, "Bubble sort:         comparacoes = %4d  --  trocas = %4d\n", comps, trocas);
    copia(vet, src, n);
    insertion_sort(vet, n);
    fprintf(arq, "Insertion sort:      comparacoes = %4d  --  trocas = %4d\n", comps, trocas);
    copia(vet, src, n);
    shell_sort(vet, n);
    fprintf(arq, "Shell sort:          comparacoes = %4d  --  trocas = %4d\n", comps, trocas);
    trocas = comps = 0;
    copia(vet, src, n);
    mergeSort(vet, 0, n-1);
    fprintf(arq, "Merge sort:          comparacoes = %4d  --  trocas = %4d\n", comps, trocas);
    trocas = comps = 0;
    copia(vet, src, n);
    quickSort(vet, 0, n-1);
    fprintf(arq, "Quick sort (1pos):   comparacoes = %4d  --  trocas = %4d\n", comps, trocas);
    trocas = comps = 0;
    copia(vet, src, n);
    quickSort_random(vet, 0, n-1);
    fprintf(arq, "Quick sort (rand):   comparacoes = %4d  --  trocas = %4d\n", comps, trocas);
    trocas = comps = 0;
    copia(vet, src, n);
    quickSort_med(vet, 0, n-1);
    fprintf(arq, "Quick sort (med):    comparacoes = %4d  --  trocas = %4d\n", comps, trocas);

}

//para executar -> ex2.exe arquivo_entrada.txt
int main(int argc, char *argv[])
{
    srand(time(NULL));
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
    fclose(arq_in);


    FILE *arq_out = fopen(file_out, "w");
    testa_vetor(vet, n, arq_out);
    fclose(arq_out);
}
