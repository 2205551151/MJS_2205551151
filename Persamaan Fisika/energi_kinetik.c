//Energi Kinetik

#include <stdio.h>

int main() {
    double massa, kecepatan, energi_kinetik;

    // Masukkan massa dan kecepatan dari pengguna
    printf("Masukkan massa (kg): ");
    scanf("%lf", &massa);
    
    printf("Masukkan kecepatan (m/s): ");
    scanf("%lf", &kecepatan);

    // Hitung energi kinetik menggunakan persamaan E = 0.5 * m * v^2
    energi_kinetik = 0.5 * massa * kecepatan * kecepatan;

    // Tampilkan hasil
    printf("Energi Kinetik = %.2f joule\n", energi_kinetik);

    return 0;
}