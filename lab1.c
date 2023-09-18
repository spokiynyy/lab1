//
// Created by olegb on 9/18/2023.
//
#include <stdio.h>
#include <math.h>

double calculateExpression(double x, double y) {
    double result = 3 * pow(x, 2) + 1 + 2 * tan(x + 1) + 5 * y * (y - 2);
    return result;
}

int main() {
    double x, y;
    printf("Enter the values for x, y:");
    scanf("%lf %lf %lf", &x, &y);

    double result = calculateExpression(x, y);
    printf("Result: %.2lf", result);

    return 0;
}