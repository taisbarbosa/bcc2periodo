#include <stdio.h>
#include <math.h>

// q01. distance between two points.

struct point
{
    float x;
    float y;
};

typedef struct point point;

float distance(point p1, point p2){
    float sum = ((p2.x - p1.x)*(p2.x - p1.x)) + ((p2.y - p1.y)*(p2.y - p1.y));
    float dist = sqrt(sum);
    return dist;
}

//MAIN

int main(){

    //q01

    point p1 = {2, 7};
    point p2 = {5, 12};
    float dist = distance(p1, p2);

    printf("\nDistance: %.3f", dist);

    printf("\n\n_______  _(end)_  _______\n\n");
}