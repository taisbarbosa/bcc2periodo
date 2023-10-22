#include <stdio.h>
#include <math.h>
#include <stdlib.h>

#define RAND_MAX 50
#define RAND_MIN -50

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

// q02. write a function that takes a vector of points, as well as their size, and informs the distance to every two consecutive points

float distance_vector(int n, point v[]){
    int c=1;
    for (int i = 0; i < n; i++)
    {
        float sum = ((v[i+1].x - v[i].x)*(v[i+1].x - v[i].x)) + ((v[i+1].y - v[i].y)*(v[i+1].y - v[i].y));
        float dist = sqrt(sum);
        printf("\npoint %d: (%.3f, %.3f); point %d: (%.3f, %.3f) = %.3f", c, v[i].x, v[i].y, c+1, v[i+1].x, v[i+1].y, dist);
        i++;
        c = c+2;
    }
}

// q03. takes a Point vector and starts them with random float values ​​-50 and 50.

void random_points(int n, point v[]){
    int max = 50;
    int min = -50;
    int quantity = 101;
    float rand_number = 0;

    for (int i = 0; i < n; i++){
        rand_number = ((rand()%max)/(float)50) * quantity - (quantity/(float)2);
        if (rand_number < min){
            v[i].x = min + rand_number;
        }else{
            v[i].x = rand_number;
        }
        rand_number = 0;
        rand_number = ((rand()%max)/(float)50) * quantity - (quantity/(float)2);
        if (rand_number < min){
            v[i].y = min - rand_number;
        }else{
            v[i].y = rand_number;
        }
    }
}

// q04. print the two closest points.

void nearest_points(int n, point v[]){
    point points = {v[0].x, v[0].y};
    float dist = distance(v[0], v[1]);
    for (int i = 2; i < n; i++)
    {
        if (distance(v[i], v[i+1]) < dist)
        {
            point points = {v[i].x, v[i].y};
            dist = distance(v[i], v[i+1]);
        }
        i++;
    }
    printf("\nNearest points: {%.3f, %.3f}\nDistance: %.3f", points.x, points.y, dist);
}

//MAIN

int main(){

    //q01

    point p1 = {2, 7};
    point p2 = {5, 12};
    float dist = distance(p1, p2);

    printf("\nDistance %.3f", dist);

    printf("\n\n_______  _(end)_  _______\n\n");

    // q02

    int len_vector = 4;
    point vector[] = {{3,4}, {5,6}, {-2,-10}, {-30,-1}};
    printf("\n>>Distance\n");
    distance_vector(len_vector, vector);

    printf("\n\n_______  _(end)_  _______\n\n");

    // q03

    int len_vectorI = 4;
    point vectorI[4];
    random_points(len_vectorI, vectorI);
    for (int i = 0; i < len_vectorI; i++){
        printf("\n(%.2f, ", vectorI[i].x);
        printf("%.2f)", vectorI[i].y);
    }
    

    printf("\n\n_______  _(end)_  _______\n\n");

    // q04

    nearest_points(len_vector, vector);
    
    printf("\n\n_______  _(end)_  _______\n\n");
    
}