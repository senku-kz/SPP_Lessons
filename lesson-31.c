#include <stdio.h>
#include "lesson-31-lib.h"
// lesson-31-lib.h its own library

/*
 * Component-Based Design
 * The first design principle we are going to look at is component-based design, which says that we should “bundle” items that have similar functionality, or work together towards a single purpose.
 * The second design principle states that we should further separate our components into two separate files, one that defines the interface, and another that provides its implementation.  In terms of C, interfaces are defined in header (.h) files, and implementations are provided in .c files.
 *
 * .c files are used for:
 * - Your main program
 * - Component implementations (functions bodies)
 *
 * Header (.h) files provide the following for components:
 * - Structure and type definitions
 * - Function prototypes (not bodies)
 * - Global variable declarations and constant definitions
 *
 * When we want to use a component, we only #include the header, NEVER THE CORRESPONDING .c file
 *
 * The #include preprocessor directive in C gives us a way to import component libraries, but recall that we always include .h files (headers), but never .c files!
 *
 * Build Stages
 * */

int main() {
    printf("Lesson 31 – Multi-File Programs\n");

    printf("Hello Astana! \n");
    sayGoodbye();

    return 0;
}
