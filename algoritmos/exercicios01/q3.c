#include <stdio.h>
#define pi 3.141593

int circle_diameter(int a){
    float diameter;
    diameter = 2*a;

    return diameter;
}

int circle_circumference(int a){
    float circumference;
    circumference = 2*pi*a;

    return circumference;
    
}
int circle_area(int a){
    float area;
    area = (pi*a)*(pi*a);

    return area;
}

int main(){
    int a;
    printf("\nRadius: ");
    scanf("%f", &a);

    int diameter= circle_diameter(a);
    int circumference= circle_circumference(a);
    int area= circle_area(a);

    printf("\n>>Diameter: ", diameter);
    printf("\n>>Circumference: ", circumference);
    printf("\n>>Area: ", area,"\n");

}