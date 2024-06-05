// Online C compiler to run C program online
#include <stdio.h>

void factorial(int factorialValue) {
    // while
    int result = 1;
    // might not run the true condition
    while(factorialValue > 0) {
        result *= factorialValue;
        factorialValue--;
    }
    printf("factorial: %d\n", result);
}

void printBetween(int start, int end) {
    for (int i=start; i<=end;i++) {
        printf("%d\n", i);
    }
}

int multiplication(int one, int two) {
    return one * two;
}

int isPrime(int value) {
    if (value <= 2) {
        return 1;
    }
    int center = value / 2;
    // avoid divided by 0 error
    for (int i=2; i<center; i++) {
        if (value % i == 0) {
            return 0;
        } 
    }
    return 1;
}

int main() {
    int factor, multiply1, multiply2, start, end;
    
    // printf("Factorial: ");
    // scanf("%d",&factor);
    // factorial(factor);
    
    printf("\nMultiplication 2 number separated by space");
    scanf("%d %d", &multiply1, &multiply2);
    int result2 = multiplication(multiply1, multiply2);
    printf("%d", result2);
    printf(" %s", isPrime(result2) ? "is a prime number": "not a prime number");
    
    // printf("\nPrint between - start & end separated by space");
    // scanf("%d %d", &start, &end);
    // printBetween(start, end);
    return 0;
}