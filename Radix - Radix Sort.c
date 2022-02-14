#include<stdio.h>
 
int getMax(int vetor[], int n) {
    int mx = vetor[0];
    int i;
    for (i = 1; i < n; i++)
        if (vetor[i] > mx)
            mx = vetor[i];
    return mx;
}
 
void countSort(int vetor[], int n, int exp) {
    int output[n]; 
    int i, count[10] = { 0 };

    for (i = 0; i < n; i++)
        count[(vetor[i] / exp) % 10]++;
 
    for (i = 1; i < 10; i++)
        count[i] += count[i - 1];

    for (i = n - 1; i >= 0; i--) {
        output[count[(vetor[i] / exp) % 10] - 1] = vetor[i];
        count[(vetor[i] / exp) % 10]--;
    }
 
    for (i = 0; i < n; i++)
        vetor[i] = output[i];
}

void radixsort(int vetor[], int n) {
    int m = getMax(vetor, n);
 
    int exp;
    for (exp = 1; m / exp > 0; exp *= 10)
        countSort(vetor, n, exp);
}
 
void print(int vetor[], int n) {
    int i;
    for (i = 0; i < n; i++)
        printf("%d ", vetor[i]);
}
 
int main() {
    int vetor[] = { 3219, 4325, 655, 100, 8, 2324, 20, 632 };
    int n = sizeof(vetor) / sizeof(vetor[0]);
    radixsort(vetor, n);
    print(vetor, n);
	return 0;
}
