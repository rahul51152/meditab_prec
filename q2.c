#include <stdio.h>

int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int main() {
    float input;
    printf("Enter a real number (up to 5 decimal places): ");
    scanf("%f", &input);

    int numerator = (int)(input * 100000);
    int denominator = 100000;
    int common_divisor = gcd(numerator, denominator);

    numerator /= common_divisor;
    denominator /= common_divisor;

    printf("Numerator: %d\nDenominator: %d\n", numerator, denominator);

    return 0;
}

