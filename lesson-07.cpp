#include <stdio.h>
#include <math.h>

int main() {
    printf("Lesson 07 - While Loops\n");

    // While Loop
    int x = 0;
    while (x <= 10){
        printf("%i \n", x);
        x++;
    }

    double inval;
    printf("Enter in a value (enter a negative to quit): ");
    scanf("%lf", &inval);
    while (inval >= 0.0) {
        double outval = sqrt(inval);
        printf("Its square root is: %f\n\n", outval);
        printf("Enter in a value (enter a negative to quit): ");
        scanf("%lf", &inval);
    }
    printf("Done.");


    return 0;
}
