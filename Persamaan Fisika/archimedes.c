#include <stdio.h>

// Fungsi untuk menghitung gaya apung menggunakan hukum Archimedes
float hitungGayaApung(float massaBenda, float densitasFluida, float volumeBenda) {
    // Hukum Archimedes: Gayanya sama dengan berat fluida yang dipindahkan oleh benda
    float gayaApung = massaBenda * 9.8; // Berat benda
    float beratFluidaYangDipindahkan = densitasFluida * 9.8 * volumeBenda; // Berat fluida yang dipindahkan

    // Gaya apung adalah selisih antara berat benda dan berat fluida yang dipindahkan
    gayaApung = gayaApung - beratFluidaYangDipindahkan;

    return gayaApung;
}

int main() {
   
    float massaBenda = 10.0;       
    float densitasFluida = 1000.0; 
    float volumeBenda = 0.001;     

    float gayaApung = hitungGayaApung(massaBenda, densitasFluida, volumeBenda);

    printf("Gaya apung yang dialami benda adalah %.2f Newton\n", gayaApung);

    return 0;
}