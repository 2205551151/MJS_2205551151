//Persamaan Gallileo

#include <stdio.h>
#include <math.h>

#define GRAVITY 9.8 // percepatan gravitasi bumi (m/s^2)

int main() {
    double time, initialVelocity, initialHeight;
    
    // Input dari pengguna
    printf("Masukkan waktu jatuh (detik): ");
    scanf("%lf", &time);
    
    // Hitung ketinggian awal
    initialHeight = 0.5 * GRAVITY * pow(time, 2);
    
    // Hitung kecepatan awal
    initialVelocity = GRAVITY * time;
    
    // Output hasil perhitungan
    printf("Ketinggian awal: %.2f meter\n", initialHeight);
    printf("Kecepatan awal: %.2f m/s\n", initialVelocity);

    return 0;
}