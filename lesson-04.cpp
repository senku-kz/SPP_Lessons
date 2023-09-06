#include <stdio.h>
#include <stdbool.h>

int main() {
    printf("Lesson 04 - Basic types\n");
//    int - Integers (values with no decima)
//    floar - Floating-point numbers (values with decimal places)
//    double - Same as float, but with roughly twice the precision
//    char - A single character(e.g. a, 5, $)
//    _Bool - The values 0 or 1, to represent false and true (added in the C99 standard)

    int x = 63;
//    %i (or %d) - decimal representation
//    %o - octal representation, e.g. 023
//    %x - hexadecimal representation, e.g. 0xA2F
    printf("The value of x is %i\n", x);
    printf("The value of x is %d\n", x);
    printf("The value of x is %o\n", x);
    printf("The value of x is %x\n", x);


//    scanf("Enter the input %i", &x) // BAD example
//  Best practice of use input
//  Use setvbuf for synchronize input and output in exactly the way you might expect.
    setvbuf(stdout, NULL, _IONBF, 0);
    printf("Please input integer value:");
//    scanf("%i", &x);
//    printf("The value that was input was: %i\n", x);

//    %f - floating point representation
//    %e - scientific notation
//    %g - whatever looks best

    float f = 33.44;
    double d = 994949494949494949494.95959595;
    double d2 = 0.0000000000000333333;
    printf("The values are %e and %e and %e\n", f, d, d2);
    printf("The values are %g and %g and %g\n", f, d, d2);


//    Input float numbers
//    double a;
//    float b;
//    scanf("%lf", &a);
//    scanf("%f", &b);
//    printf("The value that was input was %g and %g\n", a, b);


//    Input characters
    char ch = 'a';
    printf("%c\n", ch);

    // \a Audible alert
    char ch1 = '\a';
    printf(">%c<\n", ch1);

    // \b NewLine
    char ch2 = '\n';
    printf(">%c<\n", ch2);

    // \t Horizontal tab
    char ch3 = '\t';
    printf(">%c<\n", ch3);

    // \r Carriage return
    char ch4 = '\r';
    printf(">%c<\n", ch4);

    // \v Vertical tab
    char ch5 = '\v';
    printf(">%c<\n", ch5);

    // \\ Backslash
    char ch6 = '\\';
    printf(">%c<\n", ch6);

    // \" Double quotation mark
    char ch7 = '\"';
    printf(">%c<\n", ch7);

    // \' Single quotation mark
    char ch8 = '\'';
    printf(">%c<\n", ch8);

    // \? Question mark
    char ch9 = '\?';
    printf(">%c<\n", ch9);

//    printf("Give me a character:");
//    scanf("%c", &ch);
//    printf(">%c<\n", ch);


    // Chars and ASCII
    printf("The character \'%c\' has ASSCII value %i\n", 'A', 'A');
    printf("The character \'%c\' has ASSCII value %i\n", ch, ch);
    printf("The character \'%c\' has ASSCII value %i\n", ' ', ' ');


    // BOOLEAN
    _Bool bb = 0;   // means false
    _Bool bc = 1;   // means true
    printf("The values are %i and %i", bb, bc);
    _Bool be = 99;   // means true
    printf("The values are %i", be);

    // We can not read a Bool value from scaner

    return 0;
}