#include <stdio.h>

int main() {
    printf("Lesson 06 - For Loop\n");

    // For Loop Flow of Control
    for(int i=0; i<10; i++){
        printf("loop %i \n", i);
    }

    for(int i=0; i<10; i=i+2){
        printf("loop %i \n", i);
    }

    for(int i=10; i>=1; i--){
        printf("loop %i \n", i);
    }

    // Nested Loops
    for(int k=0; k<10; k++){
        for(int j=k; j>0; j--){
            printf("%i", j);
        }
        printf("\n");
    }

    // For loop variants
    int i, j;
    for(i=0, j=0; i<10; i++) {
        j = 2 + i;
        printf("%i times 2 is %i \n", i, j);
    }

    for(i=0, j=0; i<10; i++, j=j+2) {
        printf("%i times 2 is %i \n", i, j);
    }

    int q = 0, w = 0;
    for( ; q<10; q++, w=w+2) {
        printf("%i times 2 is %i \n", q, w);
    }

    q = 0, w = 0;
    for( ; q<10; ) {
        printf("%i times 2 is %i \n", q, w);
        q++;
        w=w+2;
    }

     q = 0, w = 0;
    for( ; ; ) {
        printf("%i times 2 is %i \n", q, w);
        q++;
        w=w+2;

        if (q>10){
            break;
        }
    }

    return 0;
}
