#include <stdio.h>
#include <stdlib.h>

int main(){
    int nums[10] = {0};  // nums[0] to nums[9]
    int n;

    for (int i = 0; i < 10; i++){
        printf("Please enter (1 to 9): ");
        scanf("%d", &n);

        if (n >= 1 && n <= 9) {
            nums[n]++;
        } else {
            printf("Invalid input. Please enter a number between 1 and 9.\n");
            i--; // repeat this iteration
        }
    }

    int ans = 1; // start from 1 since 0 is not a valid input
    for (n = 2; n <= 9; n++){  // only check 1 to 9
        if(nums[n] > nums[ans]){
            ans = n;
        }
    }

    printf("Most frequent number: %d\n", ans);

    system("pause");
    return 0;
}
