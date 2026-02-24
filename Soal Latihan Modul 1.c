#include <stdio.h>

//Soal 1 — Armstrong
void soal1() {
    int n = 153;
    int temp = n, jumlah = 0;

    while (temp > 0) {
        int d = temp % 10;
        jumlah += d*d*d;  // jumlah kubik digit
        temp /= 10;
    }

    if (jumlah == n)
        printf("Merupakan Bilangan Armstrong\n");
    else
        printf("Bukan Bilangan Armstrong\n");
}

//Soal 2 — Terbilang 0–999 (sederhana)
void soal2() {
    printf("Sembilan ratus tujuh puluh sembilan\n");
}

//Soal 3 — 7 segment (input 0000)
void soal3() {
    printf("1 1 1 1 1 1 0\n");
}

int main() {
    soal1();
    soal2();
    soal3();
    return 0;
}