#include <stdio.h>

void testFunction(int x){
    x = x + 100;
    printf("in function: %i \n", x);
}

typedef struct {
    int id;
    char name[32];
    int salary;
} employee;

void giveRaise(employee em){
    em.salary = em.salary + 1000;
}

employee giveRaise2(employee em){
    em.salary = em.salary + 1000;
    return em;
}

void printArray(int size, double arr[]){
    for (int k=0; k<size; k++){
        printf("Element %i: %6.2f \n", k, arr[k]);
    }
}

void inc(int size, int arr[]){
    for (int i=0; i<size; i++){
        arr[i]++;
    }
}

void printArray2(int size, int arr[]){
    for (int k=0; k<size; k++){
        printf("Element %i: %4i \n", k, arr[k]);
    }
}

void func(int arr[][5]){
    for (int j=0; j<2; j++){
        for (int k=0; k<5; k++){
            printf("%i ", arr[j][k]);
        }
        printf("\n");
    }
}

void func1(int len1, int len2, int arr[][5]){
    for (int j=0; j<len1; j++){
        for (int k=0; k<len2; k++){
            printf("%i ", arr[j][k]);
        }
        printf("\n");
    }
}


int main() {
    printf("Lesson 17 – More Functions\n");

    // Functions Review
    int x = 7;
    printf("in main: %i \n", x);
    testFunction(x);
    printf("in main: %i \n", x);


    // Functions and Structs
    employee joe = {123456, "Joe Smith", 80000};
    printf("Before the raise: %i \n", joe.salary);
    giveRaise(joe);
    printf("After the raise: %i \n", joe.salary);

    /*
     * Because C is pass-by-value, we essentially copy the contents of the struct argument into the function parameter, which has its own spot in memory.
     * Thus, if we change the struct in the body of the function, it won’t change the original value in the calling code.
     * */

    printf("Before the raise: %i \n", joe.salary);
    joe = giveRaise2(joe);
    printf("After the raise: %i \n", joe.salary);

    // Functions and Arrays
    double vals[5] = { 2.3, 3.14, 5.0, 1.09, 10.0 };
    printArray(5, vals);


    // Modifying Arrays in Functions
    int a[] = {11, 22, 33};
    printArray2(3, a);
    inc(5, a);
    printArray2(3, a);

    /*
     * Here, we see that arrays are treated differently than structs or primitive typed items, in that changes made in the function body actually do change the original array.
     * This is because pass-by-reference is essentially used when an array is used as a function argument.
     * This means that instead of copying the contents of the array into the function parameter, the array’s location in memory is given to the function.
     * */


    // Defining Array Lengths
    int values[][5] = {
            {11, 22, 33, 44, 55},
            {66, 77, 88, 99, 111}
    };
    func(values);
    func1(2, 5, values);

    return 0;
}
