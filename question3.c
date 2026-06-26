#include <stdio.h>

// Recursive function to calculate binomial coefficient
int binomial(int n, int k) {
    // Base cases
    if (k == 0 || k == n)
        return 1;

    // Recursive relation
    return binomial(n - 1, k - 1) + binomial(n - 1, k);
}

int main() {
    int n , k ;
    printf("enter values of n and k:");
    scanf("%d %d",&n, &k);

    int result = binomial(n, k);

    printf("C(%d, %d) = %d\n", n, k, result);

    return 0;
}