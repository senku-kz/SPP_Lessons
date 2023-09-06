#include <stdio.h>

int main() {
    printf("Lesson 08 - Do-While-Loops\n");


    int k = 0, sum = 0;
    do {
        sum = sum + k;
        printf("sum: %i, k: %i \n", sum, k);
        k++;
    }while (k<=10);


    k = 20;
    do {
        printf("print at least one time, k = %i \n", k);
        k++;
    }while (k<=10);


    k = 0;
    do {
        printf("k = %i \n", k);
        k++;
    }while (k<10);
    printf("Last value of k is %i", k);


    int decNum = 40;
    printf("dec number: %i \n", decNum);
    do {
        int bit = decNum % 2;
        decNum = decNum / 2;
        printf("bit: %i \n", bit);
    } while (decNum > 0);
    printf("Done.\n");


    // Interchangeability of Loops
    printf("Interchangeability of Loops\n");
    k = 0;
    int n = -1;
    do {
        printf("k = %i \n", k);
        k++;
    }while (k<n);


    k = 0;
    printf("k = %i \n", k);
    k++;
    while (k<n) {
        printf("k = %i \n", k);
        k++;
    };

    k = 0;
    printf("k = %i \n", k);
    k++;
    for ( ; k<n; k++) {
        printf("k = %i \n", k);
    };


    // Break and Continue
    printf("Break and Continue:\n");
    int i;
    for(i = 0; i < 10; i++){
        printf("%i ", i);

        printf("next \n");
    }

    for(i = 0; i < 10; i++){
        printf("%i ", i);
        break;
        printf("next \n");
    }

    for(i = 0; i < 10; i++){
        printf("%i ", i);
        continue;
        printf("next \n");
    }

    /*
     * The break statement causes us to immediately exit the loop, no matter where we are at in the loop body
     * The continue statement forces the current loop body iteration to end, but we can proceed on to the next iteration (if the continuation condition is true)
     * */

    return 0;
}
