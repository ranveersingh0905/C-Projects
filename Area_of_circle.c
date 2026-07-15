//Area is the total space occupied by a two-dimensional shape.
//The area of a circle is calculated using the formula: Area = π * r^2, where r is the radius of the circle.

//This program calculates the area of a circle based on user input for the radius.

#include<stdio.h>

int main() {
    double radius, area;

    //Take user input for the radius of the circle
    printf("Enter the radius of the circle: ");
    scanf("%lf", &radius);

    //Calculate the area of the circle using the formula.
    area = 3.14159 * radius * radius;

    //Display the calculated area to the user.
    printf("The area of the circle is: %lf\n", area);
    return 0;
}

