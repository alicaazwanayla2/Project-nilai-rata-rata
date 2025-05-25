# Mini Proyek - Coding untuk Kakak Tingkat

## Identitas Mahasiswa
- Nama: Alica Azwa Nayla
- NIM: 2409693
- Kelas: 2B

## Identitas Kakak Tingkat
- Nama: Amara Seviany A
- Angkatan: 2023

## Permintaan Program
> "Programnya, buat program untuk menghitung nilai rata-rata, nanti nilainya itu ada grade-nya (kaya 100 itu A) gitu."

## Penjelasan Program
- Bahasa pemrograman yang digunakan: C
- Fitur utama:
  - Input data nilai mata pelajaran
  - Menghitung nilai rata-rata secara otomatis
  - Menampilkan penjelasan atau grade berdasarkan nilai rata-rata
- Konsep yang digunakan:
  - Input/output (`scanf` dan `printf`)
  - Variabel
  - Percabangan (`if-else`)
  - Perulangan (`for`)
  - Fungsi

## Kode Program

```c
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

    nilaiRataRata = (float) total / jumlah;
    printf("Nilai rata-rata nya adalah: %.2f\n", nilaiRataRata);
    projectNilaiRataRata(nilaiRataRata);
  
    return 0;
}
