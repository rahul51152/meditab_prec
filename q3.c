#include <stdio.h>
#include <stdbool.h>

bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }
    if (num <= 3) {
        return true;
    }
    if (num % 2 == 0 || num % 3 == 0) {
        return false;
    }
    for (int i = 5; i * i <= num; i += 6) {
        if (num % i == 0 || num % (i + 2) == 0){
            return false;
        }
    }
    return true;
}

void findFirstNPrimes(int N) {
    int count = 0;
    int num = 2; 

    while (count < N) {
        if (isPrime(num)) {
            printf("%d ", num);
            count++;
        }
        num++;
    }
    printf("\n");
}

int main() {
    int N;
    printf("Enter the value of N: ");
    scanf("%d", &N);

    printf("The first %d prime numbers are:\n", N);
    findFirstNPrimes(N);

    return 0;
}

