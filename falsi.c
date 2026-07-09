#include <stdio.h>
#include <math.h>

// Function definition
float f(float x) {
    return x*x*x - x - 2;   // you can change equation if needed
}

int main() {
    float a, b, c;
    int i = 0;

    printf("Enter values of a and b: ");
    scanf("%f %f", &a, &b);

    // Check valid interval
    if(f(a) * f(b) >= 0) {
        printf("Invalid interval\n");
        return 0;
    }

    // Regula-Falsi method using do-while
    do {
        c = (a*f(b) - b*f(a)) / (f(b) - f(a));

        if(f(a) * f(c) < 0)
            b = c;
        else
            a = c;

        i++;

    } while(fabs(f(c)) > 0.001 && i < 50);

    printf("Root = %.4f\n", c);
    printf("Iterations = %d\n", i);

    return 0;
}