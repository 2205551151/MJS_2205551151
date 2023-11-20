//Persamaan Hukum Coulomb

#include <stdio.h>
#include <math.h>

int main() {
    double k = 8.9875e9;  // Konstanta Coulomb
    double q1, q2, r;     // Besar muatan dan jarak

    // Memasukkan besar muatan dan jarak dari pengguna
    printf("Masukkan besar muatan q1 (C): ");
    scanf("%lf", &q1);

    printf("Masukkan besar muatan q2 (C): ");
    scanf("%lf", &q2);

    printf("Masukkan jarak antara muatan (m): ");
    scanf("%lf", &r);

    // Menghitung gaya elektrostatik menggunakan hukum Coulomb
    double F = k * (q1 * q2) / pow(r, 2);

    // Menampilkan hasil
    printf("Gaya elektrostatik antara dua muatan: %lf N\n", F);

    return 0;
}