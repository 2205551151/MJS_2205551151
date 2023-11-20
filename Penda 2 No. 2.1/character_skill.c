#include <stdio.h>

int main(){

    char character;

    while (1) {
        printf("Add character skill (esc for exit):");
        scanf("%c", &character); //for avoid spacing and newline character (new line).

        switch (character) {
            case 'a':
                printf("Add character skill 'a'\n");
                break;
            case 'b':
                printf("Add character skill 'b'\n");
                break;
            case 'c':
                printf("Add character skill 'c'\n");
                break;
            case 'escape':
                printf("out from program.\n");
                return 0;
            default:
                printf("Invalid character skill. Try agaim.\n");
        }
    }

    return 0;
}