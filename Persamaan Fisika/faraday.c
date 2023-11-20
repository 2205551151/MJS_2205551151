//Persamaan Faraday

#include <stdio.h>

// Fungsi untuk menghitung EMF berdasarkan laju perubahan fluks magnetik
float hitungEMF(float dPhi_dt) {
    return -dPhi_dt;  // Tanda negatif sesuai dengan hukum Faraday
}

int main() {
    float dPhi_dt;

    // Input laju perubahan fluks magnetik
    printf("Masukkan laju perubahan fluks magnetik (weber/detik): ");
    scanf("%f", &dPhi_dt);

    // Hitung EMF menggunakan fungsi
    float emf = hitungEMF(dPhi_dt);

    // Output hasil
    printf("EMF (Volt): %.2f\n", emf);

    return 0;
}