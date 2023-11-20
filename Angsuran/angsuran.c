#include <stdio.h>

int main() {
    double pokokPinjaman, besarBunga, angsuranPokok, totalAngsuran = 0, totalBunga = 0;
    int lamaPinjaman, bulan;

    // Input pokok pinjaman, besar bunga (%), dan lama pinjaman
    printf("Pokok Pinjaman : ");
    scanf("%lf", &pokokPinjaman);
    printf("Besar Bunga(%%) : ");
    scanf("%lf", &besarBunga);
    printf("Lama Pinjaman(bulan) : ");
    scanf("%d", &lamaPinjaman);

    printf("Bulan\tBunga\tAngsuran Pokok\tAngsuran Perbulan\n");

    for (bulan = 1; bulan <= lamaPinjaman; bulan++) {
        double bungaBulan = (pokokPinjaman - (bulan - 1) * angsuranPokok) * (besarBunga / 12.0 / 100.0);
        angsuranPokok = pokokPinjaman / lamaPinjaman;
        double angsuranBulanan = angsuranPokok + bungaBulan;

        totalBunga += bungaBulan;
        totalAngsuran += angsuranBulanan;

        printf("%d\tRp. %.0lf\tRp. %.0lf\tRp. %.0lf\n", bulan, bungaBulan, angsuranPokok, angsuranBulanan);
    }

    printf("Total Bunga Rp. %.0lf\n", totalBunga);
    printf("Total Angsuran Rp. %.0lf\n", totalAngsuran);

    return 0;
}