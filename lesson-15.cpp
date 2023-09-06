#include <stdio.h>

typedef struct {
    int r, g, b;
} Color;

typedef struct {
    int x, y;
} Coords;

typedef struct {
    double rad;
    Coords center;
    Color outsideColor;
    Color fillColor;
} Circle;

typedef struct {
    Coords point1;
    Coords point2;
    Color color;
} LineSegment;

typedef struct {
    Color color;
    Coords point[5];
} Pentagon;

int main() {
    printf("Lesson 15 – Structures and Arrays\n");

    Color white = {255, 255, 255};
    Color red   = {255, 0, 0};
    Color black = {0, 0, 0,};


    // Using structs of structs
    Coords pt1 = {12, 44};
    LineSegment line;
    line.color = white;

    line.point1 = pt1;

    line.point2.x = 65;
    line.point2.y = 77;

    /*
     * Keep in mind that when accessing or setting a member of a member (of a member…),
     * you use the dot notation with the variable name on the far left,
     * and everything after that must be a member name — never a type name!
     * */


    // Arrays of Struct Items
    LineSegment polygon[5] = {
            {{44, 33}, {55, 13}, white},
            {{55, 13}, {11, 22}, black},
            {{11, 22}, {13, 40}, red},
            {{13, 40}, {22, 60}, {128, 128, 128}},
            {{22, 60}, {44, 33}, {0, 128, 0}}
    };


    // Structures Containing Arrays
    Pentagon shape;
    shape.color = red;
    shape.point[0].x = 44;
    shape.point[0].y = 33;
    shape.point[1].x = 55;
    shape.point[1].y = 13;
    shape.point[2] = {11,22};
    shape.point[3] = {13,40};
    shape.point[4] = {22,60};


    Pentagon shape2 = {
            red,
            {
                    {44, 33},
                    {55, 13},
                    {11, 22},
                    {13, 40},
                    {22, 60}
            }
    };


    return 0;
}
