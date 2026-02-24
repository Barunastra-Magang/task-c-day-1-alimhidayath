#include <stdio.h>

//Soal 1 — Hitung umur
void soal1() {
    int lahir = 2002, sekarang = 2023;
    int umur = sekarang - lahir;   // selisih tahun
    printf("%d\n", umur);
}

//Soal 2 — Bagi pizza
void soal2() {
    int P = 11, N = 3;

    int bagianTeman = P / N;   // tiap teman dapat
    int sisa = P % N;          // sisa untuk Ghifari

    printf("Teman mendapat %d potong, Ghifari mendapat %d potong\n",
           bagianTeman, sisa);
}

//Soal 3 — (a+b)/c
void soal3() {
    double a = 5, b = 6, c = 3;
    double hasil = (a + b) / c;
    printf("%.2lf\n", hasil);
}

//Soal 4 — jumlah & rata-rata
void soal4() {
    int A=6, B=9, C=4, D=20, E=7;

    int jumlah = A+B+C+D+E;
    double rata = jumlah / 5.0;

    printf("%d %.1lf\n", jumlah, rata);
}

int main() {
    soal1();
    soal2();
    soal3();
    soal4();
    return 0;
}