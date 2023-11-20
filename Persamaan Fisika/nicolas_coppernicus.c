//Persamaan Nicolas Coppernicus

#include <stdio.h>
#include <math.h>

int main() {
    double T, a;

    // Input periode orbit (dalam tahun)
    printf("Masukkan periode orbit planet (dalam tahun): ");
    scanf("%lf", &T);

    // Input jari-jari rata-rata orbit (dalam satuan astronomi)
    printf("Masukkan jari-jari rata-rata orbit planet (dalam satuan astronomi): ");
    scanf("%lf", &a);

    // Menghitung kuadrat periode
    double T_squared = pow(T, 2);

    // Menghitung kubus jari-jari rata-rata orbit
    double a_cubed = pow(a, 3);

    // Memeriksa proporsionalitas
    if (fabs(T_squared - (k * a_cubed)) < 0.0001) {
        printf("Hukum Kepler ketiga terpenuhi!\n");
    } else {
        printf("Hukum Kepler ketiga tidak terpenuhi.\n");
    }

    return 0;
}