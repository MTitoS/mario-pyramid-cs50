#include <stdio.h>
#include <string.h>

void pyramidConstructor (int blocksTall);

void main (void) {

    int blocksTall;

    //Run at least one time asking a number, then validates the answer.
    do {
        printf("It's me, Mario!\nHow tall is the pyramid that I am jumping? (Enter a number between 1 and 8)\n");
        scanf("%d", &blocksTall);
        while (getchar() != '\n');

        if (blocksTall < 1 || blocksTall > 8) {
            printf("Invalid input. Please enter a valid number between 1 and 8.\n");
        }
    } while (blocksTall < 1 || blocksTall > 8);

    //Call the printing function with the number (in a variable) as an argument.
    pyramidConstructor(blocksTall);
}

void pyramidConstructor (int blocksTall) {

    int gapMiddle = 2; //Set how many blocks in the middle you want.
    int gapLeft = blocksTall - 1; //If the pyramid is 8 blocks tall, there will be 7 spaces to the left then the first building block (#).
    int blockCounter = 1; //Used as a variable to print in a descending way, incrementing later in the loop.

    //Loop X times (X = blocksTall)
    for (int i = 0; i < blocksTall; i++) {

        //Adds the left spacing and then decrease the value after the loop, because the pyramid will be growing and the space necessary will be shorter.
        for (int j = 0; j < gapLeft; j++) {
            printf(" ");
        }

        gapLeft--;

        //blockCounter starts with 1 because if it started with 0, the first for loop would be true and then not print anything. 
        //Therefore it would be one less block than the user input.
        for (int j = 0; j < blockCounter; j++) {
            printf("#");
        }

        for (int j = 0; j < gapMiddle; j++) {
            printf(" ");
        }

        for (int j = 0; j < blockCounter; j++) {
            printf("#");
        }

        //blockCounter will be incrementing so it gets even with blocksTall, to finish the printing of the pyramid.
        if (blockCounter < blocksTall) {
            blockCounter++;
        }

        printf("\n");
    }

}