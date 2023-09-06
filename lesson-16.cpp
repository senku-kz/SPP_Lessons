#include <stdio.h>
#include <limits.h>
#include <math.h>


void function1(){
    printf("Hi there! \n");
}

void function2(int temperature) {
    printf("The current temperature is %i C \n", temperature);
}

void function3(int temperature) {
    printf("The current temperature is %i C \n", temperature);
    temperature += 30;
    printf("I wish it was %i C \n", temperature);
}


double average(int x, int y, int z){
    int sum = x + y + z;
    return sum / 3.0;
}

int sum(int, int, int);

void printSquared(int x){
    if (x > sqrt(INT_MAX)) {
        printf("%i is too big to square. \n", x);
        return;
    }
    int y = x * x;
    printf("%i squared is %i. \n", x, y);
}


int main() {
    printf("Lesson 16 – Functions \n");
    function1();
    function1();
    function1();

    // Function Parameters
    function2(-18);
    function2(-15);
    function2(-10);

    int temp;

    temp = -18;
    function3(temp);
    printf("After function: %i \n", temp);

    temp = -15;
    function3(temp);
    printf("After function: %i \n", temp);

    temp = -10;
    function3(temp);
    printf("After function: %i \n", temp);


    // Functions Returning Values
    int a=5, b=7;
    double val = average(a, 6, b+1);
    printf("Average is: %f \n", val);


    // Forward Declarations
    int s = sum(a, 6, b+1);
    printf("Sum is: %i \n", s);


    // Returning from Void Functions
    /*
     * example showing how we can return from the middle of the body of a function that doesn’t return a value
     * */
    printSquared(500);
    printSquared(5000);
    printSquared(500000);
    printSquared(INT_MAX);
    return 0;
}

int sum(int x, int y, int z){
    return x + y + z;
};