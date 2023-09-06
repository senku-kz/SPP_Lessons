#include <stdio.h>

int main() {
    printf("Lesson 10 – Formatted I/O \n");

    // Putchar
    putchar('H');
    putchar('e');
    putchar('l');
    putchar('l');
    putchar('o');
    putchar('\n');
    putchar('>>');
    putchar(70); // ASCII code/value

    for (int i=32; i<=128; i++){
        putchar(i);
        putchar('\n');
    }


    // Getchar
    setvbuf(stdout, NULL, _IONBF, 0);
    char ch;

//    printf("Please enter a char: ");
//    ch = getchar();
//    printf("You entered a '%c' \n", ch);

//    printf("Please enter a many chars: ");
//    do{
//        ch = getchar();
//        printf("You entered a '%c' \n", ch);
//    } while (ch != '\n');


    // Printf and Scanf Revisited
    double pi = 3.14159265;
    printf("%f \n", pi);
    printf("%.10f \n", pi);
    printf("%12f \n", pi);
    printf("%12.8f \n", pi);

    for (int i=0; i<150; i= i+7){
        printf("%i %i \n", i, 2*i);
    }

    for (int i=0; i<150; i= i+7){
        printf("%6i %6i \n", i, 2*i);
    }


    // Scanf()
    /*
     * %i  integer
     * %f  float
     * %lf double
     * %c  char
     * %s  string (don't need & before)
     * */

    int a, b;
//    printf("Getting input: ");
//    scanf("%i", &a);
//    printf("\nI found %i \n", a);

    // 89 56
    // 89 \n 56
//    printf("Getting input: ");
//    scanf("%i", &a);
//    scanf("%i", &b);
//    printf("\nI found %i and %i \n", a, b);

    // 89 56
    // 89 \n 56
//    printf("Getting input: ");
//    scanf("%i %i", &a, &b);
//    printf("\nI found %i and %i \n", a, b);

    // 89, 56
//    printf("Getting input: ");
//    scanf("%i, %i", &a, &b);
//    printf("\nI found %i and %i \n", a, b);

    // 444 \n 555
    //  444 555
//    printf("Getting input 1: ");
//    scanf("%i", &a);
//    printf("Getting input 2: ");
//    scanf("%i", &b);
//    printf("\nI found %i and %i \n", a, b);


    // Reading Strings
    /*
     * We already know about constant strings — those sequences of characters between double-quotes, but we can actually store string values in variables as well.
     * */

    char name[81];
    int age;

    // Ben \n 19
    // Ben 19
    printf("Enter your name: ");
    scanf("%s", name);

    printf("Enter your age: ");
    scanf("%i", &age);

    printf("\nHello %s, glad to meet you. \n", name);
    printf("You will be %i years ond next year.", age+1);

    return 0;
}
