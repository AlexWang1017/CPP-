#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(0));
    int v[10] , i;
    for (i = 0 ;i < 10; i++){
        v[i] = rand() % 100;
    }
    for (i = 0; i < 10 ; i++){
        printf("%d ",v[i]);
    }
    printf("\n");
    int max = v[0];
    for (i = 1; i < 10; i++){
        if(v[i] > max){
            max = v[i];
        }
    }
    printf("Max: %d\n", max);
    system("pause");
    return 0;
}