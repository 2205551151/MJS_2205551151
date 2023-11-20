//Persamaan Hukum Ohm

#include <stdio.h>

// Fungsi untuk menghitung tegangan (V) berdasarkan hukum Ohm
float hukumOhm(float arus, float resistansi) {
    return arus * resistansi;
}

int main() {
    // Nilai-nilai contoh untuk arus (I) dan resistansi (R)
    float arus = 2.5; // dalam ampere
    float resistansi = 10.0; // dalam ohm

    // Menghitung tegangan menggunakan hukum Ohm
    float tegangan = hukumOhm(arus, resistansi);

    // Menampilkan hasil perhitungan
    printf("Hukum Ohm: Tegangan (V) = Arus (I) * Resistansi (R)\n");
    printf("Arus (I): %.2f A\n", arus);
    printf("Resistansi (R): %.2f ohm\n", resistansi);
    printf("Tegangan (V): %.2f V\n", tegangan);

    return 0;
}