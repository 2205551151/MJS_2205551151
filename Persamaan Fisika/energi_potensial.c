//Persamaan Energi Potensial

#include <stdio.h>

int main(){

    double massa = 15.0;
    double gravitasi = 8.0;
    double ketinggian = 9.7;

    double energiPotensial = massa * gravitasi * ketinggian;

    print("Energi Potensial: %f joule\n", energiPotensial);

    return 0;
}