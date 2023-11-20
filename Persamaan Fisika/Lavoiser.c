//Persamaan Hukum Lavoiser

#include <stdio.h>

int main() {
    // Massa reaktan
    float massaReaktan1, massaReaktan2;

    // Massa produk
    float massaProduk1, massaProduk2;

    // Input massa reaktan
    printf("Masukkan massa reaktan 1: ");
    scanf("%f", &massaReaktan1);

    printf("Masukkan massa reaktan 2: ");
    scanf("%f", &massaReaktan2);

    // Proses reaksi (contoh sederhana, anggap reaksi sempurna)
    massaProduk1 = massaReaktan1;
    massaProduk2 = massaReaktan2;

    // Output massa produk
    printf("\nHasil reaksi:\n");
    printf("Massa produk 1: %.2f\n", massaProduk1);
    printf("Massa produk 2: %.2f\n", massaProduk2);

    // Periksa hukum kekekalan massa
    if (massaReaktan1 + massaReaktan2 == massaProduk1 + massaProduk2) {
        printf("\nHukum Kekekalan Massa Terpenuhi!\n");
    } else {
        printf("\nHukum Kekekalan Massa Tidak Terpenuhi!\n");
    }

    return 0;
}