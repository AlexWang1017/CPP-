#include <stdio.h>
#include <stdlib.h>
//找因數

int main(){
    int num;
    printf("Enter a num: \n");
    scanf("%d",&num);
    for (int i =1; i <= num; i++){
        if (num % i == 0){
            printf("%d \n",i);
        }

    }

    system("pause");
    return 0;
}