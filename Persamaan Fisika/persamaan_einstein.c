//Persamaan Einstein

#include <stdio.h>

int main() {
    // Deklarasi variabel
    double energi, massa, kecepatan_cahaya;

    // Input massa dari pengguna
    printf("Masukkan massa (kg): ");
    scanf("%lf", &massa);

    // Kecepatan cahaya dalam vakum (sekitar 3 x 10^8 meter/detik)
    kecepatan_cahaya = 3e8;

    // Menghitung energi menggunakan persamaan E=mc^2
    energi = massa * kecepatan_cahaya * kecepatan_cahaya;

    // Menampilkan hasil
    printf("Energi yang dihasilkan: %lf joule\n", energi);

    return 0;
}