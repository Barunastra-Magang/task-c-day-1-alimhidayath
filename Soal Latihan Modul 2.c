#include <stdio.h>
#include <string.h>

//Soal 1 — Ganjil/Genap
void soal1() {
    int x = 7;

    if (x % 2 == 0) printf("Genap\n");
    else printf("Ganjil\n");
}

//Soal 2 — * untuk genap
void soal2() {
    int n = 6;

    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) printf("* ");
        else printf("%d ", i);
    }
    printf("\n");
}

//Soal 3 — * untuk prima
int prima(int x) {
    if (x < 2) return 0;
    for (int i = 2; i*i <= x; i++)
        if (x % i == 0) return 0;
    return 1;
}

void soal3() {
    int n = 10;

    for (int i = 2; i <= n; i++) {
        if (prima(i)) printf("* ");
        else printf("%d ", i);
    }
    printf("\n");
}

//Soal 4 — Balik array
void soal4() {
    int arr[] = {1,4,3,2,9};

    for (int i = 4; i >= 0; i--)
        printf("%d ", arr[i]);

    printf("\n");
}

//Soal 5 — Hitung vokal
void soal5() {
    char s[] = "Informatika";
    int vokal = 0;

    for (int i = 0; s[i]; i++) {
        char c = s[i];
        if (c=='a'||c=='i'||c=='u'||c=='e'||c=='o'
         || c=='A'||c=='I'||c=='U'||c=='E'||c=='O')
            vokal++;
    }

    printf("Jumlah vokal: %d\n", vokal);
}

//Soal 6 — snake_case ke camelCase
void soal6() {
    char s[] = "player_score";
    int besar = 0;

    for (int i = 0; s[i]; i++) {
        if (s[i] == '_') {
            besar = 1;
            continue;
        }

        if (besar) {
            printf("%c", s[i] - 32);
            besar = 0;
        } else printf("%c", s[i]);
    }
    printf("\n");
}

int main() {
    soal1();
    soal2();
    soal3();
    soal4();
    soal5();
    soal6();
    return 0;
}