#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(0));  // 使用現在時間作為種子，讓每次亂數不同
    for (int i = 1; i <= 5 ; i++){
        printf("%d\n", rand());
    }

    system("pause");
    return 0;
}
