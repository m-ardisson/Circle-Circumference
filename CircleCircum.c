#include <stdio.h>
//program calculates the circumference of a circle

int main(){

    const double PI = 3.14159;      //const or constant is
    double radius;                  //used to ensure the value is not changed
    double circum;
    double area; 

    printf("\nEnter the radius of a circle: ");
    scanf("%lf", &radius);

    circum = 2 * PI * radius; 
    area = PI * radius * radius;

    printf("The circumference is: %lf\n", circum);
    printf("The area is: %lf\n", area);
    
    return 0;
}
