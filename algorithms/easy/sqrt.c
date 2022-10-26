#include <stdio.h>

int main() {
    // Using Newton's method

    double t;
    int number = 8;
    double squareRoot = number / 2;
    do {
         t = squareRoot;
         squareRoot = (t + (number / t)) / 2;

    } while ((t - squareRoot) != 0);

    printf("%f", t);
    return 0;
}