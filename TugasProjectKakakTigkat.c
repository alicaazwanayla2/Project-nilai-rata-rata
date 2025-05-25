#include <stdio.h>

void projectNilaiRataRata(float rataRata) {
    if (rataRata >= 84 && rataRata <= 100) {
        printf("Penjelasan: Sangat Baik\n");
    } else if (rataRata >= 74 && rataRata <= 83) {
        printf("Penjelasan: Baik\n");
    } else if (rataRata >= 54 && rataRata <= 69) {
        printf("Penjelasan: Cukup\n");
    } else if (rataRata >= 44 && rataRata <= 53) {
        printf("Penjelasan: Kurang\n");
    } else {
        printf("Penjelasan: Sangat Kurang\n");
    }
}

int main() {
    int jumlah;
    int i;
    int nilai;
    int total = 0;
    float nilaiRataRata;

    printf("Ingin menghitung berapa mata pelajaran?: ");
    scanf("%d", &jumlah);

    for (i = 1; i <= jumlah; i++) {
        printf("Silahkan masukkan nilai ke-%d: ", i);
        scanf("%d", &nilai);
        total += nilai;
    }

    nilaiRataRata = total / jumlah;
    printf("Nilai rata-rata nya adalah: %.2f\n", nilaiRataRata);
    projectNilaiRataRata(nilaiRataRata);
  
    return 0;
}