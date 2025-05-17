#include <stdio.h>
#include <stdlib.h>

int main() {
    int count = 0, num;

    printf("Enter a number: \n");
    scanf("%d", &num);

    if (num <= 1) {
        printf("%d is not a prime number.\n", num);
    } else {
        for (int i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                count++;
            }
        }

        if (count == 0) {
            printf("%d is a prime number.\n", num);
        } else {
            printf("%d is not a prime number.\n", num);
        }
    }

    system("pause");
    return 0;
}
