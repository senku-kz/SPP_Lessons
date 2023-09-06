#include <stdio.h>

int main() {
    printf("Lesson 13 – More Arrays\n");

    // declare strings in C as arrays of chars
    char word[] = {'H', 'e', 'l', 'l', 'o', '!'};

    for (int i=0; i<6; i++){
        printf("%c", word[i]);
    }
    printf("\n");

    char word1[] = {'H', 'e', 'l', 'l', 'o', '!'};
    char word2[] = {'H', 'o', 'w', 'd', 'y', '!'};
    printf("%s %s", word1, word2);
    printf("\n");

    char word3[] = {'H', 'e', 'l', 'l', 'o', '!', '\0'};
    char word4[] = {'H', 'o', 'w', 'd', 'y', '!', '\0'};
    printf("%s %s", word3, word4);
    printf("\n");


    // Initializing Array Size
    /*
     * In cases where we don’t want to set the size of an array to be a fixed constant, we can use a variable instead.
     * (Don’t confuse this with changing the size of an array after we have declared it, which isn’t possible.)
     * */
    int size;
    printf("Enter number of even numbers to generate: ");
    scanf("%i", &size);

    int arr[size];
    for (int i=0; i<size; i++){
        arr[i] = 2*i;
    }

    for(int i=0; i<size; i++){
        printf("arr[%i] = %i \n", i, arr[i]);
    }


    // Multi-Dimensional Arrays
    /**
     * The last topic for today is multi-dimensional arrays, which are essentially arrays of arrays (of arrays…, etc.)
     **/
    int R = 3, C = 4;
    int a[R][C]; // row, column
    int i, j, val = 100;
    /* set matrix elements */
    for (i = 0; i < R; i++) {
        for (j = 0; j < C; j++) {
            a[i][j] = val;
            val++;
        }
    }
    /* print matrix elements */
    for (i = 0; i < R; i++) { //rows
        for (j = 0; j < C; j++) { //columns
            printf("%5d", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}
