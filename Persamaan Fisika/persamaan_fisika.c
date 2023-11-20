//Tugas Persamaan Fisika Menggunakan Program C

#include <stdio.h>

int main(){

    float force, mass, acceleration;

    //Request Inpput From User
    printf("Masukkan massa (kg): ");
    scanf("%f", &mass);

    printf("Masukkan percepatan (m/s^2): ");
    scanf("%f", &acceleration);

    //Count Joules
    force = mass * acceleration;

    //Result
    printf("Gaya yang bekerja adalah: %.2f Newton\n", force);

    return 0;
}