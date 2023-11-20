#include <stdio.h>

int main() {
    int health = 1350; // Poin HP awal karakter

    while (health > 0) {
        printf("Poin Kesehatan Karakter: %d\n", health);

        // Simulasikan serangan terhadap karakter (contohnya, karakter kehilangan 20 poin HP setiap serangan)
        health -= 20;

        if (health <= 0) {
            printf("Karakter telah mati.\n");
        } else {
            printf("Karakter masih hidup. Lanjutkan permainan!\n");
        }
    }

    return 0;
}