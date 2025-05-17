#include <stdio.h>
#include <stdlib.h>

int main(){
    int num[10];
    int length = 0;
    while (length < 10){
        int input;
        scanf("%d", &input);
        if (input == 0){
            break;
        }
        num[length] = input;
        length ++;
    }

    printf("Numbers: ");
    for (int i = 0; i < length; i++){
        printf("%d ",num[i]);
    }
    printf("\n");
    system("pause");
    return 0;
}