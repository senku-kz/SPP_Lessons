#include <stdio.h>

int main() {
    printf("Lesson 12 – Intro to Arrays \n");

    double arr[10];
    int i;
    for (i=0; i<10; i++){
        arr[i] = i * 3.14259 / 2.0;
    }
    printf("%f \n", arr[4]);
    printf("%f \n", arr[10]);


    int even[100];
    int ii, jj;

    // Store even values in the array
    for (ii=0; ii<100; ii++){
        if(ii == 0){
            even[ii] = 0;
        }else{
            even[ii] = even[ii-1] + 2;
        }
    }

    // Print out the contents
    for (jj=0; jj<100; jj++){
        printf("even[%i] = %i \n", jj, even[jj]);
    }


    // Array Initializers
    /*
     * A quick way to set the values of a small-sized array is to use an array initializer when we declare the array variable.
     * */
    char vowels[5] = {'a', 'e', 'i', 'o', 'u'};
    char vowels2[] = {'a', 'e', 'i', 'o', 'u'};
    int j;
    for (j=0; j<5; j++){
        printf("%c", vowels[j]);
    }
    printf("\n");
    for (j=0; j<5; j++){
        printf("%c", vowels2[j]);
    }

    return 0;
}
