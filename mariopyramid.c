#include <stdio.h>
#include <string.h>

void pyramidConstructor (int blocksTall);

void main (void) {
    int blocksTall;

    do {
        printf("It's me, Mario!\nHow tall is the pyramid that I am jumping? (Enter a number between 1 and 8)\n");
        scanf("%d", &blocksTall);
        while (getchar() != '\n');

        if (blocksTall < 1 || blocksTall > 8) {
            printf("Invalid input. Please enter a valid number between 1 and 8.\n");
        }
    } while (blocksTall < 1 || blocksTall > 8);

    pyramidConstructor(blocksTall);
}

void pyramidConstructor (int blocksTall) {
    int gapMiddle = 2;
    int counter, gapLeft = blocksTall - 1;
    int blockCounter = 1;

    for (int i = 0; i < blocksTall; i++) {
        for (int j = 0; j < gapLeft; j++) {
            printf(" ");
        }

        gapLeft--;

        for (int j = 0; j < blockCounter; j++) {
            printf("#");
        }

        for (int j = 0; j < gapMiddle; j++) {
            printf(" ");
        }

        for (int j = 0; j < blockCounter; j++) {
            printf("#");
        }

        if (blockCounter < blocksTall) {
            blockCounter++;
        }

        printf("\n");
    }

}