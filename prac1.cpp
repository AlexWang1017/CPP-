#include <stdio.h>
#include <stdlib.h>

int main(){
    int num, sum;
    sum = 0;
    printf("Enter a number: (0: quit) \n");
    scanf("%d", &num);
    sum = num;
    while(num != 0){
        printf("Enter a number: (0: quit) \n");
        scanf("%d", &num);
        sum += num;
    }
    printf("The sum is: %d\n", sum);
    system("pause");
    return 0;
}