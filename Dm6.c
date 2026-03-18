#include <stdio.h>
// Function to calculate the greatest common divisor (GCD) using the Euclidean algorithm
int gcd(int a, int b) {
    // Base case: If a is 0, the GCD is b
    if (a == 0) {
        return b;
    }
    // Recursive call to calculate the GCD of b%a and a
    return gcd(b % a, a);
}
int main() {
    int a, b;
    printf("Enter two numbers to find GCD: ");
    scanf("%d %d", &a, &b);
    printf("GCD(%d, %d) = %d\n", a, b, gcd(a, b));
    return 0;
}