#include <stdio.h>
#include <stdbool.h>

// Old style
struct time {
    int hours;
    int minutes;
    char amOrPm; // 'a' or 'p'
};

typedef struct {
    int hours;
    int minutes;
    char amOrPm; // 'a' or 'p'
} time2;

typedef struct {
    int customerId;
    _Bool isSavings;
    int balance;
    double interestRate;
} account;

int main() {
    printf("Lesson 14 – Structures\n");

    /*
     * Structs allow us to define types that group different data items together into a single item.
     * This is different than arrays, which only let us sequentially group things together of the same type.
     * */

//    struct time t;
    struct time t = {11, 23, 'a'};

    printf("The time is %i hours ", t.hours);
    printf("and %i minutes", t.minutes);
    if(t.amOrPm == 'a'){
        printf(" in the morning. \n");
    }else{
        printf(" in the afternoon. \n");
    }


    t.hours = 5;
    t.amOrPm = 'p';
    printf("The time is %i hours ", t.hours);
    printf("and %i minutes", t.minutes);
    if(t.amOrPm == 'a'){
        printf(" in the morning. \n");
    }else{
        printf(" in the afternoon. \n");
    }


    struct time midnight = {12, 0, 'a'};
    struct time noon = midnight;
    noon.amOrPm = 'p';
    printf("The time is %i hours ", noon.hours);
    printf("and %i minutes", noon.minutes);
    if(noon.amOrPm == 'a'){
        printf(" in the morning. \n");
    }else{
        printf(" in the afternoon. \n");
    }

    // Using typedef to Define Structs
    time2 tt = {11, 23, 'a'};
    printf("The time is %i hours ", tt.hours);
    printf("and %i minutes", tt.minutes);
    if(tt.amOrPm == 'a'){
        printf(" in the morning. \n");
    }else{
        printf(" in the afternoon. \n");
    }

    // Initializing Structs
    account myAcct1;
    myAcct1.customerId = 123;
    myAcct1.interestRate = 1; // True

    account myAcct2 = {.customerId=125, .isSavings=1};

    account myAcct3;
    myAcct3 = (account){.customerId=126, .isSavings=1};


    /* TODO: Write some code that will first read in from
     * the user the ID, account type, and initial balance
     *
     * The interest rate for savings accounts is 2%, and
     * the interest rate for others is 1%
     *
     * Then, ask the user how long they want to wait, and
     * then output the resulting balance after interest
     * is accrued
     */
    account myAcct;

    printf("Enter in the customer id: ");
    scanf("%i", &myAcct.customerId);

    char ch;
    printf("Is this a savings account (Y/N)? ");
    scanf(" %c", &ch);

    if (ch == 'Y' || ch == 'y') {
        myAcct.isSavings = 1;
        myAcct.interestRate = 0.02;
    } else {
        myAcct.isSavings = 0;
        myAcct.interestRate = 0.01;
    }

    printf("What is the initial balance? ");
    scanf("%i", &myAcct.balance);

    int years;
    printf("How many years will you wait? ");
    scanf("%i", &years);

    int i;
    for (i = 0; i < years; i++) {
        myAcct.balance = myAcct.balance
                         * (1.0 + myAcct.interestRate);
    }

    printf("Your final balance is: %i", myAcct.balance);

    return 0;
}
