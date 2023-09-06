#include <stdio.h>
#include <stdbool.h>


int main() {
    printf("Lesson 9 - If statements\n");

    int grade = 95;
    int value = 93;


    // IF statements
    if (grade >= value){
        printf("I got an All! \n");
    }
    printf("Googbye \n");


    if (grade >= value)
        printf("I got an A!!! \n");


    // IF-ELSE statements
    if (grade >= value){
        printf("I got an A!!! \n");
    } else {
        printf("I didn't get an A :( \n");
    }
    printf("Googbye \n");


    // ELSE-IF Constructs
    // 37 370 3700
    int money = 370;
    if (money > 500){
        printf("Ordering 1 plate of manty \n");
    } else if (money > 300) {
        printf("Ordering 1 bowl of lagman \n");
    } else {
        printf("Ordering nothing \n");
    }
    printf("Googbye \n");


    // Nested if statements
    _Bool isHungry  = 1;  // true
    _Bool isThirsty = 1;  // true
    _Bool isSleepy  = 0;  // false
    if ( isHungry ) {
        printf("Ordering manty \n");
        if ( isThirsty ) {
            printf("Ordering pot of hot tea \n");
        } else {
            printf("Ordering cup of water \n");
        }
    } else {
        if ( isSleepy ) {
            printf("Ordering black coffee \n");
        }
        printf("Ordering baursaki \n");
    }



    // SWITCH Statements
    /*
     * Switch statements are similar to if-else if statements, in that we can have a choice of several different execution paths, which depends on the value of a given item.
     * Here, that item must be a variable of type int or char.
     * */
    char c_grade = 'D';

    switch (c_grade){
        case 'A':
            printf("Awesome!");
            break;
        case 'B':
            printf("Good job");
            break;
        default:
            printf("...um, not good... \n");
            break;
    }


    // Ternary Operator
    int x = 99, y = 88;

    // (condition) ? condition_true : condition_false
    int min = (x < y) ? x : y;
    int max = (x > y) ? x : y;

    printf("min: %i, max: %i \n", min, max);


    return 0;
}
