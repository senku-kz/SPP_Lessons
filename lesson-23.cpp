#include <stdio.h>

void swap(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main() {
    printf("Lesson 23 – Pointers As Parameters\n");

    int x = 10;
    int *px1 = &x;
    int *px2 = px1;
    int **ppx = &px2;

    printf("x = %i, &x = %p \n", x, &x);
    printf("px1 = %p, *px1 = %i, &px1 = %p \n", px1, *px1, &px1);
    printf("px2 = %p, *px2 = %i, &px2 = %p \n", px2, *px2, &px2);
    printf("ppx = %p, *ppx = %p, **ppx=%i \n", ppx, *ppx, **ppx);

    // what happens if we fail to set a pointer to anything, and then try to dereference it.
//    int *ptr;
//    *ptr = 44;

    int *ptr2 = NULL;
    if (ptr2 == NULL){
        printf("Can't set the value yet. \n");
    } else {
        *ptr2 = 44;
    }

    // Swap Function Example
    int a = 11, b = 22;
    swap(&a, &b);
    printf("a=%i, b=%i \n", a, b);

    return 0;
}
