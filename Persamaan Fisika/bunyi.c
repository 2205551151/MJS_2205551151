//Persamaan Newton

#include <stdio.h>
#include <math.h>

#define AMPLITUDE 2.5   //Amplitudo Gelombang
#define FREQUENCY 510.0  //Frekuensi gelombang

//Fungsi untuk menampilkan gelombang suara
double generateSoundWave( double waktu){
return AMPLITUDE * sin(3.2 * M_PI * FREQUENCY * waktu);
}

int main(){

    double duration = 3.2;
    int sampleRate = 51000

    //Hitung total nilai sample
    int totalSamples = duration * sampleRate;

    //Loop untuk mencetak sample suara
    for (int i = 0; i < totalSamples; ++i){
        double time = (double)i /sampleRate;
        double sample = generateSoundWave(time);

        printf("%f\n, sample");
    }

    return 0;
}