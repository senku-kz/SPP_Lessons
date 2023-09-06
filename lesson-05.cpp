#include <stdio.h>

int main() {
    printf("Lesson 05 - Operators\n");
    // Operators
    int x = 20 + 10;
    int y = 2 + 5;
    printf("%i \n", x+y);
    printf("%i \n", x-y);
    printf("%i \n", x*y);
    printf("%i \n", x/y);


    double a = 11.1;
    double b = 22.2;
    printf("%f \n", a+b);
    printf("%f \n", a-b);
    printf("%f \n", a*b);
    printf("%f \n", a/b);

    int c = 30;
    double d = 7.0;
    printf("%f \n", c + d);
    printf("%f \n", c - d);
    printf("%f \n", c * d);
    printf("%f \n", c / d);
    /*
    Remember that if both operands (i.e., arguments to an operator) are integers, the result will be an integer — this might lead to truncation when doing division.
    Otherwise, if there is a floating-point number involved, the result will also be a floating-point number.
     */


    // Binary Numeric Operators
    int a1 = 2;
    int a2 = 3;
    int a3 = 4;
    int a4 = 5;
    printf("%i \n", a1 + a2 * a3 + a4);
    printf("%i \n", (a1 + a2) * (a3 + a4));
    printf("%i \n", a1 - a2 - a3 - a4);


    // Unary minus
    int ux = 77;
    int uy = 88;
    printf("%i \n", -ux);
    printf("%i \n", - (ux + uy));
    printf("%i \n", - ux + uy);

    //Type casting
    int tx;
    double ty;
    tx = 123;
    ty = tx;
    printf("x = %i   y = %f \n", tx, ty);

    ty = 123.456;
    tx = ty;
    printf("x = %i   y = %f \n", tx, ty);

    int ta = 23;
    int tb = 7;
    double tc = ta / tb;
    printf("%f \n", tc);

    tc = (double)ta / tb;
    printf("%f \n", tc);

    printf("The modulo operator (\%) %i \n", ta % tb);

    x = 23;
    y = 5;
    x += y;
    printf("x = %i \n", x);
    x++;
    printf("x = %i \n", x);
    x--;
    printf("x = %i \n", x);
    ++x;
    printf("x = %i \n", x);
    --x;
    printf("x = %i \n", x);

    x = 25; y = 4;
    x *= y;
    printf("x *= y: %i \n", x);

    // the increment (++) and decrement (—) unary operators.
    x = 10;
    y = x++;
    printf("x = %i y = %i\n", x, y);
    y = ++x;
    printf("x = %i y = %i\n", x, y);

    // Relational and Boolean Operators
//    _Bool b;
//    b = (23 < 120);
//    printf("%i", b);
//
//    b = (23 > 120);
//    printf("%i", b);
//
//    b = (23 == 120);
//    printf("%i", b);
//
//    b = (23 != 120);
//    printf("%i", b);

    /*
     &&   - Logical and
     ||   - Logical or
     !    - Logical Not

     ==   - Equal to
     !=   - Not equal to
     <    - Less than
     <=   - Less than or equal to
     >    - Greater then
     >=   - Greater then
    */

    return 0;
}