#include <stdio.h>
#include <stdlib.h>

int ThreeNumOfSum(int a ,int b, int c){
    return a + b+ c;
}




int main(){
    int a, b, c;
    printf("Enter three number: \n");
    scanf("%d %d %d", &a ,&b,&c);
    printf("%d \n",ThreeNumOfSum(a,b,c));
    system("pause");
    return 0;
}