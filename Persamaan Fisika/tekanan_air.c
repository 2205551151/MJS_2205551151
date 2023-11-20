//Tekanan Air

#include <stdio.h>

int main() {
    // Konstanta
    float rho = 1000.0; // Massa jenis air (kg/m^3)
    float g = 9.8;     // Percepatan gravitasi (m/s^2)

    // Input dari pengguna
    float h;
    printf("Masukkan kedalaman air (meter): ");
    scanf("%f", &h);

    // Menghitung tekanan
    float pressure = rho * g * h;

    // Menampilkan hasil
    printf("Tekanan air pada kedalaman %.2f meter adalah %.2f Pascal\n", h, pressure);

    return 0;
}