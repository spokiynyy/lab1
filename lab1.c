//
// Created by olegb on 9/18/2023.
//
#include <stdio.h>
#include <math.h>

double calculateExpression(double x, double y, double z) {
    double result = (3 * pow(x, 2) + 1) / (5 * y) + (2 * tan(x + 1)) / (y - 2);
    return result;
}

int main() {
    double x, y, z;
    printf("Enter the values for x, y, and z: ");
    scanf("%lf %lf %lf", &x, &y, &z);

    double result = calculateExpression(x, y, z);
    printf("Result: %.2lf", result);

    return 0;
}


