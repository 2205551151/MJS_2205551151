#include <stdio.h>

// Fungsi untuk menghitung tekanan (Pascal's Law)
float hitungTekanan(float gaya, float luas) {
    return gaya / luas;
}

int main() {
    // Input gaya dan luas
    float gaya, luas;

    printf("Masukkan gaya (N): ");
    scanf("%f", &gaya);

    printf("Masukkan luas (m^2): ");
    scanf("%f", &luas);

    // Hitung tekanan menggunakan hukum Pascal
    float tekanan = hitungTekanan(gaya, luas);

    // Menampilkan hasil
    printf("Tekanan: %.2f Pascals\n", tekanan);

    return 0;
}