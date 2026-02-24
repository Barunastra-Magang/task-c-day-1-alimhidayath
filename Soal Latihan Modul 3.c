#include <stdio.h>

//Soal 1 — Faktorial rekursif
int faktorial(int n) {
    if (n == 0) return 1;
    return n * faktorial(n-1);
}

//Soal 2 — Deret jumlah kuadrat
int deret(int n) {
    if (n == 0) return 0;
    return n*n + deret(n-1);
}

//Soal 3 — Min dan Max array
void minmax(int arr[], int n) {
    int min = arr[0], max = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] < min) min = arr[i];
        if (arr[i] > max) max = arr[i];
    }

    printf("max: %d, min: %d\n", max, min);
}

int main() {

    printf("%d\n", faktorial(5));
    printf("%d\n", deret(2));

    int data[] = {1,2,3,4,5};
    minmax(data, 5);

    return 0;
}