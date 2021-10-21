#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    if (isPrimeNumber(number) == 0) {

        printf("%d is not a prime number", number);
    }

    else {
        printf("%d is a prime number", number);
    }




    return 0;
}

int isPrimeNumber(int n) {
    int i;
    _Bool result = 1;
    for (i = 2; i < n; i++) {
        if (n % i == 0) {

            result = 0;
            return result;
            i = n;
        }

        else {
            return result;
        }
    }

}
