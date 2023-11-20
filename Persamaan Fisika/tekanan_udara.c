#include <stdio.h>

// Fungsi untuk menghitung tekanan udara
float hitungTekanan(float volume, float suhu, float konstantaGas);

int main() {
    // Variabel-variabel untuk volume, suhu, dan konstanta gas
    float volume, suhu, konstantaGas;

    // Meminta input dari pengguna
    printf("Masukkan volume (m^3): ");
    scanf("%f", &volume);

    printf("Masukkan suhu (K): ");
    scanf("%f", &suhu);

    // Konstanta gas untuk udara (dalam J/(mol*K))
    konstantaGas = 287; 

    // Menghitung tekanan
    float tekanan = hitungTekanan(volume, suhu, konstantaGas);

    // Menampilkan hasil
    printf("Tekanan udara: %.2f Pa\n", tekanan);

    return 0;
}

// Fungsi untuk menghitung tekanan udara menggunakan persamaan ideal gas
float hitungTekanan(float volume, float suhu, float konstantaGas) {
    return konstantaGas * suhu / volume;
}