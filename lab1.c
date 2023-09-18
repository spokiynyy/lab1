//
// Created by olegb on 9/18/2023.
//
#include <stdio.h>
#include <math.h>

double calculateExpression(double x, double y, double z) {
    double result = tan(cos(x)) + (4 * sin(x)) / cos(y) + sqrt(y * z);
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