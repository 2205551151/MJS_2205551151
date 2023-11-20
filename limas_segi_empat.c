#include <stdio.h>

// Mendefinisikan struct untuk Limas
typedef struct {
    float sisiAlas;
    float tinggiAlas;
    float tinggiLimas;
} LimasSegiEmpat;

// Fungsi untuk menghitung volume limas
float hitungVolume(LimasSegiEmpat limas) {
    return (limas.sisiAlas * limas.tinggiAlas * limas.tinggiLimas) / 3;
}

// Fungsi untuk menghitung luas permukaan limas
float hitungLuasPermukaan(LimasSegiEmpat limas) {
    float luasAlas = limas.sisiAlas * limas.tinggiAlas;
    float sisiMiring = sqrt((limas.tinggiLimas * limas.tinggiLimas) + ((limas.sisiAlas / 2) * (limas.sisiAlas / 2)));
    float luasSegitiga = (limas.sisiAlas * sisiMiring) / 2;
    return luasAlas + 4 * luasSegitiga;
}

int main() {
    LimasSegiEmpat limas;
    printf("Masukkan sisi alas limas: ");
    scanf("%f", &limas.sisiAlas);
    printf("Masukkan tinggi alas limas: ");
    scanf("%f", &limas.tinggiAlas);
    printf("Masukkan tinggi limas: ");
    scanf("%f", &limas.tinggiLimas);

    printf("Volume Limas: %.2f\n", hitungVolume(limas));
    printf("Luas Permukaan Limas: %.2f\n", hitungLuasPermukaan(limas));

    return 0;
}