#include <stdio.h>
#include <math.h>


float calculate_hypotenuse (float leg_a, float leg_b) {

    float hypotenuse = sqrt(pow(leg_a, 2) + pow(leg_b, 2));

    return hypotenuse;
}

int main() {
    float a = 3.0;
    float b = 4.0;

    printf("%.2f\n", calculate_hypotenuse(a, b));  // Expected output: 5.00

    //Changing the values
    a = 5.0;
    b = 12.0;

    printf("%.2f\n", calculate_hypotenuse(a, b));  // Expected output: 13.00

    return 0;
}