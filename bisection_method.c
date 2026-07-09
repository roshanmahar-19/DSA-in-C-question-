#include <stdio.h>
#include <math.h>

// Function definition
float f(float x) {
    return x*x*x - x - 2;   // example equation
}

int main() {
    float a, b, c;
    int i;

    printf("Enter initial guesses a and b: ");
    scanf("%f %f", &a, &b);

    // Check validity
    if (f(a) * f(b) >= 0) {
        printf("Invalid interval.\n");
        return 0;
    }

    // Bisection method loop
    for (i = 1; i <= 20; i++) {
        c = (a + b) / 2;

        if (f(c) == 0)
            break;

        else if (f(a) * f(c) < 0)
            b = c;
        else
            a = c;
    }

    printf("Root = %.4f\n", c);

    return 0;
}