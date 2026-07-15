//Area is the total space occupied by a two-dimensional shape.
//The area of a circle is calculated using the formula: Area = π * r^2, where r is the radius of the circle.
//Radius is the distance from the center of the circle to any point on its circumference.

//This program calculates the area of a circle based on user input for the radius.

#include<stdio.h>

int main() {

    //Declare variables to store the radius and area of the circle
    //Double data type is used to allow for decimal values in the radius and area.
    //Double is known for its precision and is suitable for calculations involving floating-point numbers.

    double radius, area;

    //Take user input for the radius of the circle
    printf("Enter the radius of the circle: ");
    
    //Use %lf format specifier for double data type in scanf function to read the radius value from the user.
    scanf("%lf", &radius);

    //Calculate the area of the circle using the formula.
    area = 3.14159 * radius * radius;

    //Display the calculated area to the user.s
    printf("The area of the circle is: %lf\n", area);
    return 0;
}

