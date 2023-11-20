#include <stdio.h>

// Definisi struct untuk segitiga
typedef struct {
    float alas;
    float tinggi;
} Segitiga;

// Definisi struct untuk prisma segitiga
typedef struct {
    Segitiga alasSegitiga;
    float tinggiPrisma;
} PrismaSegitiga;

// Fungsi untuk menghitung luas segitiga
float luasSegitiga(Segitiga s) {
    return 0.5 * s.alas * s.tinggi;
}

// Fungsi untuk menghitung volume prisma segitiga
float volumePrisma(PrismaSegitiga p) {
    return luasSegitiga(p.alasSegitiga) * p.tinggiPrisma;
}

// Fungsi untuk menghitung luas permukaan prisma segitiga
float luasPermukaanPrisma(PrismaSegitiga p) {
    return 2 * luasSegitiga(p.alasSegitiga) + (p.alasSegitiga.alas * p.tinggiPrisma);
}

int main() {
    PrismaSegitiga prisma;

    // Meminta input dari pengguna
    printf("Masukkan alas segitiga: ");
    scanf("%f", &prisma.alasSegitiga.alas);
    printf("Masukkan tinggi segitiga: ");
    scanf("%f", &prisma.alasSegitiga.tinggi);
    printf("Masukkan tinggi prisma: ");
    scanf("%f", &prisma.tinggiPrisma);

    // Menghitung dan mencetak hasil
    printf("Volume Prisma: %.2f\n", volumePrisma(prisma));
    printf("Luas Permukaan Prisma: %.2f\n", luasPermukaanPrisma(prisma));

    return 0;
}