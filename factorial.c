#include <stdio.h>

long long int factorial(int num) {
    if (num < 0) {
        return -1;
    }

    long long int result = 1;
    for (int i = 1; i <= num; i++) {
        result *= i;
    }
    return result;
}

int main() {
    int myNum;
    printf("Please insert a non-negative integer: ");
    if (scanf("%d", &myNum) != 1) {
        printf("Invalid input! Please enter an integer.\n");
        return 1;
    }

    if (myNum < 0) {
        printf("Factorial of a negative number is not defined.\n");
        return 1;
    }

    long long int result = factorial(myNum);
    if (result == -1) {
        printf("Factorial of a negative number is not defined.\n");
    } else {
        printf("Factorial(%d) = %lld\n", myNum, result);
    }

    return 0;
}
