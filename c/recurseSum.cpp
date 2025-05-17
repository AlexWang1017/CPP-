#include <stdio.h>
#include <stdlib.h>

int sum(int n){
    int sum = 0;
    for (int i =1; i <= n; i++){
        sum += i;
    }
    return sum;
}




int main(){
    int n = 0;
    printf("Enter a number: \n");
    scanf("%d",&n);
    printf("%d\n",sum(n));

    system("pause");
    return 0;
}