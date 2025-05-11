#include <stdio.h>
#include <stdlib.h>

int main(){
    int num , sum , count;
    float avg;
    sum = 0;
    count = 0;
    do{
        printf("Enter a number: (0: quit) \n");
        scanf("%d", &num);
        sum += num;
        count ++;
    }while(num != 0);
    avg = (float)sum / count;
    printf("The sum is: %d\n", sum);
    printf("The average is: %f\n", avg);
    system("pause");
    return 0;
}